#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definition for CPU ID */
#define XPAR_CPU_ID 0U

/* Definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ 666666687


/******************************************************************/

/* Canonical definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ 666666687


/******************************************************************/

#include "xparameters_ps.h"

#define STDIN_BASEADDRESS 0xE0001000
#define STDOUT_BASEADDRESS 0xE0001000

/******************************************************************/

/* Platform specific definitions */
#define PLATFORM_ZYNQ
 
/* Definitions for sleep timer configuration */
#define XSLEEP_TIMER_IS_DEFAULT_TIMER
 
 
/******************************************************************/

/* Definitions for peripheral PS7_DDR_0 */
#define XPAR_PS7_DDR_0_S_AXI_BASEADDR 0x00100000
#define XPAR_PS7_DDR_0_S_AXI_HIGHADDR 0x3FFFFFFF


/******************************************************************/

/* Definitions for driver DEVCFG */
#define XPAR_XDCFG_NUM_INSTANCES 1U

/* Definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_PS7_DEV_CFG_0_DEVICE_ID 0U
#define XPAR_PS7_DEV_CFG_0_BASEADDR 0xF8007000U
#define XPAR_PS7_DEV_CFG_0_HIGHADDR 0xF80070FFU


/******************************************************************/

/* Canonical definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_XDCFG_0_DEVICE_ID XPAR_PS7_DEV_CFG_0_DEVICE_ID
#define XPAR_XDCFG_0_BASEADDR 0xF8007000U
#define XPAR_XDCFG_0_HIGHADDR 0xF80070FFU


/******************************************************************/

/* Definitions for driver DMAPS */
#define XPAR_XDMAPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_DMA_NS */
#define XPAR_PS7_DMA_NS_DEVICE_ID 0
#define XPAR_PS7_DMA_NS_BASEADDR 0xF8004000
#define XPAR_PS7_DMA_NS_HIGHADDR 0xF8004FFF


/* Definitions for peripheral PS7_DMA_S */
#define XPAR_PS7_DMA_S_DEVICE_ID 1
#define XPAR_PS7_DMA_S_BASEADDR 0xF8003000
#define XPAR_PS7_DMA_S_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_DMA_NS */
#define XPAR_XDMAPS_0_DEVICE_ID XPAR_PS7_DMA_NS_DEVICE_ID
#define XPAR_XDMAPS_0_BASEADDR 0xF8004000
#define XPAR_XDMAPS_0_HIGHADDR 0xF8004FFF

/* Canonical definitions for peripheral PS7_DMA_S */
#define XPAR_XDMAPS_1_DEVICE_ID XPAR_PS7_DMA_S_DEVICE_ID
#define XPAR_XDMAPS_1_BASEADDR 0xF8003000
#define XPAR_XDMAPS_1_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Definitions for driver EMACPS */
#define XPAR_XEMACPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_PS7_ETHERNET_0_DEVICE_ID 0
#define XPAR_PS7_ETHERNET_0_BASEADDR 0xE000B000
#define XPAR_PS7_ETHERNET_0_HIGHADDR 0xE000BFFF
#define XPAR_PS7_ETHERNET_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV1 5
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV1 50
#define XPAR_PS7_ETHERNET_0_ENET_TSU_CLK_FREQ_HZ 0


/******************************************************************/

#define XPAR_PS7_ETHERNET_0_IS_CACHE_COHERENT 0
#define XPAR_XEMACPS_0_IS_CACHE_COHERENT 0
/* Canonical definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_XEMACPS_0_DEVICE_ID XPAR_PS7_ETHERNET_0_DEVICE_ID
#define XPAR_XEMACPS_0_BASEADDR 0xE000B000
#define XPAR_XEMACPS_0_HIGHADDR 0xE000BFFF
#define XPAR_XEMACPS_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV1 1
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV1 5
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV1 50
#define XPAR_XEMACPS_0_ENET_TSU_CLK_FREQ_HZ 0


/******************************************************************/


/* Peripheral Definitions for peripheral PS7_AFI_0 */
#define XPAR_PS7_AFI_0_S_AXI_BASEADDR 0xF8008000
#define XPAR_PS7_AFI_0_S_AXI_HIGHADDR 0xF8008FFF


/* Peripheral Definitions for peripheral PS7_AFI_1 */
#define XPAR_PS7_AFI_1_S_AXI_BASEADDR 0xF8009000
#define XPAR_PS7_AFI_1_S_AXI_HIGHADDR 0xF8009FFF


/* Peripheral Definitions for peripheral PS7_AFI_2 */
#define XPAR_PS7_AFI_2_S_AXI_BASEADDR 0xF800A000
#define XPAR_PS7_AFI_2_S_AXI_HIGHADDR 0xF800AFFF


/* Peripheral Definitions for peripheral PS7_AFI_3 */
#define XPAR_PS7_AFI_3_S_AXI_BASEADDR 0xF800B000
#define XPAR_PS7_AFI_3_S_AXI_HIGHADDR 0xF800BFFF


/* Peripheral Definitions for peripheral PS7_DDRC_0 */
#define XPAR_PS7_DDRC_0_S_AXI_BASEADDR 0xF8006000
#define XPAR_PS7_DDRC_0_S_AXI_HIGHADDR 0xF8006FFF


/* Peripheral Definitions for peripheral PS7_GLOBALTIMER_0 */
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_BASEADDR 0xF8F00200
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_HIGHADDR 0xF8F002FF


/* Peripheral Definitions for peripheral PS7_GPV_0 */
#define XPAR_PS7_GPV_0_S_AXI_BASEADDR 0xF8900000
#define XPAR_PS7_GPV_0_S_AXI_HIGHADDR 0xF89FFFFF


/* Peripheral Definitions for peripheral PS7_INTC_DIST_0 */
#define XPAR_PS7_INTC_DIST_0_S_AXI_BASEADDR 0xF8F01000
#define XPAR_PS7_INTC_DIST_0_S_AXI_HIGHADDR 0xF8F01FFF


/* Peripheral Definitions for peripheral PS7_IOP_BUS_CONFIG_0 */
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_BASEADDR 0xE0200000
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_HIGHADDR 0xE0200FFF


/* Peripheral Definitions for peripheral PS7_L2CACHEC_0 */
#define XPAR_PS7_L2CACHEC_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_L2CACHEC_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Peripheral Definitions for peripheral PS7_OCMC_0 */
#define XPAR_PS7_OCMC_0_S_AXI_BASEADDR 0xF800C000
#define XPAR_PS7_OCMC_0_S_AXI_HIGHADDR 0xF800CFFF


/* Peripheral Definitions for peripheral PS7_PL310_0 */
#define XPAR_PS7_PL310_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_PL310_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Peripheral Definitions for peripheral PS7_PMU_0 */
#define XPAR_PS7_PMU_0_S_AXI_BASEADDR 0xF8891000
#define XPAR_PS7_PMU_0_S_AXI_HIGHADDR 0xF8891FFF
#define XPAR_PS7_PMU_0_PMU1_S_AXI_BASEADDR 0xF8893000
#define XPAR_PS7_PMU_0_PMU1_S_AXI_HIGHADDR 0xF8893FFF


/* Peripheral Definitions for peripheral PS7_QSPI_LINEAR_0 */
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_BASEADDR 0xFC000000
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_HIGHADDR 0xFCFFFFFF


/* Peripheral Definitions for peripheral PS7_RAM_0 */
#define XPAR_PS7_RAM_0_S_AXI_BASEADDR 0x00000000
#define XPAR_PS7_RAM_0_S_AXI_HIGHADDR 0x0003FFFF


/* Peripheral Definitions for peripheral PS7_RAM_1 */
#define XPAR_PS7_RAM_1_S_AXI_BASEADDR 0xFFFC0000
#define XPAR_PS7_RAM_1_S_AXI_HIGHADDR 0xFFFFFFFF


/* Peripheral Definitions for peripheral PS7_SCUC_0 */
#define XPAR_PS7_SCUC_0_S_AXI_BASEADDR 0xF8F00000
#define XPAR_PS7_SCUC_0_S_AXI_HIGHADDR 0xF8F000FC


/* Peripheral Definitions for peripheral PS7_SLCR_0 */
#define XPAR_PS7_SLCR_0_S_AXI_BASEADDR 0xF8000000
#define XPAR_PS7_SLCR_0_S_AXI_HIGHADDR 0xF8000FFF


/* Peripheral Definitions for peripheral AXI2REGS_0 */
#define XPAR_AXI2REGS_0_S00_AXI_BASEADDR 0x43C00000
#define XPAR_AXI2REGS_0_S00_AXI_HIGHADDR 0x43C00FFF


/******************************************************************/








































/******************************************************************/

/* Definitions for driver GPIOPS */
#define XPAR_XGPIOPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_GPIO_0 */
#define XPAR_PS7_GPIO_0_DEVICE_ID 0
#define XPAR_PS7_GPIO_0_BASEADDR 0xE000A000
#define XPAR_PS7_GPIO_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_GPIO_0 */
#define XPAR_XGPIOPS_0_DEVICE_ID XPAR_PS7_GPIO_0_DEVICE_ID
#define XPAR_XGPIOPS_0_BASEADDR 0xE000A000
#define XPAR_XGPIOPS_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Definitions for driver QSPIPS */
#define XPAR_XQSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_QSPI_0 */
#define XPAR_PS7_QSPI_0_DEVICE_ID 0
#define XPAR_PS7_QSPI_0_BASEADDR 0xE000D000
#define XPAR_PS7_QSPI_0_HIGHADDR 0xE000DFFF
#define XPAR_PS7_QSPI_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_PS7_QSPI_0_QSPI_MODE 0
#define XPAR_PS7_QSPI_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Canonical definitions for peripheral PS7_QSPI_0 */
#define XPAR_XQSPIPS_0_DEVICE_ID XPAR_PS7_QSPI_0_DEVICE_ID
#define XPAR_XQSPIPS_0_BASEADDR 0xE000D000
#define XPAR_XQSPIPS_0_HIGHADDR 0xE000DFFF
#define XPAR_XQSPIPS_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_XQSPIPS_0_QSPI_MODE 0
#define XPAR_XQSPIPS_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Definitions for Fabric interrupts connected to ps7_scugic_0 */
#define XPAR_FABRIC_PS_INTR_0_INTR 61U
#define XPAR_FABRIC_PS_INTR_1_INTR 62U
#define XPAR_FABRIC_PS_INTR_2_INTR 63U

/******************************************************************/

/* Canonical definitions for Fabric interrupts connected to ps7_scugic_0 */

/******************************************************************/

/* Definitions for driver SCUGIC */
#define XPAR_XSCUGIC_NUM_INSTANCES 1U

/* Definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_PS7_SCUGIC_0_DEVICE_ID 0U
#define XPAR_PS7_SCUGIC_0_BASEADDR 0xF8F00100U
#define XPAR_PS7_SCUGIC_0_HIGHADDR 0xF8F001FFU
#define XPAR_PS7_SCUGIC_0_DIST_BASEADDR 0xF8F01000U


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_SCUGIC_0_DEVICE_ID 0U
#define XPAR_SCUGIC_0_CPU_BASEADDR 0xF8F00100U
#define XPAR_SCUGIC_0_CPU_HIGHADDR 0xF8F001FFU
#define XPAR_SCUGIC_0_DIST_BASEADDR 0xF8F01000U


/******************************************************************/

/* Definitions for driver SCUTIMER */
#define XPAR_XSCUTIMER_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_PS7_SCUTIMER_0_DEVICE_ID 0
#define XPAR_PS7_SCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_PS7_SCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_XSCUTIMER_0_DEVICE_ID XPAR_PS7_SCUTIMER_0_DEVICE_ID
#define XPAR_XSCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_XSCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Definitions for driver SCUWDT */
#define XPAR_XSCUWDT_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_PS7_SCUWDT_0_DEVICE_ID 0
#define XPAR_PS7_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_PS7_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_SCUWDT_0_DEVICE_ID XPAR_PS7_SCUWDT_0_DEVICE_ID
#define XPAR_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Definitions for driver SDPS */
#define XPAR_XSDPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SD_0 */
#define XPAR_PS7_SD_0_DEVICE_ID 0
#define XPAR_PS7_SD_0_BASEADDR 0xE0100000
#define XPAR_PS7_SD_0_HIGHADDR 0xE0100FFF
#define XPAR_PS7_SD_0_SDIO_CLK_FREQ_HZ 25000000
#define XPAR_PS7_SD_0_HAS_CD 0
#define XPAR_PS7_SD_0_HAS_WP 0
#define XPAR_PS7_SD_0_BUS_WIDTH 0
#define XPAR_PS7_SD_0_MIO_BANK 0
#define XPAR_PS7_SD_0_HAS_EMIO 0
#define XPAR_PS7_SD_0_SLOT_TYPE 0
#define XPAR_PS7_SD_0_CLK_50_SDR_ITAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_SDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_DDR_ITAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_DDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_100_SDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_200_SDR_OTAP_DLY 0


/******************************************************************/

#define XPAR_PS7_SD_0_IS_CACHE_COHERENT 0
/* Canonical definitions for peripheral PS7_SD_0 */
#define XPAR_XSDPS_0_DEVICE_ID XPAR_PS7_SD_0_DEVICE_ID
#define XPAR_XSDPS_0_BASEADDR 0xE0100000
#define XPAR_XSDPS_0_HIGHADDR 0xE0100FFF
#define XPAR_XSDPS_0_SDIO_CLK_FREQ_HZ 25000000
#define XPAR_XSDPS_0_HAS_CD 0
#define XPAR_XSDPS_0_HAS_WP 0
#define XPAR_XSDPS_0_BUS_WIDTH 0
#define XPAR_XSDPS_0_MIO_BANK 0
#define XPAR_XSDPS_0_HAS_EMIO 0
#define XPAR_XSDPS_0_SLOT_TYPE 0
#define XPAR_XSDPS_0_IS_CACHE_COHERENT 0
#define XPAR_XSDPS_0_CLK_50_SDR_ITAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_SDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_DDR_ITAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_DDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_100_SDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_200_SDR_OTAP_DLY 0


/******************************************************************/

/* Definitions for driver SPI */
#define XPAR_XSPI_NUM_INSTANCES 3U

/* Definitions for peripheral AXI_QUAD_SPI_0 */
#define XPAR_AXI_QUAD_SPI_0_DEVICE_ID 0U
#define XPAR_AXI_QUAD_SPI_0_BASEADDR 0x41E00000U
#define XPAR_AXI_QUAD_SPI_0_HIGHADDR 0x41E0FFFFU
#define XPAR_AXI_QUAD_SPI_0_FIFO_EXIST 1U
#define XPAR_AXI_QUAD_SPI_0_FIFO_DEPTH 16U
#define XPAR_AXI_QUAD_SPI_0_SPI_SLAVE_ONLY 0U
#define XPAR_AXI_QUAD_SPI_0_NUM_SS_BITS 1U
#define XPAR_AXI_QUAD_SPI_0_NUM_TRANSFER_BITS 16U
#define XPAR_AXI_QUAD_SPI_0_SPI_MODE 0U
#define XPAR_AXI_QUAD_SPI_0_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_AXI_QUAD_SPI_0_AXI4_BASEADDR 0U
#define XPAR_AXI_QUAD_SPI_0_AXI4_HIGHADDR 0U
#define XPAR_AXI_QUAD_SPI_0_XIP_MODE 0U

/* Canonical definitions for peripheral AXI_QUAD_SPI_0 */
#define XPAR_SPI_0_DEVICE_ID 0U
#define XPAR_SPI_0_BASEADDR 0x41E00000U
#define XPAR_SPI_0_HIGHADDR 0x41E0FFFFU
#define XPAR_SPI_0_FIFO_EXIST 1U
#define XPAR_SPI_0_FIFO_DEPTH 16U
#define XPAR_SPI_0_SPI_SLAVE_ONLY 0U
#define XPAR_SPI_0_NUM_SS_BITS 1U
#define XPAR_SPI_0_NUM_TRANSFER_BITS 16U
#define XPAR_SPI_0_SPI_MODE 0U
#define XPAR_SPI_0_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_SPI_0_AXI4_BASEADDR 0U
#define XPAR_SPI_0_AXI4_HIGHADDR 0U
#define XPAR_SPI_0_XIP_MODE 0U
#define XPAR_SPI_0_USE_STARTUP 0U



/* Definitions for peripheral AXI_QUAD_SPI_1 */
#define XPAR_AXI_QUAD_SPI_1_DEVICE_ID 1U
#define XPAR_AXI_QUAD_SPI_1_BASEADDR 0x41E10000U
#define XPAR_AXI_QUAD_SPI_1_HIGHADDR 0x41E1FFFFU
#define XPAR_AXI_QUAD_SPI_1_FIFO_EXIST 1U
#define XPAR_AXI_QUAD_SPI_1_FIFO_DEPTH 16U
#define XPAR_AXI_QUAD_SPI_1_SPI_SLAVE_ONLY 0U
#define XPAR_AXI_QUAD_SPI_1_NUM_SS_BITS 1U
#define XPAR_AXI_QUAD_SPI_1_NUM_TRANSFER_BITS 16U
#define XPAR_AXI_QUAD_SPI_1_SPI_MODE 0U
#define XPAR_AXI_QUAD_SPI_1_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_AXI_QUAD_SPI_1_AXI4_BASEADDR 0U
#define XPAR_AXI_QUAD_SPI_1_AXI4_HIGHADDR 0U
#define XPAR_AXI_QUAD_SPI_1_XIP_MODE 0U

/* Canonical definitions for peripheral AXI_QUAD_SPI_1 */
#define XPAR_SPI_1_DEVICE_ID 1U
#define XPAR_SPI_1_BASEADDR 0x41E10000U
#define XPAR_SPI_1_HIGHADDR 0x41E1FFFFU
#define XPAR_SPI_1_FIFO_EXIST 1U
#define XPAR_SPI_1_FIFO_DEPTH 16U
#define XPAR_SPI_1_SPI_SLAVE_ONLY 0U
#define XPAR_SPI_1_NUM_SS_BITS 1U
#define XPAR_SPI_1_NUM_TRANSFER_BITS 16U
#define XPAR_SPI_1_SPI_MODE 0U
#define XPAR_SPI_1_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_SPI_1_AXI4_BASEADDR 0U
#define XPAR_SPI_1_AXI4_HIGHADDR 0U
#define XPAR_SPI_1_XIP_MODE 0U
#define XPAR_SPI_1_USE_STARTUP 0U



/* Definitions for peripheral AXI_QUAD_SPI_2 */
#define XPAR_AXI_QUAD_SPI_2_DEVICE_ID 2U
#define XPAR_AXI_QUAD_SPI_2_BASEADDR 0x41E20000U
#define XPAR_AXI_QUAD_SPI_2_HIGHADDR 0x41E2FFFFU
#define XPAR_AXI_QUAD_SPI_2_FIFO_EXIST 1U
#define XPAR_AXI_QUAD_SPI_2_FIFO_DEPTH 16U
#define XPAR_AXI_QUAD_SPI_2_SPI_SLAVE_ONLY 0U
#define XPAR_AXI_QUAD_SPI_2_NUM_SS_BITS 1U
#define XPAR_AXI_QUAD_SPI_2_NUM_TRANSFER_BITS 16U
#define XPAR_AXI_QUAD_SPI_2_SPI_MODE 0U
#define XPAR_AXI_QUAD_SPI_2_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_AXI_QUAD_SPI_2_AXI4_BASEADDR 0U
#define XPAR_AXI_QUAD_SPI_2_AXI4_HIGHADDR 0U
#define XPAR_AXI_QUAD_SPI_2_XIP_MODE 0U

/* Canonical definitions for peripheral AXI_QUAD_SPI_2 */
#define XPAR_SPI_2_DEVICE_ID 2U
#define XPAR_SPI_2_BASEADDR 0x41E20000U
#define XPAR_SPI_2_HIGHADDR 0x41E2FFFFU
#define XPAR_SPI_2_FIFO_EXIST 1U
#define XPAR_SPI_2_FIFO_DEPTH 16U
#define XPAR_SPI_2_SPI_SLAVE_ONLY 0U
#define XPAR_SPI_2_NUM_SS_BITS 1U
#define XPAR_SPI_2_NUM_TRANSFER_BITS 16U
#define XPAR_SPI_2_SPI_MODE 0U
#define XPAR_SPI_2_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_SPI_2_AXI4_BASEADDR 0U
#define XPAR_SPI_2_AXI4_HIGHADDR 0U
#define XPAR_SPI_2_XIP_MODE 0U
#define XPAR_SPI_2_USE_STARTUP 0U



/******************************************************************/

/* Definitions for driver SPIPS */
#define XPAR_XSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SPI_0 */
#define XPAR_PS7_SPI_0_DEVICE_ID 0
#define XPAR_PS7_SPI_0_BASEADDR 0xE0006000
#define XPAR_PS7_SPI_0_HIGHADDR 0xE0006FFF
#define XPAR_PS7_SPI_0_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Canonical definitions for peripheral PS7_SPI_0 */
#define XPAR_XSPIPS_0_DEVICE_ID XPAR_PS7_SPI_0_DEVICE_ID
#define XPAR_XSPIPS_0_BASEADDR 0xE0006000
#define XPAR_XSPIPS_0_HIGHADDR 0xE0006FFF
#define XPAR_XSPIPS_0_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Definitions for driver SYSMON */
#define XPAR_XSYSMON_NUM_INSTANCES 1U

/* Definitions for peripheral XADC_WIZ_0 */
#define XPAR_XADC_WIZ_0_IP_TYPE 0U
#define XPAR_XADC_WIZ_0_DEVICE_ID 0U
#define XPAR_XADC_WIZ_0_BASEADDR 0x44A00000U
#define XPAR_XADC_WIZ_0_HIGHADDR 0x44A0FFFFU
#define XPAR_XADC_WIZ_0_INCLUDE_INTR 1U


/******************************************************************/

/* Canonical definitions for peripheral XADC_WIZ_0 */
#define XPAR_SYSMON_0_IP_TYPE 0U
#define XPAR_SYSMON_0_DEVICE_ID XPAR_XADC_WIZ_0_DEVICE_ID
#define XPAR_SYSMON_0_BASEADDR 0x44A00000U
#define XPAR_SYSMON_0_HIGHADDR 0x44A0FFFFU
#define XPAR_SYSMON_0_INCLUDE_INTR 1U


/******************************************************************/

/* Definitions for driver UARTLITE */
#define XPAR_XUARTLITE_NUM_INSTANCES 9U

/* Definitions for peripheral AXI_UARTLITE_0 */
#define XPAR_AXI_UARTLITE_0_DEVICE_ID 0U
#define XPAR_AXI_UARTLITE_0_BASEADDR 0x42C00000U
#define XPAR_AXI_UARTLITE_0_HIGHADDR 0x42C0FFFFU
#define XPAR_AXI_UARTLITE_0_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_0_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_0_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_0_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_0 */
#define XPAR_UARTLITE_0_DEVICE_ID 0U
#define XPAR_UARTLITE_0_BASEADDR 0x42C00000U
#define XPAR_UARTLITE_0_HIGHADDR 0x42C0FFFFU
#define XPAR_UARTLITE_0_BAUDRATE 115200U
#define XPAR_UARTLITE_0_USE_PARITY 0U
#define XPAR_UARTLITE_0_ODD_PARITY 0U
#define XPAR_UARTLITE_0_DATA_BITS 8U



/* Definitions for peripheral AXI_UARTLITE_1 */
#define XPAR_AXI_UARTLITE_1_DEVICE_ID 1U
#define XPAR_AXI_UARTLITE_1_BASEADDR 0x42C10000U
#define XPAR_AXI_UARTLITE_1_HIGHADDR 0x42C1FFFFU
#define XPAR_AXI_UARTLITE_1_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_1_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_1_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_1_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_1 */
#define XPAR_UARTLITE_1_DEVICE_ID 1U
#define XPAR_UARTLITE_1_BASEADDR 0x42C10000U
#define XPAR_UARTLITE_1_HIGHADDR 0x42C1FFFFU
#define XPAR_UARTLITE_1_BAUDRATE 115200U
#define XPAR_UARTLITE_1_USE_PARITY 0U
#define XPAR_UARTLITE_1_ODD_PARITY 0U
#define XPAR_UARTLITE_1_DATA_BITS 8U



/* Definitions for peripheral AXI_UARTLITE_2 */
#define XPAR_AXI_UARTLITE_2_DEVICE_ID 2U
#define XPAR_AXI_UARTLITE_2_BASEADDR 0x42C20000U
#define XPAR_AXI_UARTLITE_2_HIGHADDR 0x42C2FFFFU
#define XPAR_AXI_UARTLITE_2_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_2_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_2_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_2_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_2 */
#define XPAR_UARTLITE_2_DEVICE_ID 2U
#define XPAR_UARTLITE_2_BASEADDR 0x42C20000U
#define XPAR_UARTLITE_2_HIGHADDR 0x42C2FFFFU
#define XPAR_UARTLITE_2_BAUDRATE 115200U
#define XPAR_UARTLITE_2_USE_PARITY 0U
#define XPAR_UARTLITE_2_ODD_PARITY 0U
#define XPAR_UARTLITE_2_DATA_BITS 8U



/* Definitions for peripheral AXI_UARTLITE_3 */
#define XPAR_AXI_UARTLITE_3_DEVICE_ID 3U
#define XPAR_AXI_UARTLITE_3_BASEADDR 0x42C30000U
#define XPAR_AXI_UARTLITE_3_HIGHADDR 0x42C3FFFFU
#define XPAR_AXI_UARTLITE_3_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_3_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_3_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_3_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_3 */
#define XPAR_UARTLITE_3_DEVICE_ID 3U
#define XPAR_UARTLITE_3_BASEADDR 0x42C30000U
#define XPAR_UARTLITE_3_HIGHADDR 0x42C3FFFFU
#define XPAR_UARTLITE_3_BAUDRATE 115200U
#define XPAR_UARTLITE_3_USE_PARITY 0U
#define XPAR_UARTLITE_3_ODD_PARITY 0U
#define XPAR_UARTLITE_3_DATA_BITS 8U



/* Definitions for peripheral AXI_UARTLITE_4 */
#define XPAR_AXI_UARTLITE_4_DEVICE_ID 4U
#define XPAR_AXI_UARTLITE_4_BASEADDR 0x42C40000U
#define XPAR_AXI_UARTLITE_4_HIGHADDR 0x42C4FFFFU
#define XPAR_AXI_UARTLITE_4_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_4_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_4_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_4_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_4 */
#define XPAR_UARTLITE_4_DEVICE_ID 4U
#define XPAR_UARTLITE_4_BASEADDR 0x42C40000U
#define XPAR_UARTLITE_4_HIGHADDR 0x42C4FFFFU
#define XPAR_UARTLITE_4_BAUDRATE 115200U
#define XPAR_UARTLITE_4_USE_PARITY 0U
#define XPAR_UARTLITE_4_ODD_PARITY 0U
#define XPAR_UARTLITE_4_DATA_BITS 8U



/* Definitions for peripheral AXI_UARTLITE_5 */
#define XPAR_AXI_UARTLITE_5_DEVICE_ID 5U
#define XPAR_AXI_UARTLITE_5_BASEADDR 0x42C50000U
#define XPAR_AXI_UARTLITE_5_HIGHADDR 0x42C5FFFFU
#define XPAR_AXI_UARTLITE_5_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_5_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_5_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_5_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_5 */
#define XPAR_UARTLITE_5_DEVICE_ID 5U
#define XPAR_UARTLITE_5_BASEADDR 0x42C50000U
#define XPAR_UARTLITE_5_HIGHADDR 0x42C5FFFFU
#define XPAR_UARTLITE_5_BAUDRATE 115200U
#define XPAR_UARTLITE_5_USE_PARITY 0U
#define XPAR_UARTLITE_5_ODD_PARITY 0U
#define XPAR_UARTLITE_5_DATA_BITS 8U



/* Definitions for peripheral AXI_UARTLITE_6 */
#define XPAR_AXI_UARTLITE_6_DEVICE_ID 6U
#define XPAR_AXI_UARTLITE_6_BASEADDR 0x42C60000U
#define XPAR_AXI_UARTLITE_6_HIGHADDR 0x42C6FFFFU
#define XPAR_AXI_UARTLITE_6_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_6_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_6_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_6_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_6 */
#define XPAR_UARTLITE_6_DEVICE_ID 6U
#define XPAR_UARTLITE_6_BASEADDR 0x42C60000U
#define XPAR_UARTLITE_6_HIGHADDR 0x42C6FFFFU
#define XPAR_UARTLITE_6_BAUDRATE 115200U
#define XPAR_UARTLITE_6_USE_PARITY 0U
#define XPAR_UARTLITE_6_ODD_PARITY 0U
#define XPAR_UARTLITE_6_DATA_BITS 8U



/* Definitions for peripheral AXI_UARTLITE_7 */
#define XPAR_AXI_UARTLITE_7_DEVICE_ID 7U
#define XPAR_AXI_UARTLITE_7_BASEADDR 0x42C70000U
#define XPAR_AXI_UARTLITE_7_HIGHADDR 0x42C7FFFFU
#define XPAR_AXI_UARTLITE_7_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_7_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_7_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_7_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_7 */
#define XPAR_UARTLITE_7_DEVICE_ID 7U
#define XPAR_UARTLITE_7_BASEADDR 0x42C70000U
#define XPAR_UARTLITE_7_HIGHADDR 0x42C7FFFFU
#define XPAR_UARTLITE_7_BAUDRATE 115200U
#define XPAR_UARTLITE_7_USE_PARITY 0U
#define XPAR_UARTLITE_7_ODD_PARITY 0U
#define XPAR_UARTLITE_7_DATA_BITS 8U



/* Definitions for peripheral AXI_UARTLITE_8 */
#define XPAR_AXI_UARTLITE_8_DEVICE_ID 8U
#define XPAR_AXI_UARTLITE_8_BASEADDR 0x42C80000U
#define XPAR_AXI_UARTLITE_8_HIGHADDR 0x42C8FFFFU
#define XPAR_AXI_UARTLITE_8_BAUDRATE 115200U
#define XPAR_AXI_UARTLITE_8_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_8_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_8_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_8 */
#define XPAR_UARTLITE_8_DEVICE_ID 8U
#define XPAR_UARTLITE_8_BASEADDR 0x42C80000U
#define XPAR_UARTLITE_8_HIGHADDR 0x42C8FFFFU
#define XPAR_UARTLITE_8_BAUDRATE 115200U
#define XPAR_UARTLITE_8_USE_PARITY 0U
#define XPAR_UARTLITE_8_ODD_PARITY 0U
#define XPAR_UARTLITE_8_DATA_BITS 8U


/******************************************************************/
/* Definitions for driver UARTPS */
#define XPAR_XUARTPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_UART_1 */
#define XPAR_PS7_UART_1_DEVICE_ID 0
#define XPAR_PS7_UART_1_BASEADDR 0xE0001000
#define XPAR_PS7_UART_1_HIGHADDR 0xE0001FFF
#define XPAR_PS7_UART_1_UART_CLK_FREQ_HZ 50000000
#define XPAR_PS7_UART_1_HAS_MODEM 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_UART_1 */
#define XPAR_XUARTPS_0_DEVICE_ID XPAR_PS7_UART_1_DEVICE_ID
#define XPAR_XUARTPS_0_BASEADDR 0xE0001000
#define XPAR_XUARTPS_0_HIGHADDR 0xE0001FFF
#define XPAR_XUARTPS_0_UART_CLK_FREQ_HZ 50000000
#define XPAR_XUARTPS_0_HAS_MODEM 0


/******************************************************************/

/* Definition for input Clock */
/* Definitions for driver XADCPS */
#define XPAR_XADCPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_XADC_0 */
#define XPAR_PS7_XADC_0_DEVICE_ID 0
#define XPAR_PS7_XADC_0_BASEADDR 0xF8007100
#define XPAR_PS7_XADC_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Canonical definitions for peripheral PS7_XADC_0 */
#define XPAR_XADCPS_0_DEVICE_ID XPAR_PS7_XADC_0_DEVICE_ID
#define XPAR_XADCPS_0_BASEADDR 0xF8007100
#define XPAR_XADCPS_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Xilinx FAT File System Library (XilFFs) User Settings */
#define FILE_SYSTEM_INTERFACE_SD
#define FILE_SYSTEM_USE_MKFS
#define FILE_SYSTEM_NUM_LOGIC_VOL 2
#define FILE_SYSTEM_USE_STRFUNC 0
#define FILE_SYSTEM_SET_FS_RPATH 0
#define FILE_SYSTEM_WORD_ACCESS
#endif  /* end of protection macro */