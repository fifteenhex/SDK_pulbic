////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (��MStar Confidential Information��) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

/**
* @file    hal_bach_reg.h
* @version
* @brief   Bach register definition header file
*
*/

#ifndef __HAL_BACH_REG_H__
#define __HAL_BACH_REG_H__

//=============================================================================
// Include files
//=============================================================================

//=============================================================================
// Extern definition
//=============================================================================

//=============================================================================
// Macro definition
//=============================================================================

/****************************************************************************/
/*        AUDIO DIGITAL registers                                           */
/****************************************************************************/
enum
{
    // ----------------------------------------------
    // BANK1 SYS
    // ----------------------------------------------
    BACH_ENABLE_CTRL       = 0x00,
    BACH_SR0_SEL           = 0x02,
    BACH_MUX0_SEL          = 0x06,
    BACH_MUX1_SEL          = 0x08,
    BACH_MIX1_SEL          = 0x0E,
    BACH_SDM_OFFSET        = 0x10,
    BACH_SDM_CTRL          = 0x12,
    BACH_CODEC_I2S_RX_CTRL = 0x24,
    BACH_CODEC_I2S_TX_CTRL = 0x26,
    BACH_SYNTH_CTRL        = 0x3A,
    BACH_PAD0_CFG          = 0x3C,
    BACH_MMC1_DPGA_CFG1    = 0x40,
    BACH_MMC1_DPGA_CFG2    = 0x42,
    BACH_MMC2_DPGA_CFG1    = 0x44,
    BACH_MMC2_DPGA_CFG2    = 0x46,
    BACH_ADC_DPGA_CFG1     = 0x48,
    BACH_ADC_DPGA_CFG2     = 0x4A,
    BACH_AEC1_DPGA_CFG1    = 0x50,
    BACH_AEC1_DPGA_CFG2    = 0x52,
    BACH_MMCDEC1_DPGA_CFG1 = 0x60,
    BACH_MMCDEC1_DPGA_CFG2 = 0x62
};

enum
{
    // ----------------------------------------------
    // BANK1 DMA
    // ----------------------------------------------
    BACH_DMA1_CTRL_0       =  0x80,
    BACH_DMA1_CTRL_1       =  0x82,
    BACH_DMA1_CTRL_2       =  0x84,
    BACH_DMA1_CTRL_3       =  0x86,
    BACH_DMA1_CTRL_4       =  0x88,
    BACH_DMA1_CTRL_5       =  0x8A,
    BACH_DMA1_CTRL_6       =  0x8C,
    BACH_DMA1_CTRL_7       =  0x8E,
    BACH_DMA1_CTRL_8       =  0x90,
    BACH_DMA1_CTRL_9       =  0x92,
    BACH_DMA1_CTRL_10      =  0x94,
    BACH_DMA1_CTRL_11      =  0x96,
    BACH_DMA1_CTRL_12      =  0x98,
    BACH_DMA1_CTRL_13      =  0x9A,
    BACH_DMA1_CTRL_14      =  0x9C,
    BACH_DMA1_CTRL_15      =  0x9E,
    BACH_DMA2_CTRL_0       =  0xA0,  //BANK1_DMA2
    BACH_DMA2_CTRL_1       =  0xA2,
    BACH_DMA2_CTRL_2       =  0xA4,
    BACH_DMA2_CTRL_3       =  0xA6,
    BACH_DMA2_CTRL_4       =  0xA8,
    BACH_DMA2_CTRL_5       =  0xAA,
    BACH_DMA2_CTRL_6       =  0xAC,
    BACH_DMA2_CTRL_7       =  0xAE,
    BACH_DMA2_CTRL_8       =  0xB0,
    BACH_DMA2_CTRL_9       =  0xB2,
    BACH_DMA2_CTRL_10      =  0xB4,
    BACH_DMA2_CTRL_11      =  0xB6,
    BACH_DMA2_CTRL_12      =  0xB8,
    BACH_DMA2_CTRL_13      =  0xBA,
    BACH_DMA2_CTRL_14      =  0xBC,
    BACH_DMA2_CTRL_15      =  0xBE,
    BACH_DMA_TEST_CTRL5    =  0xEA,
    BACH_DMA_TEST_CTRL7    =  0xEE
};

enum
{
    // ----------------------------------------------
    // BANK2 SYS
    // ----------------------------------------------
    BACH_INT_EN            = 0x0E,
    BACH_MUX3_SEL          = 0x1C,
    BACH_AU_SYS_CTRL1      = 0x2C,
    BACH_DIG_MIC_CTRL0     = 0x3A,
    BACH_DIG_MIC_CTRL1     = 0x3C
};

enum
{
    // ----------------------------------------------
    // BANK3 SYS
    // ----------------------------------------------
    BACH_VREC_CTRL00     =  0x00,
    BACH_VREC_CTRL01     =  0x02,
    BACH_VREC_CTRL02     =  0x04,
    BACH_VREC_CTRL03     =  0x06,
    BACH_VREC_CTRL04     =  0x08,
    BACH_VREC_CTRL05     =  0x0A,
    BACH_VREC_CTRL06     =  0x0C,
    BACH_VREC_CTRL07     =  0x0E,
    BACH_VREC_CTRL08     =  0x10,
    BACH_VREC_CTRL09     =  0x12
};

enum
{
    // ----------------------------------------------
    // BANK4 SYS
    // ----------------------------------------------
    BACH_ANALOG_CTRL00     =  0x00,
    BACH_ANALOG_CTRL01     =  0x02,
    BACH_ANALOG_CTRL02     =  0x04,
    BACH_ANALOG_CTRL03     =  0x06,
    BACH_ANALOG_CTRL04     =  0x08,
    BACH_ANALOG_CTRL05     =  0x0A,
    BACH_ANALOG_CTRL06     =  0x0C,
    BACH_ANALOG_CTRL07     =  0x0E,
    BACH_ANALOG_CTRL08     =  0x10
};



/****************************************************************************/
/*        AUDIO ChipTop                                     */
/****************************************************************************/
/**
 * @brief Register 101E10h,
 */
//#define REG_I2S_MODE                  (1<<10)
//#define REG_I2S_MODE                  (1<<12) // for SPI PAD
#define REG_I2S_MODE                  (2<<12)   // for LCD PAD

/****************************************************************************/
/*        AUDIO DIGITAL registers bank1                                     */
/****************************************************************************/
/**
 * @brief Register 00h,
 */
#define REG_BP_ADC_HPF2               (1<<11)
#define REG_BP_ADC_HPF1               (1<<10)


/**
 * @brief Register 02h
 */
#define REG_CIC_1_SEL_POS             14
#define REG_CIC_1_SEL_MSK             (0x3<<REG_CIC_1_SEL_POS)
#define REG_CIC_3_SEL_POS             10
#define REG_CIC_3_SEL_MSK             (0x3<<REG_CIC_3_SEL_POS)
#define REG_WRITER_SEL_POS            8
#define REG_WRITER_SEL_MSK            (0x3<<REG_WRITER_SEL_POS)
#define REG_SRC1_SEL_POS              4
#define REG_SRC1_SEL_MSK              (0xF<<REG_SRC1_SEL_POS)
#define REG_SRC2_SEL_POS              0
#define REG_SRC2_SEL_MSK              (0xF<<REG_SRC2_SEL_POS)


/**
 * @brief Register 06h,
 */
#define REG_MMC1_SRC_SEL              (1<<5)


/**
 * @brief Register 08h,
 */
#define REG_ADC_HPF_N_POS             12
#define REG_ADC_HPF_N_MSK             (0xF<<REG_ADC_HPF_N_POS)


/**
 * @brief Register 0Eh,
 */
#define REG_SDM_MIXER_L_POS           10
#define REG_SDM_MIXER_L_MSK           (0x3<<REG_SDM_MIXER_L_POS)
#define REG_SDM_MIXER_R_POS           8
#define REG_SDM_MIXER_R_MSK           (0x3<<REG_SDM_MIXER_R_POS)
#define REG_SRC_MIXER1_L_POS          6
#define REG_SRC_MIXER1_L_MSK          (0x3<<REG_SRC_MIXER1_L_POS)
#define REG_SRC_MIXER1_R_POS          4
#define REG_SRC_MIXER1_R_MSK          (0x3<<REG_SRC_MIXER1_R_POS)


/**
 * @brief Register 24h,26h
 */
#define RESETB_RX                     (1<<15)
#define REG_I2S_FMT                   (1<<14)
#define REG_I2S_FIFO_CLR              (1<<13)
#define REG_I2S_BCK_INV               (1<<11)
#define I2S_MUX_SEL_R_POS             6
#define I2S_MUX_SEL_R_MSK             (0x3<<I2S_MUX_SEL_R_POS)
#define I2S_MUX_SEL_L_POS             4
#define I2S_MUX_SEL_L_MSK             (0x3<<I2S_MUX_SEL_L_POS)


/**
 * @brief Register 40h,48h,50h,60h
 */
#define REG_OFFSET_R_POS              11
#define REG_OFFSET_R_MSK              (0x1F<<REG_OFFSET_R_POS)
#define REG_OFFSET_L_POS              6
#define REG_OFFSET_L_MSK              (0x1F<<REG_OFFSET_L_POS)
#define STEP_POS                      3
#define STEP_MSK                      (0x7<<STEP_POS)
#define MUTE_2_ZERO                   (1<<2)
#define FADING_EN                     (1<<1)
#define DPGA_EN                       (1<<0)


/**
 * @brief Register 42h,4Ah,52h,62h
 */
#define REG_GAIN_R_POS                8
#define REG_GAIN_R_MSK                (0xFF<<REG_GAIN_R_POS)
#define REG_GAIN_L_POS                0
#define REG_GAIN_L_MSK                (0xFF<<REG_GAIN_L_POS)


/**
 * @brief Register 80h
 */
#define REG_WR_UNDERRUN_INT_EN        (1 << 15)
#define REG_WR_OVERRUN_INT_EN         (1 << 14)
#define REG_RD_UNDERRUN_INT_EN        (1 << 13)
#define REG_RD_OVERRUN_INT_EN         (1 << 12)
#define REG_WR_FULL_INT_EN            (1 << 11)
#define REG_RD_EMPTY_INT_EN           (1 << 10)
#define REG_WR_FULL_FLAG_CLR          (1 << 9)
#define REG_RD_EMPTY_FLAG_CLR         (1 << 8)
#define REG_SEL_TES_BUS               (1 << 6)
#define REG_RD_LR_SWAP_EN             (1 << 5)
#define REG_PRIORITY_KEEP_HIGH        (1 << 4)
#define REG_RD_BYTE_SWAP_EN           (1 << 3)
#define REG_RD_LEVEL_CNT_LIVE_MASK    (1 << 2)
#define REG_ENABLE                    (1 << 1)
#define REG_SW_RST_DMA                (1 << 0)


/**
 * @brief Register 82h
 */
#define REG_RD_ENABLE                 (1 << 15)
#define REG_RD_INIT                   (1 << 14)
#define REG_RD_TRIG                   (1 << 13)
#define REG_RD_LEVEL_CNT_MASK         (1 << 12)

#define REG_RD_BASE_ADDR_LO_POS       0
#define REG_RD_BASE_ADDR_LO_MSK       (0xFFF << REG_RD_BASE_ADDR_LO_POS)


/**
 * @brief Register 84h
 */
#define REG_RD_BASE_ADDR_HI_OFFSET    12
#define REG_RD_BASE_ADDR_HI_POS       0
#define REG_RD_BASE_ADDR_HI_MSK       (0x7FFF << REG_RD_BASE_ADDR_HI_POS)


/**
 * @brief Register 86h
 */
#define REG_RD_BUFF_SIZE_POS          0
#define REG_RD_BUFF_SIZE_MSK          (0xFFFF << REG_RD_BUFF_SIZE_POS)


/**
 * @brief Register 88h
 */
#define REG_RD_SIZE_POS               0
#define REG_RD_SIZE_MSK               (0xFFFF << REG_RD_SIZE_POS)


/**
 * @brief Register 8Ah
 */
#define REG_RD_OVERRUN_TH_POS         0
#define REG_RD_OVERRUN_TH_MSK         (0xFFFF << REG_RD_OVERRUN_TH_POS)


/**
 * @brief Register 8Ch
 */
#define REG_RD_UNDERRUN_TH_POS        0
#define REG_RD_UNDERRUN_TH_MSK        (0xFFFF << REG_RD_UNDERRUN_TH_POS)


/**
 * @brief Register 8Eh
 */
#define REG_RD_LEVEL_CNT_POS          0
#define REG_RD_LEVEL_CNT_MSK          (0xFFFF << REG_RD_LEVEL_CNT_POS)


/**
 * @brief Register 90h
 */
#define REG_RD_LOCALBUF_EMPTY         (1 << 7)
#define REG_WR_LOCALBUF_FULL          (1 << 6)
#define REG_WR_FULL_FLAG              (1 << 5)
#define REG_RD_EMPTY_FLAG             (1 << 4)
#define REG_RD_OVERRUN_FLAG           (1 << 3)
#define REG_RD_UNDERRUN_FLAG          (1 << 2)
#define REG_WR_OVERRUN_FLAG           (1 << 1)
#define REG_WR_UNDERRUN_FLAG          (1 << 0)


/**
 * @brief Register 92h
 */
#define REG_WR_ENABLE                 (1 << 15)
#define REG_WR_INIT                   (1 << 14)
#define REG_WR_TRIG                   (1 << 13)
#define REG_WR_LEVEL_CNT_MASK         (1 << 12)

#define REG_WR_BASE_ADDR_LO_POS       0
#define REG_WR_BASE_ADDR_LO_MSK       (0xFFF << REG_WR_BASE_ADDR_LO_POS)


/**
 * @brief Register 94h
 */
#define REG_WR_BASE_ADDR_HI_OFFSET    12
#define REG_WR_BASE_ADDR_HI_POS       0
#define REG_WR_BASE_ADDR_HI_MSK       (0x7FFF << REG_WR_BASE_ADDR_HI_POS)


/**
 * @brief Register 96h
 */
#define REG_WR_BUFF_SIZE_POS          0
#define REG_WR_BUFF_SIZE_MSK          (0xFFFF << REG_WR_BUFF_SIZE_POS)


/**
 * @brief Register 98h
 */
#define REG_WR_SIZE_POS               0
#define REG_WR_SIZE_MSK               (0xFFFF << REG_WR_SIZE_POS)


/**
 * @brief Register 9Ah
 */
#define REG_WR_OVERRUN_TH_POS         0
#define REG_WR_OVERRUN_TH_MSK         (0xFFFF << REG_WR_OVERRUN_TH_POS)


/**
 * @brief Register 9Ch
 */
#define REG_WR_UNDERRUN_TH_POS        0
#define REG_WR_UNDERRUN_TH_MSK        (0xFFFF << REG_WR_UNDERRUN_TH_POS)


/**
 * @brief Register 9Eh
 */
#define REG_WR_LEVEL_CNT_POS          0
#define REG_WR_LEVEL_CNT_MSK          (0xFFFF << REG_RD_LEVEL_CNT_POS)


/**
 * @brief Register EAh
 */
#define REG_SINE_GEN_EN              (1<<15)
#define REG_SINE_GEN_L               (1<<14)
#define REG_SINE_GEN_R               (1<<13)
#define REG_SINE_GEN_GAIN_POS        4
#define REG_SINE_GEN_GAIN_MSK        (0XF << REG_SINE_GEN_GAIN_POS)
#define REG_SINE_GEN_FREQ_POS        0
#define REG_SINE_GEN_FREQ_MSK        (0XF << REG_SINE_GEN_FREQ_POS)


/**
 * @brief Register EEh
 */
#define REG_DMA1_RD_MONO              (1 << 15)
#define REG_DMA1_WR_MONO              (1 << 14)
#define REG_DMA1_RD_MONO_COPY         (1 << 13)
#define REG_DMA2_RD_MONO              (1 << 11)
#define REG_DMA2_WR_MONO              (1 << 10)
#define REG_DMA2_RD_MONO_COPY         (1 << 9)

/****************************************************************************/
/*        AUDIO DIGITAL registers bank2                                     */
/****************************************************************************/
/**
 * @brief Register 0Eh
 */
#define REG_DMA_INT_EN              (1<<1)


/**
 * @brief Register 1Ch
 */
#define MUX_ASRC_ADC_SEL              (1<<1)


/**
 * @brief Register 2Ch
 */
#define REG_CODEC_SEL_POS             0
#define REG_CODEC_SEL_MSK             (0x3<<REG_CODEC_SEL_POS)
#define MUX_CODEC_TX_SEL_POS          2
#define MUX_CODEC_TX_SEL_MSK          (0x3<<MUX_CODEC_TX_SEL_POS)



/**
 * @brief Register 3Ah
 */
#define REG_DIGMIC_EN                 (1<<15)
#define REG_DIGMIC_CLK_INV            (1<<14)
#define REG_DIGMIC_CLK_MODE           (1<<13)
#define REG_DIGMIC_SEL_POS            0
#define REG_DIGMIC_SEL_MSK            (0x3<<REG_DIGMIC_SEL_POS)


/**
 * @brief Register 3Ch
 */

#define REG_CIC_SEL                 (1<<15)

/****************************************************************************/
/*        AUDIO DIGITAL registers bank3                                     */
/****************************************************************************/
/**
 * @brief Register 08h
 */
#define REG_FS_SEL_POS             0
#define REG_FS_SEL_MSK             (0x1F<<REG_FS_SEL_POS)

/****************************************************************************/
/*        AUDIO ANALOG registers bank4                                     */
/****************************************************************************/

/**
 * @brief Register 00h
 */
#define REG_EN_BYP_INMUX_POS          0
#define REG_EN_BYP_INMUX_MSK          (0x3<<REG_EN_BYP_INMUX_POS)
#define REG_EN_CHOP_ADC0              (1<<2)
#define REG_EN_CK_DAC_POS             4
#define REG_EN_CK_DAC_MSK             (0xF<<REG_EN_CK_DAC_POS)
#define REG_EN_DAC_DISCH              (1<<8)
#define REG_EN_DIT_ADC0               (1<<9)
#define REG_EN_ITEST_DAC              (1<<10)
#define REG_EN_MSP                    (1<<11)

/**
 * @brief Register 02h
 */
#define REG_EN_MUTE_INMUX_POS         0
#define REG_EN_MUTE_INMUX_MSK         (0x3<<REG_EN_MUTE_INMUX_POS)
#define REG_EN_MUTE_MIC_STG1_L        (1<<2)
#define REG_EN_MUTE_MIC_STG1_R        (1<<3)
#define REG_EN_QS_LDO_ADC             (1<<4)
#define REG_EN_QS_LDO_DAC             (1<<5)
#define REG_EN_SHRT_L_ADC0            (1<<6)
#define REG_EN_SHRT_R_ADC0            (1<<7)
#define REG_EN_TST_IBIAS_ADC_POS      8
#define REG_EN_TST_IBIAS_ADC_MSK      (0x3<<REG_EN_TST_IBIAS_ADC_POS)
#define REG_EN_VREF_DISCH             (1<<10)
#define REG_EN_VREF_SFTDCH_POS        11
#define REG_EN_VREF_SFTDCH_MSK        (0x3<<REG_EN_VREF_SFTDCH_POS)

/**
 * @brief Register 04h
 */
#define REG_EN_SW_TST_POS             0
#define REG_EN_SW_TST_MSK             (0xFFFF<<REG_EN_SW_TST_POS)

/**
 * @brief Register 06h
 */
#define REG_PD_ADC0                   (1<<0)
#define REG_PD_BIAS_DAC               (1<<1)
#define REG_PD_INMUX_POS              2
#define REG_PD_INMUX_MSK              (0x3<<REG_PD_INMUX_POS)
#define REG_PD_L0_DAC                 (1<<4)
#define REG_PD_LDO_ADC                (1<<5)
#define REG_PD_LDO_DAC                (1<<6)
#define REG_PD_MIC_STG1_L             (1<<7)
#define REG_PD_MIC_STG1_R             (1<<8)
#define REG_PD_R0_DAC                 (1<<9)
#define REG_PD_REF_DAC                (1<<10)
#define REG_PD_VI                     (1<<11)
#define REG_PD_VREF                   (1<<12)

/**
 * @brief Register 08h
 */
#define REG_RESET_ADC0                (1<<0)
#define REG_RESET_DAC_POS             4
#define REG_RESET_DAC_MSK             (0xF<<REG_RESET_DAC_POS)

/**
 * @brief Register 0Ah
 */
#define REG_SEL_CH_INMUX0_POS         0
#define REG_SEL_CH_INMUX0_MSK         (0xF<<REG_SEL_CH_INMUX0_POS)
#define REG_SEL_CH_INMUX1_POS         4
#define REG_SEL_CH_INMUX1_MSK         (0xF<<REG_SEL_CH_INMUX1_POS)
#define REG_SEL_BIAS_DAC_POS          8
#define REG_SEL_BIAS_DAC_MSK          (0x3<<REG_SEL_BIAS_DAC_POS)
#define REG_SEL_CHOP_ADC0             (1<<10)
#define REG_SEL_CHOP_PHASE_ADC        (1<<11)
#define REG_SEL_CK_AU                 (1<<12)
#define REG_SEL_CK_EDGE_DAC           (1<<13)
#define REG_SEL_CK_PHASE_ADC          (1<<14)
#define REG_SEL_DIT_LVL_ADC0          (1<<15)

/**
 * @brief Register 0Ch
 */
#define REG_SEL_GAIN_INMUX0_POS       0
#define REG_SEL_GAIN_INMUX0_MSK       (0x7<<REG_SEL_GAIN_INMUX0_POS)
#define REG_SEL_GAIN_INMUX1_POS       4
#define REG_SEL_GAIN_INMUX1_MSK       (0x7<<REG_SEL_GAIN_INMUX1_POS)

/**
 * @brief Register 0Eh
 */
#define REG_SEL_IBIAS_ADC_POS         0
#define REG_SEL_IBIAS_ADC_MSK         (0x1F<<REG_SEL_IBIAS_ADC_POS)
#define REG_SEL_IBIAS_INMUX_POS       8
#define REG_SEL_IBIAS_INMUX_MSK       (0x3<<REG_SEL_IBIAS_INMUX_POS)

/**
 * @brief Register 10h
 */
#define REG_SEL_MICGAIN_INMUX_POS     0
#define REG_SEL_MICGAIN_INMUX_MSK     (0x3<<REG_SEL_MICGAIN_INMUX_POS)
#define REG_SEL_MICGAIN_STG1_L_POS    2
#define REG_SEL_MICGAIN_STG1_L_MSK    (0x3<<REG_SEL_MICGAIN_STG1_L_POS)
#define REG_SEL_MICGAIN_STG1_R_POS    4
#define REG_SEL_MICGAIN_STG1_R_MSK    (0x3<<REG_SEL_MICGAIN_STG1_R_POS)
#define REG_SEL_VI_BIAS_POS           6
#define REG_SEL_VI_BIAS_MSK           (0x3<<REG_SEL_VI_BIAS_POS)
#define REG_SEL_VO_LDO_DAC_POS        8
#define REG_SEL_VO_LDO_DAC_MSK        (0x3<<REG_SEL_VO_LDO_DAC_POS)

#define REG_SEL_MICGAIN_STG2_L_POS    12
#define REG_SEL_MICGAIN_STG2_L_MSK    (0x1<<REG_SEL_MICGAIN_STG2_L_POS)
#define REG_SEL_MICGAIN_STG2_R_POS    13
#define REG_SEL_MICGAIN_STG2_R_MSK    (0x1<<REG_SEL_MICGAIN_STG2_R_POS)

//#define REG_SEL_MICGAIN_STG_L_POS
#define REG_SEL_MICGAIN_STG_L_MSK    (REG_SEL_MICGAIN_STG1_L_MSK | REG_SEL_MICGAIN_STG2_L_MSK)
#define REG_SEL_MICGAIN_STG_R_MSK    (REG_SEL_MICGAIN_STG1_R_MSK | REG_SEL_MICGAIN_STG2_R_MSK)

#endif //__HAL_BACH_REG_H__


