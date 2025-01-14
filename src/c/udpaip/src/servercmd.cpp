#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <thread>
#include <assert.h>
#include "socket.h"
//#include "commondef.h"
#include "sharedcmd.h"
#include  "asynclog.h"

extern unsigned int * regs_a;
int log_active = 0;

static int task_active=0;
//board command server
int servercmd_start(int server_port){
    int count=1;
    if(task_active !=0){
        fprintf(stderr,"%s.%d ERROR allrady start \n\r",__func__,__LINE__);
        return -1;
    }

	task_active = 1;
    fprintf(stderr,"start %d readers \n\r",count);

    std::thread t([&count,server_port] {
    	int src_ip=0,src_port=0;
		int rx_size;
        int socket = Socket_UDPServer(server_port);
        cmd_data_t *pcmd = (cmd_data_t *) calloc(1,sizeof(cmd_data_t));
        while(task_active){
            if(!Socket_IsRxPacketMS(socket,100)){
               continue;
            }
            //rx_size = Socket_ReceiveFrom(socket,(unsigned char *)pcmd,sizeof(udpcmd_t),(unsigned int *)&src_ip,(unsigned short  *)&src_port);
            rx_size = Socket_ReceiveFrom(socket,(unsigned char *)pcmd,sizeof(cmd_data_t),(unsigned int *)&src_ip,(unsigned short  *)&src_port);
//            if(pcmd->hdr.sync != SYNC){
//				fprintf(stderr,"%s.%d worng sync\n\r",__func__,__LINE__);
//				continue;
//			}
            //fprintf(stderr,"reader pkt rx(%d) \n\r",retr);
            switch(pcmd->cmd1.message_id){
                case  CMD_OP1:
                {
					// replay
					//if((pcmd->hdr.length != sizeof(pcmd->data.tx_op1)) || (rx_size != (sizeof(pcmd->data.tx_op1) + sizeof(cmdhdr_t)))){
					if(rx_size != (sizeof(pcmd->cmd1))){
						printf("%s.%d  worng packet size  \n\r",__func__,__LINE__);
						continue;
					}
					printf("Got cmd(%d) \n\r",pcmd->cmd1.message_id);
					count++;
                }
				break;
                case  CMD_OP2:
                {
					if(rx_size != (sizeof(pcmd->cmd2))){
						printf("%s.%d  worng packet size  \n\r",__func__,__LINE__);
						continue;
					}
					printf("Got cmd(%d) tcu_id(%d) on_off(%d)\n\r",pcmd->cmd2.message_id, pcmd->cmd2.tcu_id, pcmd->cmd2.on_off);
    				count++;
				}
				break;
                case  CMD_OP3:
                {
					if(rx_size != (sizeof(pcmd->cmd3))){
						printf("%s.%d  worng packet size  \n\r",__func__,__LINE__);
						continue;
					}
					printf("Got cmd(%d) command(%d) \n\r",pcmd->cmd3.message_id, pcmd->cmd3.command);
        		    count++;
        		    if(pcmd->cmd3.command == 0){ // stop log
        		    	end_async_log();
        		    	log_active = 0;
        		    	printf("Stopping Log \n\r");
        		    }
        		    if(pcmd->cmd3.command == 1){ // start log
        		    	std::string log_name = create_log_name();
                        start_async_log(1024,log_name,"127.0.0.1",4000);
        		        log_active = 1;
        		        printf("starting log filename: %s\n\r",log_name.c_str());
        		    }
        		    if(pcmd->cmd3.command == 2){ // erase log
        		        erase_log();
        		    	log_active = 0;
        		        printf("erasing log\n\r");
        		    }
				}
				break;
                case  CMD_OP4:
                {
					if(rx_size != (sizeof(pcmd->cmd4))){
						printf("%s.%d  worng packet size  \n\r",__func__,__LINE__);
						continue;
					}
					printf("Got cmd(%d) gmt_time(%d) gmt_microseconds(%d)\n\r",pcmd->cmd4.message_id, pcmd->cmd4.gmt_time, pcmd->cmd4.microseconds);
					count++;
                }
				break;
                case  CMD_OP5:
                {
					int ret;
					unsigned int reg_val = 0;
                	if(rx_size != (sizeof(pcmd->cmd5))){
						printf("%s.%d  worng packet size  \n\r",__func__,__LINE__);
						continue;
					}
					printf("Got cmd(%d) command(%d) reg_a(%d) reg_d(%d)\n\r",pcmd->cmd5.message_id, pcmd->cmd5.command, pcmd->cmd5.reg_address, pcmd->cmd5.reg_data);
					if(pcmd->cmd5.command == 0){ // write
						//regs_a[pcmd->cmd5.reg_address] = pcmd->cmd5.reg_data;
						//reg_val = regs_a[pcmd->cmd5.reg_address];
					}
					else if (pcmd->cmd5.command == 1){ // read
						//reg_val = regs_a[pcmd->cmd5.reg_address];
					}

					cmd5_reg_rw_t *resp = (cmd5_reg_rw_t *) calloc(1,sizeof(cmd5_reg_rw_t));
					resp->command = pcmd->cmd5.command;
					resp->reg_address = pcmd->cmd5.reg_address;
					resp->reg_data = reg_val;
					ret = Socket_SendTo(socket,(unsigned char*)resp,sizeof(cmd5_reg_rw_t),src_ip,src_port);
					printf("Sent %d bytes, cmd(%d) command(%d) reg_a(%d) reg_d(%d)\n\r",ret, resp->message_id, resp->command, resp->reg_address, resp->reg_data);
					free(resp);
					count++;
                }
				break;
                default:
                    break; 
            }
       }    
		if(socket)
			Socket_Close(socket);
		printf("%s.%d exit server \n\r",__func__,__LINE__);
		return 0;
    });
    t.detach();
		
    return 0;
}

void servercmd_stop(){
     task_active =0;
}



