library ieee;
use ieee.std_logic_1164.all;

package regs_pkg is
    constant REG_WIDTH : integer := 32;
    subtype full_reg_range is integer range REG_WIDTH - 1 downto 0;
    
    type regs_names_t is (
        REGS_VERSION   ,
        FPGA_VERSION   ,
        COMPILE_TIME   ,
        BITSTREAM_TIME ,
        GENERAL_CONTROL,
        GENERAL_STATUS ,
        TIMESTAMP_L    ,
        TIMESTAMP_H    ,
        IO_IN          ,
        IO_OUT0        ,
        IO_OUT1        ,
        NO_REG
    );
    -- NUM_REGS is the neto no. of registers if there are holes there should be another constant for the address space size 
    constant NUM_REGS:  natural := regs_names_t'POS(regs_names_t'RIGHT) + 1;
    constant REGS_SPACE_SIZE : natural := NUM_REGS;
    
    -- this array is for mem access from external master, where master gives an address and wishes to access a register, but inside the FPGA everything works by name and not address.
    type regs_a_t is array(REGS_SPACE_SIZE - 1 downto 0) of regs_names_t;
    constant regs_a: regs_a_t := (
         0 => REGS_VERSION   , -- @suppress "Incorrect array size in assignment: expected (<NUM_REGS>) but was (<8>)"
         1 => FPGA_VERSION   ,
         2 => COMPILE_TIME   ,
         3 => BITSTREAM_TIME ,
         4 => GENERAL_CONTROL,
         5 => GENERAL_STATUS ,
         6 => TIMESTAMP_L    ,
         7 => TIMESTAMP_H    ,
         8 => IO_IN          ,
         9 => IO_OUT0        ,
        10 => IO_OUT1        ,
        others => NO_REG
    );
    
    type reg_array_t is array (regs_names_t) of std_logic_vector(full_reg_range);
    type reg_arrays_t is array (natural range <>) of reg_array_t;
    type reg_slv_array_t is array (regs_names_t) of std_logic;
    type reg_slv_arrays_t is array (natural range <>) of reg_slv_array_t;
    
    ----------------------------------------------------------------------------------  
    -- bit fields in registers (using named ranges for vectors and constants for bits)
    ----------------------------------------------------------------------------------  
    -- fields for REGS_VERSION,FPGA_VERSION
    subtype VERSION_MINOR                           is integer range 15 downto 0;
    subtype VERSION_MAJOR                           is integer range 31 downto 16;
    -- fields for COMPILE_TIME
    subtype TIME_STAMP_HOUR                         is integer range 7 downto 0;
    subtype TIME_STAMP_YEAR                         is integer range 15 downto 8;
    subtype TIME_STAMP_MONTH                        is integer range 23 downto 16;
    subtype TIME_STAMP_DAY                          is integer range 31 downto 24;
    -- fiels for GENERAL_CONTROL
    constant CONTROL_SW_RESET                       : integer := 0;
    constant CONTROL_IO_DEBUG_EN                    : integer := 1;
    -- fiels for IO_IN
    constant IO_IN_POWERON_FPGA                     : integer :=  0;      
    constant IO_IN_FAN_PG1_FPGA                     : integer :=  1;      
    constant IO_IN_FAN_HALL1_FPGA                   : integer :=  2;     
    constant IO_IN_FAN_PG3_FPGA                     : integer :=  3;      
    constant IO_IN_FAN_HALL3_FPGA                   : integer :=  4;     
    constant IO_IN_FAN_PG2_FPGA                     : integer :=  5;      
    constant IO_IN_FAN_HALL2_FPGA                   : integer :=  6;     
    constant IO_IN_PG_BUCK_FB                       : integer :=  7;      
    constant IO_IN_PG_PSU_1_FB                      : integer :=  8;      
    constant IO_IN_PG_PSU_2_FB                      : integer :=  9;      
    constant IO_IN_PG_PSU_5_FB                      : integer := 10;      
    constant IO_IN_PG_PSU_6_FB                      : integer := 11;      
    constant IO_IN_PG_PSU_7_FB                      : integer := 12;      
    constant IO_IN_PG_PSU_8_FB                      : integer := 13;      
    constant IO_IN_PG_PSU_9_FB                      : integer := 14;      
    constant IO_IN_PG_PSU_10_FB                     : integer := 15;      
    constant IO_IN_lamp_status_fpga                 : integer := 16;  
    constant IO_IN_PH_A_ON_fpga                     : integer := 17;   
    constant IO_IN_PH_B_ON_fpga                     : integer := 18;   
    constant IO_IN_PH_C_ON_fpga                     : integer := 19;
    subtype IO_IN_range                             is integer range IO_IN_PH_C_ON_fpga downto IO_IN_POWERON_FPGA;
    -- fields for IO_OUT0
    constant IO_OUT0_FAN_EN1_FPGA                   : integer :=  0;
    constant IO_OUT0_FAN_CTRL1_FPGA                 : integer :=  1;
    constant IO_OUT0_P_IN_STATUS_FPGA               : integer :=  2;
    constant IO_OUT0_POD_STATUS_FPGA                : integer :=  3;
    constant IO_OUT0_ECTCU_INH_FPGA                 : integer :=  4;
    constant IO_OUT0_P_OUT_STATUS_FPGA              : integer :=  5;
    constant IO_OUT0_CCTCU_INH_FPGA                 : integer :=  6;
    constant IO_OUT0_SHUTDOWN_OUT_FPGA              : integer :=  7;
    constant IO_OUT0_RESET_OUT_FPGA                 : integer :=  8;
    constant IO_OUT0_SPARE_OUT_FPGA                 : integer :=  9;
    constant IO_OUT0_ESHUTDOWN_OUT_FPGA             : integer := 10;
    constant IO_OUT0_RELAY_1PH_FPGA                 : integer := 11;
    constant IO_OUT0_RELAY_3PH_FPGA                 : integer := 12;
    constant IO_OUT0_FAN_EN3_FPGA                   : integer := 13;
    constant IO_OUT0_FAN_CTRL3_FPGA                 : integer := 14;
    constant IO_OUT0_FAN_EN2_FPGA                   : integer := 15;
    constant IO_OUT0_FAN_CTRL2_FPGA                 : integer := 16;
    constant IO_OUT0_EN_PFC_FB                      : integer := 17;
    constant IO_OUT0_EN_PSU_1_FB                    : integer := 18;
    constant IO_OUT0_EN_PSU_2_FB                    : integer := 19;
    constant IO_OUT0_EN_PSU_5_FB                    : integer := 20;
    constant IO_OUT0_EN_PSU_6_FB                    : integer := 21; 
    constant IO_OUT0_EN_PSU_7_FB                    : integer := 22; 
    constant IO_OUT0_EN_PSU_8_FB                    : integer := 23; 
    constant IO_OUT0_EN_PSU_9_FB                    : integer := 24; 
    constant IO_OUT0_EN_PSU_10_FB                   : integer := 25;
    subtype IO_OUT0_range                           is integer range  IO_OUT0_EN_PSU_10_FB downto IO_OUT0_FAN_EN1_FPGA;
    -- fields for IO_OUT0
    constant IO_OUT1_RS485_DE_7                     : integer :=  0; 
    constant IO_OUT1_RS485_DE_8                     : integer :=  1; 
    constant IO_OUT1_RS485_DE_9                     : integer :=  2; 
    constant IO_OUT1_RS485_DE_1                     : integer :=  3; 
    constant IO_OUT1_RS485_DE_2                     : integer :=  4; 
    constant IO_OUT1_RS485_DE_3                     : integer :=  5; 
    constant IO_OUT1_RS485_DE_4                     : integer :=  6;
    constant IO_OUT1_RS485_DE_5                     : integer :=  7;
    constant IO_OUT1_RS485_DE_6                     : integer :=  8;
    subtype IO_OUT1_range                           is integer range  IO_OUT1_RS485_DE_6 downto IO_OUT1_RS485_DE_7;

    --------------------------------------------------------------------------------    
    -- initial values for parameters 
    --------------------------------------------------------------------------------    
    constant REGS_VERSION_CONST     : std_logic_vector(full_reg_range) := X"00000001"; -- version 00.01:   
    constant FPGA_VERSION_CONST     : std_logic_vector(full_reg_range) := X"00010000"; -- version (major,minor,revision,0) : 0,1,0,0
    --------------------------------------------------------------------------------------------------------    
    -- Registers - Constants to declere reset values and used register (and bits) for logic minimization
    --------------------------------------------------------------------------------------------------------
    
    constant REGISTERS_INIT : reg_array_t := (
        REGS_VERSION    => REGS_VERSION_CONST,
        FPGA_VERSION    => FPGA_VERSION_CONST,
        others          => X"00000000"
    );
    
    constant READABLE_REGISTERS     : reg_slv_array_t := (
        NO_REG                   => '0',
        others                   => '1' -- default all are readable
    );        
                                                                                
    constant WRITEABLE_REGS : reg_array_t := (
        BITSTREAM_TIME                => X"FFFFFFFF",
        GENERAL_CONTROL               => X"0000000F",
        GENERAL_STATUS                => X"0000000F",
        TIMESTAMP_L                   => X"FFFFFFFF",
        TIMESTAMP_H                   => X"FFFFFFFF",
        IO_IN                         => X"000FFFFF",
        IO_OUT0                       => X"03FFFFFF",
        IO_OUT1                       => X"000001FF",
        others                        => X"00000000" -- constant regs are not writable
    );
    
    constant INTERNALY_WRITEABLE_REGS   : reg_slv_array_t := (
        BITSTREAM_TIME               => '1',
        GENERAL_STATUS               => '1',
        TIMESTAMP_L                  => '1',
        TIMESTAMP_H                  => '1',
        IO_OUT0                      => '1',
        IO_OUT1                      => '1',
        others                       => '0'
    );

    constant CPU_WRITEABLE_REGS : reg_slv_array_t := (
        GENERAL_CONTROL               => '1',
        IO_IN                         => '1',
        others                        => '0'   -- unused, constant regs and internally writable regs are not cpu writable
    );
    
    --------------------------------------------------------------------------------------------------------    
    -- Functions
    --------------------------------------------------------------------------------------------------------
    function update_synthesis_time(val: std_logic_vector(full_reg_range)) return reg_array_t;
    function "and" (left, right: reg_slv_array_t) return reg_slv_array_t;
    function "or" (left, right: reg_slv_array_t) return reg_slv_array_t;
    function "and" (left, right: reg_slv_arrays_t) return reg_slv_arrays_t;
    function "or" (left, right: reg_slv_arrays_t) return reg_slv_arrays_t;
    
    
end;

package body regs_pkg is
    function update_synthesis_time(val: std_logic_vector(full_reg_range)) return reg_array_t is
        variable init_new : reg_array_t := REGISTERS_INIT;
    begin
        init_new(COMPILE_TIME) := val;
        return init_new;        
    end;    
    
    function "and" (left, right: reg_slv_array_t) return reg_slv_array_t is
        variable o : reg_slv_array_t;
    begin
        for i in reg_slv_array_t'range loop
            o(i) := left(i) and right(i);
        end loop;
        return o;
    end;
    
    function "or" (left, right: reg_slv_array_t) return reg_slv_array_t is
        variable o : reg_slv_array_t;
    begin
        for i in reg_slv_array_t'range loop
            o(i) := left(i) or right(i);
        end loop;
        return o;
    end;
    
    function "and" (left, right: reg_slv_arrays_t) return reg_slv_arrays_t is
        variable o : reg_slv_arrays_t(right'range);
    begin
        for i in right'range loop
            o(i) := left(i) and right(i);
        end loop;
        return o;
    end;
    
    function "or" (left, right: reg_slv_arrays_t) return reg_slv_arrays_t is
        variable o : reg_slv_arrays_t(right'range);
    begin
        for i in right'range loop
            o(i) := left(i) or right(i);
        end loop;
        return o;
    end;
    
    
end regs_pkg;