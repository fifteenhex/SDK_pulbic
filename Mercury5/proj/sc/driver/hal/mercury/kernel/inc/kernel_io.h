/*
 * kernel_io.h
 *
 *  Created on: 2017�~8��27��
 *      Author: titan.huang
 */
#ifndef __KERNEL_IO_H__
#define __KERNEL_IO_H__

#define BIT0    0x1
#define BIT1    0x2
#define BIT2    0x4
#define BIT3    0x8
#define BIT4    0x10
#define BIT5    0x20
#define BIT6    0x40
#define BIT7    0x80
#define BIT8    0x100
#define BIT9    0x200
#define BIT10   0x400
#define BIT11   0x800
#define BIT12   0x1000
#define BIT13   0x2000
#define BIT14   0x4000
#define BIT15   0x8000

//chiptop offset,bank = 0x101E ,R/W 16-bits
#define IO_PAD_FUART_MODE       0x03
    #define IO_PAD_FUART_MODE_OFS       0
    #define IO_PAD_FUART_MODE_MASK      BIT0|BIT1|BIT2
#define IO_PAD_UART0_MODE       0x03
    #define IO_PAD_UART0_MODE_OFS       4
    #define IO_PAD_UART0_MODE_MASK      BIT4
#define IO_PAD_UART1_MODE       0x03
    #define IO_PAD_UART1_MODE_OFS       8
    #define IO_PAD_UART1_MODE_MASK      BIT10|BIT9|BIT8
#define IO_PAD_SR_MODE          0x06
    #define IO_PAD_SR_MODE_OFS          0
    #define IO_PAD_SR_MODE_MASK         BIT0|BIT1|BIT2
#define IO_PAD_SR_I2C_MODE      0x06
    #define IO_PAD_SR_I2C_MODE_OFS      4
    #define IO_PAD_SR_I2C_MODE_MASK     BIT5|BIT4
#define IO_PAD_PWM0_MODE        0x07
    #define IO_PAD_PWM0_MODE_OFS        0
    #define IO_PAD_PWM0_MODE_MASK       BIT0|BIT1|BIT2
#define IO_PAD_PWM1_MODE        0x07
    #define IO_PAD_PWM1_MODE_OFS        3
    #define IO_PAD_PWM1_MODE_MASK       BIT5|BIT4|BIT3
#define IO_PAD_PWM2_MODE        0x07
    #define IO_PAD_PWM2_MODE_OFS        6
    #define IO_PAD_PWM2_MODE_MASK       BIT8|BIT7|BIT6
#define IO_PAD_PWM3_MODE        0x07
    #define IO_PAD_PWM3_MODE_OFS        9
    #define IO_PAD_PWM3_MODE_MASK       BIT11|BIT10|BIT9
#define IO_PAD_PWM4_MODE        0x07
    #define IO_PAD_PWM4_MODE_OFS        12
    #define IO_PAD_PWM4_MODE_MASK       BIT14|BIT13|BIT12
#define IO_PAD_PWM5_MODE        0x08
    #define IO_PAD_PWM5_MODE_OFS        0
    #define IO_PAD_PWM5_MODE_MASK       BIT2|BIT1|BIT0
#define IO_PAD_PWM6_MODE        0x08
    #define IO_PAD_PWM6_MODE_OFS        3
    #define IO_PAD_PWM6_MODE_MASK       BIT5|BIT4|BIT3
#define IO_PAD_PWM7_MODE        0x08
    #define IO_PAD_PWM7_MODE_OFS        6
    #define IO_PAD_PWM7_MODE_MASK       BIT8|BIT7|BIT6
#define IO_PAD_NAND_MODE        0x08
    #define IO_PAD_NAND_MODE_OFS        9
    #define IO_PAD_NAND_MODE_MASK       BIT9
#define IO_PAD_SD_MODE          0x08
    #define IO_PAD_SD_MODE_OFS          10
    #define IO_PAD_SD_MODE_MASK         BIT11|BIT10
#define IO_PAD_SDIO_MODE        0x08
    #define IO_PAD_SDIO_MODE_OFS        12
    #define IO_PAD_SDIO_MODE_MASK       BIT14|BIT13|BIT12
#define IO_PAD_I2C0_MODE        0x09
    #define IO_PAD_I2C0_MODE_OFS        0
    #define IO_PAD_I2C0_MODE_MASK       BIT1|BIT0
#define IO_PAD_I2C1_MODE        0x09
    #define IO_PAD_I2C1_MODE_OFS        4
    #define IO_PAD_I2C1_MODE_MASK       BIT5|BIT4
#define IO_PAD_SPI0_MODE        0x0c
    #define IO_PAD_SPI0_MODE_OFS        0
    #define IO_PAD_SPI0_MODE_MASK       BIT2|BIT1|BIT0
#define IO_PAD_SPI1_MODE        0x0c
    #define IO_PAD_SPI1_MODE_OFS        4
    #define IO_PAD_SPI1_MODE_MASK       BIT6|BIT5|BIT4
#define IO_PAD_EJ_MODE          0x0f
    #define IO_PAD_EJ_MODE_OFS          0
    #define IO_PAD_EJ_MODE_MASK         BIT2|BIT1|BIT0
#define IO_PAD_ETH_MODE         0x0f
    #define IO_PAD_ETH_MODE_OFS         3
    #define IO_PAD_ETH_MODE_MASK        BIT3
#define IO_PAD_CCIR_MODE        0x0f
    #define IO_PAD_CCIR_MODE_OFS        4
    #define IO_PAD_CCIR_MODE_MASK       BIT5|BIT4
#define IO_PAD_TTL_MODE         0x0f
    #define IO_PAD_TTL_MODE_OFS         6
    #define IO_PAD_TTL_MODE_MASK        BIT6
#define IO_PAD_DMIC_MODE        0x0f
    #define IO_PAD_DMIC_MODE_OFS        8
    #define IO_PAD_DMIC_MODE_MASK       BIT10|BIT9|BIT8
#define IO_PAD_I2S_MODE         0x0f
    #define IO_PAD_I2S_MODE_OFS         12
    #define IO_PAD_I2S_MODE_MASK        BIT13|BIT12
#define IO_PAD_TESTIN_MODE      0x12
    #define IO_PAD_TESTIN_MODE_OFS      0
    #define IO_PAD_TESTIN_MODE_MASK     BIT1|BIT0
#define IO_PAD_TESTOUT_MODE     0x12
    #define IO_PAD_TESTOUT_MODE_OFS     4
    #define IO_PAD_TESTOUT_MODE_MASK    BIT5|BIT4
#define IO_PAD_EMMC_MODE        0x13
    #define IO_PAD_EMMC_MODE_OFS        0
    #define IO_PAD_EMMC_MODE_MASK       BIT1|BIT0
#define IO_PAD_P180_16B_MODE    0x14
    #define IO_PAD_P180_16B_MODE_OFS    0
    #define IO_PAD_P180_16B_MODE_MASK   BIT0
#define IO_PAD_P180_18B_MODE    0x14
    #define IO_PAD_P180_18B_MODE_OFS    1
    #define IO_PAD_P180_18B_MODE_MASK   BIT1
#define IO_PAD_P180_8B_MODE     0x14
    #define IO_PAD_P180_8B_MODE_OFS     2
    #define IO_PAD_P180_8B_MODE_MASK    BIT2
#define IO_PAD_RGB_16B_MODE     0x14
    #define IO_PAD_RGB_16B_MODE_OFS     3
    #define IO_PAD_RGB_16B_MODE_MASK    BIT4|BIT3
#define IO_PAD_RGB_18B_MODE     0x14
    #define IO_PAD_RGB_18B_MODE_OFS     6
    #define IO_PAD_RGB_18B_MODE_MASK    BIT6
#define IO_PAD_RGB_24B_MODE     0x14
    #define IO_PAD_RGB_24B_MODE_OFS     7
    #define IO_PAD_RGB_24B_MODE_MASK    BIT7
#define IO_PAD_RGB_8B_MODE      0x14
    #define IO_PAD_RGB_8B_MODE_OFS      8
    #define IO_PAD_RGB_8B_MODE_MASK     BIT9|BIT8
#define IO_PAD_SD30_MODE        0x14
    #define IO_PAD_SD30_MODE_OFS        10
    #define IO_PAD_SD30_MODE_MASK       BIT11|BIT10
#define IO_PAD_SPI2_MODE        0x14
    #define IO_PAD_SPI2_MODE_OFS        12
    #define IO_PAD_SPI2_MODE_MASK       BIT14|BIT13|BIT12
#define IO_PAD_SR0_BT601_MODE   0x15
    #define IO_PAD_SR0_BT601_MODE_OFS   0
    #define IO_PAD_SR0_BT601_MODE_MASK  BIT2|BIT1|BIT0
#define IO_PAD_SR0_BT656_MODE   0x15
    #define IO_PAD_SR0_BT656_MODE_OFS   4
    #define IO_PAD_SR0_BT656_MODE_MASK  BIT6|BIT5|BIT4
#define IO_PAD_SR0_MIPI_MODE    0x15
    #define IO_PAD_SR0_MIPI_MODE_OFS    8
    #define IO_PAD_SR0_MIPI_MODE_MASK   BIT9|BIT8
#define IO_PAD_SR0_PAR_MODE     0x15
    #define IO_PAD_SR0_PAR_MODE_OFS     10
    #define IO_PAD_SR0_PAR_MODE_MASK    BIT11|BIT10
#define IO_PAD_SR1_BT656_MODE   0x15
    #define IO_PAD_SR1_BT656_MODE_OFS   12
    #define IO_PAD_SR1_BT656_MODE_MASK  BIT12
#define IO_PAD_SR1_MIPI_MODE    0x15
    #define IO_PAD_SR1_MIPI_MODE_OFS    13
    #define IO_PAD_SR1_MIPI_MODE_MASK   BIT15|BIT14|BIT13
#define IO_PAD_TX_MIPI_MODE     0x16
    #define IO_PAD_TX_MIPI_MODE_OFS     0
    #define IO_PAD_TX_MIPI_MODE_MASK    BIT1|BIT0
#define IO_PAD_UART2_MODE       0x16
    #define IO_PAD_UART2_MODE_OFS       2
    #define IO_PAD_UART2_MODE_MASK      BIT4|BIT3|BIT2
#define IO_PAD_I2C2_MODE        0x16
    #define IO_PAD_I2C2_MODE_OFS        8
    #define IO_PAD_I2C2_MODE_MASK       BIT9|BIT8
#define IO_PAD_I2C3_MODE        0x16
    #define IO_PAD_I2C3_MODE_OFS        10
    #define IO_PAD_I2C3_MODE_MASK       BIT11|BIT10
#define IO_PAD_I2C1_DUAL_MODE   0x17
    #define IO_PAD_I2C1_DUAL_MODE_OFS   0
    #define IO_PAD_I2C1_DUAL_MODE_MASK  BIT1|BIT0

#define IO_PAD_PM_UART_RX_SEL       0x53
    #define IO_PAD_PM_UART_RX_MASK       BIT3|BIT2|BIT1|BIT0
    #define IO_PAD_PM_UART_RX_UART0         BIT1
    #define IO_PAD_PM_UART_RX_UART1         BIT1|BIT0
    #define IO_PAD_PM_UART_RX_FUART         BIT0

//padtop offset,bank = 0x103C ,R/W 8-bits
#define IO_SDIO_GPIO0           0x00*2
    #define IO_SDIO_GPIO0_IN    BIT0
    #define IO_SDIO_GPIO0_OUT   BIT4
    #define IO_SDIO_GPIO0_OEN   BIT5
#define IO_SDIO_GPIO1           0x01*2
    #define IO_SDIO_GPIO1_IN    BIT0
    #define IO_SDIO_GPIO1_OUT   BIT4
    #define IO_SDIO_GPIO1_OEN   BIT5
#define IO_SDIO_GPIO2           0x02*2
    #define IO_SDIO_GPIO2_IN    BIT0
    #define IO_SDIO_GPIO2_OUT   BIT4
    #define IO_SDIO_GPIO2_OEN   BIT5
#define IO_SDIO_GPIO3           0x03*2
    #define IO_SDIO_GPIO3_IN    BIT0
    #define IO_SDIO_GPIO3_OUT   BIT4
    #define IO_SDIO_GPIO3_OEN   BIT5
#define IO_SDIO_GPIO4           0x04*2
    #define IO_SDIO_GPIO4_IN    BIT0
    #define IO_SDIO_GPIO4_OUT   BIT4
    #define IO_SDIO_GPIO4_OEN   BIT5
#define IO_SDIO_GPIO5           0x05*2
    #define IO_SDIO_GPIO5_IN    BIT0
    #define IO_SDIO_GPIO5_OUT   BIT4
    #define IO_SDIO_GPIO5_OEN   BIT5
#define IO_BOND_GPI_IN          0x06*2  //unknow
#define IO_SAR0_GPIO0           0x0a*2
    #define IO_SAR0_GPIO0_IN    BIT0
    #define IO_SAR0_GPIO0_OUT   BIT4
    #define IO_SAR0_GPIO0_OEN   BIT5
#define IO_SAR0_GPIO1           0x0b*2
    #define IO_SAR0_GPIO1_IN    BIT0
    #define IO_SAR0_GPIO1_OUT   BIT4
    #define IO_SAR0_GPIO1_OEN   BIT5
#define IO_SAR0_GPIO2           0x0c*2
    #define IO_SAR0_GPIO2_IN    BIT0
    #define IO_SAR0_GPIO2_OUT   BIT4
    #define IO_SAR0_GPIO2_OEN   BIT5
#define IO_SAR0_GPIO3           0x0d*2
    #define IO_SAR0_GPIO3_IN    BIT0
    #define IO_SAR0_GPIO3_OUT   BIT4
    #define IO_SAR0_GPIO3_OEN   BIT5
#define IO_SAR0_GPIO4           0x0e*2
    #define IO_SAR0_GPIO4_IN    BIT0
    #define IO_SAR0_GPIO4_OUT   BIT4
    #define IO_SAR0_GPIO4_OEN   BIT5
#define IO_SAR0_GPIO5           0x0f*2
    #define IO_SAR0_GPIO5_IN    BIT0
    #define IO_SAR0_GPIO5_OUT   BIT4
    #define IO_SAR0_GPIO5_OEN   BIT5
#define IO_SAR0_GPIO6           0x10*2
    #define IO_SAR0_GPIO6_IN    BIT0
    #define IO_SAR0_GPIO6_OUT   BIT4
    #define IO_SAR0_GPIO6_OEN   BIT5
#define IO_FUART_GPIO0          0x14*2
    #define IO_FUART_GPIO0_IN   BIT0
    #define IO_FUART_GPIO0_OUT  BIT4
    #define IO_FUART_GPIO0_OEN  BIT5
#define IO_FUART_GPIO1          0x15*2
    #define IO_FUART_GPIO1_IN   BIT0
    #define IO_FUART_GPIO1_OUT  BIT4
    #define IO_FUART_GPIO1_OEN  BIT5
#define IO_FUART_GPIO2          0x16*2
    #define IO_FUART_GPIO2_IN   BIT0
    #define IO_FUART_GPIO2_OUT  BIT4
    #define IO_FUART_GPIO2_OEN  BIT5
#define IO_FUART_GPIO3          0x17*2
    #define IO_FUART_GPIO3_IN   BIT0
    #define IO_FUART_GPIO3_OUT  BIT4
    #define IO_FUART_GPIO3_OEN  BIT5
#define IO_UART0_GPIO0          0x18*2
    #define IO_UART0_GPIO0_IN   BIT0
    #define IO_UART0_GPIO0_OUT  BIT4
    #define IO_UART0_GPIO0_OEN  BIT5
#define IO_UART0_GPIO1          0x19*2
    #define IO_UART0_GPIO1_IN   BIT0
    #define IO_UART0_GPIO1_OUT  BIT4
    #define IO_UART0_GPIO1_OEN  BIT5
#define IO_UART1_GPIO0          0x1a*2
    #define IO_UART1_GPIO0_IN   BIT0
    #define IO_UART1_GPIO0_OUT  BIT4
    #define IO_UART1_GPIO0_OEN  BIT5
#define IO_UART1_GPIO1          0x1b*2
    #define IO_UART1_GPIO1_IN   BIT0
    #define IO_UART1_GPIO1_OUT  BIT4
    #define IO_UART1_GPIO1_OEN  BIT5
#define IO_SR0D_GPIO0           0x20*2
    #define IO_SR0D_GPIO0_IN    BIT0
    #define IO_SR0D_GPIO0_OUT   BIT4
    #define IO_SR0D_GPIO0_OEN   BIT5
#define IO_SR0D_GPIO1           0x21*2
    #define IO_SR0D_GPIO1_IN    BIT0
    #define IO_SR0D_GPIO1_OUT   BIT4
    #define IO_SR0D_GPIO1_OEN   BIT5
#define IO_SR0D_GPIO2           0x22*2
    #define IO_SR0D_GPIO2_IN    BIT0
    #define IO_SR0D_GPIO2_OUT   BIT4
    #define IO_SR0D_GPIO2_OEN   BIT5
#define IO_SR0D_GPIO3           0x23*2
    #define IO_SR0D_GPIO3_IN    BIT0
    #define IO_SR0D_GPIO3_OUT   BIT4
    #define IO_SR0D_GPIO3_OEN   BIT5
#define IO_SR0D_GPIO4           0x24*2
    #define IO_SR0D_GPIO4_IN    BIT0
    #define IO_SR0D_GPIO4_OUT   BIT4
    #define IO_SR0D_GPIO4_OEN   BIT5
#define IO_SR0D_GPIO5           0x25*2
    #define IO_SR0D_GPIO5_IN    BIT0
    #define IO_SR0D_GPIO5_OUT   BIT4
    #define IO_SR0D_GPIO5_OEN   BIT5
#define IO_SR0D_GPIO6           0x26*2
    #define IO_SR0D_GPIO6_IN    BIT0
    #define IO_SR0D_GPIO6_OUT   BIT4
    #define IO_SR0D_GPIO6_OEN   BIT5
#define IO_SR0D_GPIO7           0x27*2
    #define IO_SR0D_GPIO7_IN    BIT0
    #define IO_SR0D_GPIO7_OUT   BIT4
    #define IO_SR0D_GPIO7_OEN   BIT5
#define IO_SR0D_GPIO8           0x28*2
    #define IO_SR0D_GPIO8_IN    BIT0
    #define IO_SR0D_GPIO8_OUT   BIT4
    #define IO_SR0D_GPIO8_OEN   BIT5
#define IO_SR0D_GPIO9           0x29*2
    #define IO_SR0D_GPIO9_IN    BIT0
    #define IO_SR0D_GPIO9_OUT   BIT4
    #define IO_SR0D_GPIO9_OEN   BIT5
#define IO_SR0D_GPIO10          0x2a*2
    #define IO_SR0D_GPIO10_IN   BIT0
    #define IO_SR0D_GPIO10_OUT  BIT4
    #define IO_SR0D_GPIO10_OEN  BIT5
#define IO_SR0D_GPIO11          0x2b*2
    #define IO_SR0D_GPIO11_IN   BIT0
    #define IO_SR0D_GPIO11_OUT  BIT4
    #define IO_SR0D_GPIO11_OEN  BIT5
#define IO_SR1_GPIO0            0x2c*2
    #define IO_SR1_GPIO0_IN     BIT0
    #define IO_SR1_GPIO0_OUT    BIT4
    #define IO_SR1_GPIO0_OEN    BIT5
#define IO_SR1_GPIO1            0x2d*2
    #define IO_SR1_GPIO1_IN     BIT0
    #define IO_SR1_GPIO1_OUT    BIT4
    #define IO_SR1_GPIO1_OEN    BIT5
#define IO_SR1_GPIO2            0x2e*2
    #define IO_SR1_GPIO2_IN     BIT0
    #define IO_SR1_GPIO2_OUT    BIT4
    #define IO_SR1_GPIO2_OEN    BIT5
#define IO_SR1_GPIO3            0x2f*2
    #define IO_SR1_GPIO3_IN     BIT0
    #define IO_SR1_GPIO3_OUT    BIT4
    #define IO_SR1_GPIO3_OEN    BIT5
#define IO_SR1_GPIO4            0x30*2
    #define IO_SR1_GPIO4_IN     BIT0
    #define IO_SR1_GPIO4_OUT    BIT4
    #define IO_SR1_GPIO4_OEN    BIT5
#define IO_SR1D_GPIO0           0x31*2
    #define IO_SR1D_GPIO0_IN    BIT0
    #define IO_SR1D_GPIO0_OUT   BIT4
    #define IO_SR1D_GPIO0_OEN   BIT5
#define IO_SR1D_GPIO1           0x32*2
    #define IO_SR1D_GPIO1_IN    BIT0
    #define IO_SR1D_GPIO1_OUT   BIT4
    #define IO_SR1D_GPIO1_OEN   BIT5
#define IO_SR1D_GPIO2           0x33*2
    #define IO_SR1D_GPIO2_IN    BIT0
    #define IO_SR1D_GPIO2_OUT   BIT4
    #define IO_SR1D_GPIO2_OEN   BIT5
#define IO_SR1D_GPIO3           0x34*2
    #define IO_SR1D_GPIO3_IN    BIT0
    #define IO_SR1D_GPIO3_OUT   BIT4
    #define IO_SR1D_GPIO3_OEN   BIT5
#define IO_SR1D_GPIO4           0x35*2
    #define IO_SR1D_GPIO4_IN    BIT0
    #define IO_SR1D_GPIO4_OUT   BIT4
    #define IO_SR1D_GPIO4_OEN   BIT5
#define IO_SR1D_GPIO5           0x36*2
    #define IO_SR1D_GPIO5_IN    BIT0
    #define IO_SR1D_GPIO5_OUT   BIT4
    #define IO_SR1D_GPIO5_OEN   BIT5
#define IO_LCD_GPIO0            0x40*2
    #define IO_LCD_GPIO0_IN     BIT0
    #define IO_LCD_GPIO0_OUT    BIT4
    #define IO_LCD_GPIO0_OEN    BIT5
#define IO_LCD_GPIO1            0x41*2
    #define IO_LCD_GPIO1_IN     BIT0
    #define IO_LCD_GPIO1_OUT    BIT4
    #define IO_LCD_GPIO1_OEN    BIT5
#define IO_LCD_GPIO2            0x42*2
    #define IO_LCD_GPIO2_IN     BIT0
    #define IO_LCD_GPIO2_OUT    BIT4
    #define IO_LCD_GPIO2_OEN    BIT5
#define IO_LCD_GPIO3            0x43*2
    #define IO_LCD_GPIO3_IN     BIT0
    #define IO_LCD_GPIO3_OUT    BIT4
    #define IO_LCD_GPIO3_OEN    BIT5
#define IO_LCD_GPIO4            0x44*2
    #define IO_LCD_GPIO4_IN     BIT0
    #define IO_LCD_GPIO4_OUT    BIT4
    #define IO_LCD_GPIO4_OEN    BIT5
#define IO_LCD_GPIO5            0x45*2
    #define IO_LCD_GPIO5_IN     BIT0
    #define IO_LCD_GPIO5_OUT    BIT4
    #define IO_LCD_GPIO5_OEN    BIT5
#define IO_LCD_GPIO6            0x46*2
    #define IO_LCD_GPIO6_IN     BIT0
    #define IO_LCD_GPIO6_OUT    BIT4
    #define IO_LCD_GPIO6_OEN    BIT5
#define IO_LCD_GPIO7            0x47*2
    #define IO_LCD_GPIO7_IN     BIT0
    #define IO_LCD_GPIO7_OUT    BIT4
    #define IO_LCD_GPIO7_OEN    BIT5
#define IO_LCD_GPIO8            0x48*2
    #define IO_LCD_GPIO8_IN     BIT0
    #define IO_LCD_GPIO8_OUT    BIT4
    #define IO_LCD_GPIO8_OEN    BIT5
#define IO_LCD_GPIO9            0x49*2
    #define IO_LCD_GPIO9_IN     BIT0
    #define IO_LCD_GPIO9_OUT    BIT4
    #define IO_LCD_GPIO9_OEN    BIT5
#define IO_LCD_GPIO10           0x4a*2
    #define IO_LCD_GPIO10_IN    BIT0
    #define IO_LCD_GPIO10_OUT   BIT4
    #define IO_LCD_GPIO10_OEN   BIT5
#define IO_LCD_GPIO11           0x4b*2
    #define IO_LCD_GPIO11_IN    BIT0
    #define IO_LCD_GPIO11_OUT   BIT4
    #define IO_LCD_GPIO11_OEN   BIT5
#define IO_LCD_GPIO12           0x4c*2
    #define IO_LCD_GPIO12_IN    BIT0
    #define IO_LCD_GPIO12_OUT   BIT4
    #define IO_LCD_GPIO12_OEN   BIT5
#define IO_LCD_GPIO13           0x4d*2
    #define IO_LCD_GPIO13_IN    BIT0
    #define IO_LCD_GPIO13_OUT   BIT4
    #define IO_LCD_GPIO13_OEN   BIT5
#define IO_LCD_GPIO14           0x4e*2
    #define IO_LCD_GPIO14_IN    BIT0
    #define IO_LCD_GPIO14_OUT   BIT4
    #define IO_LCD_GPIO14_OEN   BIT5
#define IO_LCD_GPIO15           0x4f*2
    #define IO_LCD_GPIO15_IN    BIT0
    #define IO_LCD_GPIO15_OUT   BIT4
    #define IO_LCD_GPIO15_OEN   BIT5
#define IO_LCD_GPIO16           0x50*2
    #define IO_LCD_GPIO16_IN    BIT0
    #define IO_LCD_GPIO16_OUT   BIT4
    #define IO_LCD_GPIO16_OEN   BIT5
#define IO_LCD_GPIO17           0x51*2
    #define IO_LCD_GPIO17_IN    BIT0
    #define IO_LCD_GPIO17_OUT   BIT4
    #define IO_LCD_GPIO17_OEN   BIT5
#define IO_LCD_GPIO18           0x52*2
    #define IO_LCD_GPIO18_IN    BIT0
    #define IO_LCD_GPIO18_OUT   BIT4
    #define IO_LCD_GPIO18_OEN   BIT5
#define IO_LCD_GPIO19           0x53*2
    #define IO_LCD_GPIO19_IN    BIT0
    #define IO_LCD_GPIO19_OUT   BIT4
    #define IO_LCD_GPIO19_OEN   BIT5
#define IO_LCD_GPIO20           0x54*2
    #define IO_LCD_GPIO20_IN    BIT0
    #define IO_LCD_GPIO20_OUT   BIT4
    #define IO_LCD_GPIO20_OEN   BIT5
#define IO_LCD_GPIO21           0x55*2
    #define IO_LCD_GPIO21_IN    BIT0
    #define IO_LCD_GPIO21_OUT   BIT4
    #define IO_LCD_GPIO21_OEN   BIT5
#define IO_LCD_GPIO22           0x56*2
    #define IO_LCD_GPIO22_IN    BIT0
    #define IO_LCD_GPIO22_OUT   BIT4
    #define IO_LCD_GPIO22_OEN   BIT5
#define IO_LCD_GPIO23           0x57*2
    #define IO_LCD_GPIO23_IN    BIT0
    #define IO_LCD_GPIO23_OUT   BIT4
    #define IO_LCD_GPIO23_OEN   BIT5
#define IO_LCD_GPIO24           0x58*2
    #define IO_LCD_GPIO24_IN    BIT0
    #define IO_LCD_GPIO24_OUT   BIT4
    #define IO_LCD_GPIO24_OEN   BIT5
#define IO_LCD_GPIO25           0x59*2
    #define IO_LCD_GPIO25_IN    BIT0
    #define IO_LCD_GPIO25_OUT   BIT4
    #define IO_LCD_GPIO25_OEN   BIT5
#define IO_LCD_GPIO26           0x5a*2
    #define IO_LCD_GPIO26_IN    BIT0
    #define IO_LCD_GPIO26_OUT   BIT4
    #define IO_LCD_GPIO26_OEN   BIT5
#define IO_LCD_GPIO27           0x5b*2
    #define IO_LCD_GPIO27_IN    BIT0
    #define IO_LCD_GPIO27_OUT   BIT4
    #define IO_LCD_GPIO27_OEN   BIT5
#define IO_LCD_GPIO28           0x5c*2
    #define IO_LCD_GPIO28_IN    BIT0
    #define IO_LCD_GPIO28_OUT   BIT4
    #define IO_LCD_GPIO28_OEN   BIT5
#define IO_LCD_GPIO29           0x5d*2
    #define IO_LCD_GPIO29_IN    BIT0
    #define IO_LCD_GPIO29_OUT   BIT4
    #define IO_LCD_GPIO29_OEN   BIT5
#define IO_LCD_GPIO30           0x5e*2
    #define IO_LCD_GPIO30_IN    BIT0
    #define IO_LCD_GPIO30_OUT   BIT4
    #define IO_LCD_GPIO30_OEN   BIT5
#define IO_LCD_GPIO31           0x5f*2
    #define IO_LCD_GPIO31_IN    BIT0
    #define IO_LCD_GPIO31_OUT   BIT4
    #define IO_LCD_GPIO31_OEN   BIT5
#define IO_LCD_GPIO32           0x60*2
    #define IO_LCD_GPIO32_IN    BIT0
    #define IO_LCD_GPIO32_OUT   BIT4
    #define IO_LCD_GPIO32_OEN   BIT5
#define IO_LCD_GPIO33           0x61*2
    #define IO_LCD_GPIO33_IN    BIT0
    #define IO_LCD_GPIO33_OUT   BIT4
    #define IO_LCD_GPIO33_OEN   BIT5
#define IO_LCD_GPIO34           0x62*2
    #define IO_LCD_GPIO34_IN    BIT0
    #define IO_LCD_GPIO34_OUT   BIT4
    #define IO_LCD_GPIO34_OEN   BIT5
#define IO_SD_GPIO0             0x68*2
    #define IO_SD_GPIO0_IN      BIT0
    #define IO_SD_GPIO0_OUT     BIT4
    #define IO_SD_GPIO0_OEN     BIT5
#define IO_SD_GPIO1             0x69*2
    #define IO_SD_GPIO1_IN      BIT0
    #define IO_SD_GPIO1_OUT     BIT4
    #define IO_SD_GPIO1_OEN     BIT5
#define IO_SD_GPIO2             0x6a*2
    #define IO_SD_GPIO2_IN      BIT0
    #define IO_SD_GPIO2_OUT     BIT4
    #define IO_SD_GPIO2_OEN     BIT5
#define IO_SD_GPIO3             0x6b*2
    #define IO_SD_GPIO3_IN      BIT0
    #define IO_SD_GPIO3_OUT     BIT4
    #define IO_SD_GPIO3_OEN     BIT5
#define IO_SD_GPIO4             0x6c*2
    #define IO_SD_GPIO4_IN      BIT0
    #define IO_SD_GPIO4_OUT     BIT4
    #define IO_SD_GPIO4_OEN     BIT5
#define IO_I2C0_GPIO0           0x6e*2
    #define IO_I2C0_GPIO0_IN    BIT0
    #define IO_I2C0_GPIO0_OUT   BIT4
    #define IO_I2C0_GPIO0_OEN   BIT5
#define IO_I2C0_GPIO1           0x6f*2
    #define IO_I2C0_GPIO1_IN    BIT0
    #define IO_I2C0_GPIO1_OUT   BIT4
    #define IO_I2C0_GPIO1_OEN   BIT5
#define IO_SPI0_GPIO0           0x70*2
    #define IO_SPI0_GPIO0_IN    BIT0
    #define IO_SPI0_GPIO0_OUT   BIT4
    #define IO_SPI0_GPIO0_OEN   BIT5
#define IO_SPI0_GPIO1           0x71*2
    #define IO_SPI0_GPIO1_IN    BIT0
    #define IO_SPI0_GPIO1_OUT   BIT4
    #define IO_SPI0_GPIO1_OEN   BIT5
#define IO_SPI0_GPIO2           0x72*2
    #define IO_SPI0_GPIO2_IN    BIT0
    #define IO_SPI0_GPIO2_OUT   BIT4
    #define IO_SPI0_GPIO2_OEN   BIT5
#define IO_SPI0_GPIO3           0x73*2
    #define IO_SPI0_GPIO3_IN    BIT0
    #define IO_SPI0_GPIO3_OUT   BIT4
    #define IO_SPI0_GPIO3_OEN   BIT5
#define IO_SPI0_GPIO4           0x74*2
    #define IO_SPI0_GPIO4_IN    BIT0
    #define IO_SPI0_GPIO4_OUT   BIT4
    #define IO_SPI0_GPIO4_OEN   BIT5

//PM Sleep,bank = 0x000E,R/W 16-bits
#if(0)
//Need to check!,it is from "Mercury5_GPIO_MappingTable_20170824.xls"
#define IO_PMS_MODE             0x08
#else
//From spec of PM sleep
#define IO_PMS_MODE             0x28
#endif
    #define IO_PMS_PWM0_MODE_OFS            0
    #define IO_PMS_PWM0_MODE_MASK           BIT0|BIT1
    #define IO_PMS_PWM1_MODE_OFS            2
    #define IO_PMS_PWM1_MODE_MASK           BIT2|BIT3
    #define IO_PMS_LED_MODE_MASK            BIT4|BIT5
    #define IO_PMS_PWM2_MODE_OFS            6
    #define IO_PMS_PWM2_MODE_MASK           BIT6|BIT7
    #define IO_PMS_PWM3_MODE_OFS            8
    #define IO_PMS_PWM3_MODE_MASK           BIT8|BIT9
    #define IO_PMS_GPU_VID_MODE_MASK        BIT10|BIT11
    #define IO_PMS_VID_MODE_MASK            BIT12|BIT13
    #define IO_PMS_SD_CDZ_MODE_MASK         BIT14
    #define IO_PMS_MSPI_MODE_MASK           BIT15
#define IO_PMS_GPIO_PM_LOCK     0x12
#define IO_PMS_LINK_WKINT2GPIO4 0x1c
    #define IO_PMS_LINK_WKINT2GPIO4_MSAK    BIT3
#define IO_PMS_GPIO_PM4_INV     0x1c
    #define IO_PMS_GPIO_PM4_INV_MSAK        BIT1
#define IO_PMS_SPI_IS_GPIO      0x35

//PM GPIO,bank = 0x000F,R/W 8-bits

//common bitwise mask for PM GPIO
#define IO_PM_GPIO_PAD_PS       BIT7
#define IO_PM_GPIO_PAD_PE       BIT6
#define IO_PM_GPIO_PAD_DRV1     BIT5
#define IO_PM_GPIO_PAD_DRV0     BIT4
#define IO_PM_GPIO_FIQ_RS       BIT1
#define IO_PM_GPIO_FIQ_FS       BIT0
#define IO_PM_GPIO_FIQ_POL      BIT7
#define IO_PM_GPIO_FIQ_CLR      BIT6
#define IO_PM_GPIO_FIQ_FORCE    BIT5
#define IO_PM_GPIO_FIQ_MASK     BIT4
#define IO_PM_GPIO_GLH_EN       BIT3
#define IO_PM_GPIO_IN           BIT2
#define IO_PM_GPIO_OUT          BIT1
#define IO_PM_GPIO_OEN          BIT0

//each offset and mask of PM GPIO
#define IO_PM_GPIO0             0x00*2
    #define IO_PM_GPIO0_IN      BIT2
    #define IO_PM_GPIO0_OUT     BIT1
    #define IO_PM_GPIO0_OEN     BIT0
#define IO_PM_GPIO1             0x01*2
    #define IO_PM_GPIO1_IN      BIT2
    #define IO_PM_GPIO1_OUT     BIT1
    #define IO_PM_GPIO1_OEN     BIT0
#define IO_PM_GPIO2             0x02*2
    #define IO_PM_GPIO2_IN      BIT2
    #define IO_PM_GPIO2_OUT     BIT1
    #define IO_PM_GPIO2_OEN     BIT0
#define IO_PM_GPIO3             0x03*2
    #define IO_PM_GPIO3_IN      BIT2
    #define IO_PM_GPIO3_OUT     BIT1
    #define IO_PM_GPIO3_OEN     BIT0
#define IO_PM_GPIO4             0x04*2
    #define IO_PM_GPIO4_IN      BIT2
    #define IO_PM_GPIO4_OUT     BIT1
    #define IO_PM_GPIO4_OEN     BIT0
#define IO_PM_GPIO5             0x05*2
    #define IO_PM_GPIO5_IN      BIT2
    #define IO_PM_GPIO5_OUT     BIT1
    #define IO_PM_GPIO5_OEN     BIT0
#define IO_PM_GPIO6             0x06*2
    #define IO_PM_GPIO6_IN      BIT2
    #define IO_PM_GPIO6_OUT     BIT1
    #define IO_PM_GPIO6_OEN     BIT0
#define IO_PM_GPIO7             0x07*2
    #define IO_PM_GPIO7_IN      BIT2
    #define IO_PM_GPIO7_OUT     BIT1
    #define IO_PM_GPIO7_OEN     BIT0
#define IO_PM_GPIO8             0x08*2
    #define IO_PM_GPIO8_IN      BIT2
    #define IO_PM_GPIO8_OUT     BIT1
    #define IO_PM_GPIO8_OEN     BIT0
#define IO_PM_GPIO9             0x09*2
    #define IO_PM_GPIO9_IN      BIT2
    #define IO_PM_GPIO9_OUT     BIT1
    #define IO_PM_GPIO9_OEN     BIT0
#define IO_PM_GPIO10            0x0a*2
    #define IO_PM_GPIO10_IN     BIT2
    #define IO_PM_GPIO10_OUT    BIT1
    #define IO_PM_GPIO10_OEN    BIT0
#define IO_PM_GPIO11            0x0b*2
    #define IO_PM_GPIO11_IN     BIT2
    #define IO_PM_GPIO11_OUT    BIT1
    #define IO_PM_GPIO11_OEN    BIT0
#define IO_PM_GPIO12            0x0c*2
    #define IO_PM_GPIO12_IN     BIT2
    #define IO_PM_GPIO12_OUT    BIT1
    #define IO_PM_GPIO12_OEN    BIT0
#define IO_PM_GPIO13            0x0d*2
    #define IO_PM_GPIO13_IN     BIT2
    #define IO_PM_GPIO13_OUT    BIT1
    #define IO_PM_GPIO13_OEN    BIT0
#define IO_PM_GPIO14            0x0e*2
    #define IO_PM_GPIO14_IN     BIT2
    #define IO_PM_GPIO14_OUT    BIT1
    #define IO_PM_GPIO14_OEN    BIT0
#define IO_PM_GPIO15            0x0f*2
    #define IO_PM_GPIO15_IN     BIT2
    #define IO_PM_GPIO15_OUT    BIT1
    #define IO_PM_GPIO15_OEN    BIT0
#define IO_PM_IRIN              0x14*2
    #define IO_PM_IRIN_IN       BIT2
    #define IO_PM_IRIN_OUT      BIT1
    #define IO_PM_IRIN_OEN      BIT0
#define IO_PM_UART_RX           0x15*2
    #define IO_PM_UART_RX_IN    BIT2
    #define IO_PM_UART_RX_OUT   BIT1
    #define IO_PM_UART_RX_OEN   BIT0
#define IO_PM_CEC               0x16*2
    #define IO_PM_CEC_IN        BIT2
    #define IO_PM_CEC_OUT       BIT1
    #define IO_PM_CEC_OEN       BIT0
#define IO_PM_SPI_CZ            0x18*2
    #define IO_PM_SPI_CZ_IN     BIT2
    #define IO_PM_SPI_CZ_OUT    BIT1
    #define IO_PM_SPI_CZ_OEN    BIT0
#define IO_PM_SPI_CK            0x19*2
    #define IO_PM_SPI_CK_IN     BIT2
    #define IO_PM_SPI_CK_OUT    BIT1
    #define IO_PM_SPI_CK_OEN    BIT0
#define IO_PM_SPI_DI            0x1a*2
    #define IO_PM_SPI_DI_IN     BIT2
    #define IO_PM_SPI_DI_OUT    BIT1
    #define IO_PM_SPI_DI_OEN    BIT0
#define IO_PM_SPI_DO            0x1b*2
    #define IO_PM_SPI_DO_IN     BIT2
    #define IO_PM_SPI_DO_OUT    BIT1
    #define IO_PM_SPI_DO_OEN    BIT0
#define IO_PM_SPI_WPZ           0x44*2
    #define IO_PM_SPI_WPZ_IN    BIT2
    #define IO_PM_SPI_WPZ_OUT   BIT1
    #define IO_PM_SPI_WPZ_OEN   BIT0
#define IO_PM_SPI_HOLDZ         0x45*2
    #define IO_PM_SPI_HOLDZ_IN  BIT2
    #define IO_PM_SPI_HOLDZ_OUT BIT1
    #define IO_PM_SPI_HOLDZ_OEN BIT0
#define IO_PM_SD_CDZ            0x47*2
    #define IO_PM_SD_CDZ_IN     BIT2
    #define IO_PM_SD_CDZ_OUT    BIT1
    #define IO_PM_SD_CDZ_OEN    BIT0
#define IO_PM_LED0              0x4a*2
    #define IO_PM_LED0_IN       BIT2
    #define IO_PM_LED0_OUT      BIT1
    #define IO_PM_LED0_OEN      BIT0
#define IO_PM_LED1              0x4b*2
    #define IO_PM_LED1_IN       BIT2
    #define IO_PM_LED1_OUT      BIT1
    #define IO_PM_LED1_OEN      BIT0

//PM GPIO,bank = 0x000F,R/W 16-bits
#define IO_PM_IRIN_MODE         0x1C
    #define IO_PM_IRIN_MODE_MASK    BIT4

//Sar GPIO,bank = 0x0014,R/W 8-bits
#define IO_SAR_AISEL            0x11*2
    #define IO_SAR_CH0_AISEL    BIT0
    #define IO_SAR_CH1_AISEL    BIT1
    #define IO_SAR_CH2_AISEL    BIT2
    #define IO_SAR_CH3_AISEL    BIT3
#define IO_SAR_OEN              0x11*2 + 1
    #define IO_SAR_CH0_OEN      BIT0
    #define IO_SAR_CH1_OEN      BIT1
    #define IO_SAR_CH2_OEN      BIT2
    #define IO_SAR_CH3_OEN      BIT3
#define IO_SAR_OUT              0x12*2
    #define IO_SAR_CH0_OUT      BIT0
    #define IO_SAR_CH1_OUT      BIT1
    #define IO_SAR_CH2_OUT      BIT2
    #define IO_SAR_CH3_OUT      BIT3
#define IO_SAR_IN               0x12*2 + 1
    #define IO_SAR_CH0_IN       BIT0
    #define IO_SAR_CH1_IN       BIT1
    #define IO_SAR_CH2_IN       BIT2
    #define IO_SAR_CH3_IN       BIT3

//UTMI0,bank = 0x0022, R/W 8-bits
#define IO_UTMI0_GPIO           0x05*2
    #define IO_UTMI0_USB_DM_OEN BIT4
    #define IO_UTMI0_USB_DM_OUT BIT2
    #define IO_UTMI0_USB_DP_OEN BIT5
    #define IO_UTMI0_USB_DP_OUT BIT3
#define IO_UTMI0_GPIO_STATUS    0x18*2 + 1
    #define IO_UTMI0_USB_DM_IN  BIT5
    #define IO_UTMI0_USB_DP_IN  BIT4
//UTMI1,bank = 0x1429, R/W 8-bits
#define IO_UTMI1_GPIO           0x05*2
    #define IO_UTMI1_DM_P1_OEN  BIT4
    #define IO_UTMI1_DM_P1_OUT  BIT2
    #define IO_UTMI1_DP_P1_OEN  BIT5
    #define IO_UTMI1_DP_P1_OUT  BIT3
#define IO_UTMI1_GPIO_STATUS    0x18*2 + 1
    #define IO_UTMI1_DM_P1_IN   BIT5
    #define IO_UTMI1_DP_P1_IN   BIT4

//UTMI0,bank = 0x0022,,R/W 16-bits
#define IO_UTMI0_GPIO_EN                    0x1F
    #define IO_UTMI0_GPIO_EN_MASK               BIT14
#define IO_UTMI0_CLK_EXTRA_0_EN             0x04
    #define IO_UTMI0_CLK_EXTRA_0_EN_MASK        BIT7
#define IO_UTMI0_FORCE_PLL_ON               0x04
    #define IO_UTMI0_FORCE_PLL_ON_MASK          BIT11
#define IO_UTMI0_PDN_H0                     0x00
    #define IO_UTMI0_PDN_OVERRIDE_MASK          BIT0
    #define IO_UTMI0_FL_XCVR_PDN_MASK           BIT12
    #define IO_UTMI0_REG_PDN_MASK               BIT15

//UTMI1,bank = 0x1429,,R/W 16-bits
#define IO_UTMI1_GPIO_EN                    0x1F
    #define IO_UTMI1_GPIO_EN_MASK               BIT14
#define IO_UTMI1_CLK_EXTRA_0_EN             0x04
    #define IO_UTMI1_CLK_EXTRA_0_EN_MASK        BIT7
#define IO_UTMI1_FORCE_PLL_ON               0x04
    #define IO_UTMI1_FORCE_PLL_ON_MASK          BIT11
#define IO_UTMI1_PDN_H0                     0x00
    #define IO_UTMI1_PDN_OVERRIDE_MASK          BIT0
    #define IO_UTMI1_FL_XCVR_PDN_MASK           BIT12
    #define IO_UTMI1_REG_PDN_MASK               BIT15

#endif //__KERNEL_IO_H__
