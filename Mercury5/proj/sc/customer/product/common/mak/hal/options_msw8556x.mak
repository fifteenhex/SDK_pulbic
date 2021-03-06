
#=============================================================================================================
#  !!! ATTENTION !!!
#  This file is generated automatically from options_summary_ChipSeries.xls,
#  Please do not edit this file directly.
#  !!! ATTENTION !!!
#=============================================================================================================

#=============================================================================================================
#  This file describes chip related applicationseatures.
#  Please define CHIP_xxx in options_summary_ChipSeries.xls when you add any chip related compile option.
#  The concept of CHIP_xxx option is introduced to avoid using large-scope compile options such as
#  __MSW8532__, __MSW8533N__ in common_option.mak.
#  The advantage of using CHIP_xxx can not only make common_option.mak easier to be maintained but also
#  let chip related compile option can be defined more clearly and properly
#
#  Note:
#  (1) Only CHIP_TYPE pre-condition is allowed in this file
#  (2) Please deal with dependencies in common_option.mak
#  (3) Please do not use PP_OPT_COMMON directly in this file
#=============================================================================================================


#===============================================================================
# ** Driver OPTIONS **
#===============================================================================
# Feature_Name = NAND Flash support
# Description = Option for NAND Flash support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_NAND = FALSE

# Feature_Name = G3D support
# Description = Option for G3D support
# Pre_Variable_True = (3D_SUPPORT = G3D_SUPPORT)
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_G3D = FALSE

# Feature_Name = WLAN support
# Description = Option for WLAN support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_WLAN = TRUE

# Feature_Name = GPS support
# Description = Option for GPS support
# Pre_Variable_True = GPS_SUPPORT
# Pre_Variable_False = __MSTAR_CTA_VERSION__
# Option_Selection = CHIP_GPS_PIF, CHIP_GPS_SPI
CHIP_GPS = CHIP_GPS_PIF

# Feature_Name = BT MAC support
# Description = Option for BT MAC support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = B3, BRAVO, B5, BLOSSOM
CHIP_BT_MAC_SEL = BLOSSOM

# Feature_Name = RF LDO sleep off support
# Description = Option for RF LDO sleep off support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_RF_LDO_SLEEP_OFF = TRUE

# Feature_Name = Sleep handler support
# Description = Option for Sleep handler support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SLEEP_HANDLER = TRUE

# Feature_Name = NAND PWD notify support
# Description = Option for NAND PWD notify support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_NAND_PWD_NOTIFY = TRUE

# Feature_Name = Low battery detect debounce support
# Description = Option for Low battery detect debounce support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_LOW_BATTERY_DETECT_DEBOUNCE = TRUE

# Feature_Name = MMP Sleep Reset support
# Description = Option for MMP Sleep Reset support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MMP_SLEEP_RESET = TRUE

# Feature_Name = FCIE SDIO SHARE IP support
# Description = Option for FCIE SDIO SHARE IP support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_FCIE_SDIO_SHARE_IP = TRUE

# Feature_Name = NO HW JPD support
# Description = Option for NO HW JPD support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_NO_HW_JPD = TRUE

# Feature_Name = Drv NO HW DMA support
# Description = Option for Drv NO HW DMA support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_DRV_NO_HW_DMA = TRUE

# Feature_Name = No Asura support
# Description = Option for No Asura support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_NO_ASURA = TRUE

# Feature_Name = ZLIB run in ROM support
# Description = Option for ZLIB run in ROM support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_ZLIB_IN_ROM = FALSE

# Feature_Name = [DRV] DSP patch is downloaded by DwlWin
# Description = Option for DSP patch is downloaded by DwlWin
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_TARGET_DSP_PATCH_SOLO_BIN = TRUE

# Feature_Name = DBB Watchdog support
# Description = Option for DBB Watchdog support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_CHIPDRV_DBB_WDT = FALSE

# Feature_Name = R2 Watchdog support
# Description = Option for R2 Watchdog support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_CHIPDRV_R2_WDT = FALSE

# Feature_Name = Multimedia(MM) Timer Driver support
# Description = Option for Multimedia(MM) Timer Driver support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_CHIPDRV_MM_TIMER = TRUE

# Feature_Name = Composite USB support
# Description = Option for Composite USB support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_V24_COMPOSITE_USB = FALSE

# Feature_Name = USB Support
# Description = Option for USB Support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_USB_ENABLE = FALSE

# Feature_Name = Synopsys UART support
# Description = Option for Synopsys UART support (for G1 FUART IP type)
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SYNOPSYS_UART = FALSE

# Feature_Name = Battery without FINT support
# Description = On some platform, there is no Fint to MMP.
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_BATT_ACQUIRE_WITHOUT_FINT = FALSE

# Feature_Name = WLAN PIF support
# Description = Option for WLAN PIF support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_WLAN_PIF = TRUE

# Feature_Name = G1 ADC Calibration support
# Description = Option for G1 ADC Calibration support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_G1_ADC_CALIBRATION = FALSE

# Feature_Name = ADC support
# Description = Option for ADC support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = CHIP_ADC_SAR, CHIP_ADC_ASURA
CHIP_ADC_SEL = CHIP_ADC_SAR

# Feature_Name = Tiny cmd ADC calibration support
# Description = Option for tiny cmd ADC calibration support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_TINY_CMD_ADC_CALIBRATION = TRUE

# Feature_Name = V24 software flow control Xauto Mode support
# Description = [DRV] Enable V24 software flow control XAuto Mode support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_V24_SOFT_FC_XAUTO_MODE = TRUE

# Feature_Name = UART debug platform type support
# Description = Option for  UART debug platform type support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_G1_DEBUG_UART_PLATFORM_TYPE = FALSE

# Feature_Name = Bus FSP SPI support
# Description = Option for Bus FSP SPI support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
CHIP_SUPPORT_BUS_FSP_SPI = TRUE
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
CHIP_SUPPORT_BUS_FSP_SPI = TRUE
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
CHIP_SUPPORT_BUS_FSP_SPI = TRUE
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
CHIP_SUPPORT_BUS_FSP_SPI = TRUE
endif

# Feature_Name = SPI Max Speed support
# Description = Option for SPI Max Speed support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
CHIP_SPI_MAX_SPEED = TRUE
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
CHIP_SPI_MAX_SPEED = TRUE
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
CHIP_SPI_MAX_SPEED = TRUE
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
CHIP_SPI_MAX_SPEED = TRUE
endif

# Feature_Name = [DRV] define storage hardware IP configuration
# Description = Option for [DRV] define hardware IP difference between chip
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = CHIP_STG_IP_FCIE, CHIP_STG_IP_SDIO, CHIP_STG_IP_FCIE_SDIO
CHIP_STORAGE_IP = CHIP_STG_IP_SDIO

# Feature_Name = SARADC sharing
# Description = Option for sharing PMU SARADC analog resource to Touch Screen and Battery
# Pre_Variable_True = __ADC_SAR__
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SHARE_SARADC = TRUE

# Feature_Name = Audio Bach mix capability
# Description = Option for audio mix capability query
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_AUDIO_MIX_SUPPORT = FALSE

# Feature_Name = Rompatch feature support
# Description = Option for rompatch support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_ROMPATCH = TRUE

# Feature_Name = GDMA support
# Description = Option for GDMA support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_GDMA = TRUE

# Feature_Name = FM & SD support dynamic clock
# Description = Option for FM & SD dynamic clock support
# Pre_Variable_True = ONCHIP_FMRX_ENABLE_SUPPORT
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_FMRX_SD_DYNAMIC_CLOCK = FALSE

# Feature_Name = WLED support shunt
# Description = Option for 1 WLED channel support 2 LED
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_WLED_SHUNT = TRUE

# Feature_Name = ADC calibration by EFUSE
# Description = Options to support calibration by EFUSE
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_ADC_CALI_BY_EFUSE = TRUE

# Feature_Name = WLED level count
# Description = Options for WLED level count
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = 15, 63
CHIP_WLED_LEVEL_COUNT = 63

# Feature_Name = Audio external codec support
# Description = Options to support external codec
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_AUDIO_EXT_CODEC = FALSE

# Feature_Name = HW ZLIB support
# Description = Option for HW ZLIB support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_HW_ZLIB = FALSE

# Feature_Name = HW ZLIB run in ROM support
# Description = Option for HW ZLIB run in ROM support
# Pre_Variable_True = CHIP_HW_ZLIB
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_HW_ZLIB_IN_ROM = FALSE

# Feature_Name = Dual SPI flash support
# Description = Option for dual SPI flash support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_DUAL_SPI_FLASH_SUPPORT = TRUE

# Feature_Name = MPIF HW IP support
# Description = Option for MPIF HW IP support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MPIF = TRUE

# Feature_Name = TGGE_RF support
# Description = Option for B9 TGGE_RF support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_TGGE_RF = TRUE

# Feature_Name = CHIP_SARADC_STOP_CHARGE_FOR_TOUCH Support
# Description = Options for CHIP_SARADC_STOP_CHARGE_FOR_TOUCH
# Pre_Variable_True = CHIP_SHARE_SARADC
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SARADC_STOP_CHARGE_FOR_TOUCH = FALSE

# Feature_Name = CHIP_SPI_RESET_BY_OFF_VMEM support
# Description = Option for CHIP_SPI_RESET_BY_OFF_VMEM support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
CHIP_SPI_RESET_BY_OFF_VMEM = FALSE
endif
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
CHIP_SPI_RESET_BY_OFF_VMEM = TRUE
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
CHIP_SPI_RESET_BY_OFF_VMEM = TRUE
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
CHIP_SPI_RESET_BY_OFF_VMEM = TRUE
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
CHIP_SPI_RESET_BY_OFF_VMEM = TRUE
endif


#===============================================================================
# ** Protocol stack (RF/L1/L3) OPTIONS **
#===============================================================================
# Feature_Name = SIM Sustain Signals support
# Description = Option for SIM Sustain Signals support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SIM_SUSTAIN_SIGNALS = FALSE

# Feature_Name = RF integrated tiny cmd
# Description = [RF] Integrate RF test mode into nominal software configuration, such that RF tuning and calibration can be done in single software.
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_HWL_TINY_INTEGRATED = TRUE

# Feature_Name = Quad SIM dual standby
# Description = Option for quad SIM dual standy
# Pre_Variable_True = N/A
# Pre_Variable_False = __SMALL_ROM__
# Option_Selection = TRUE, FALSE
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
CHIP_QUAD_SIM_DUAL_STANDBY = FALSE
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
CHIP_QUAD_SIM_DUAL_STANDBY = FALSE
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
CHIP_QUAD_SIM_DUAL_STANDBY = FALSE
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
CHIP_QUAD_SIM_DUAL_STANDBY = FALSE
endif

# Feature_Name = SIM use SRAM for data transaction
# Description = Option for SIM SRAM usage
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SIM_USE_SRAM = TRUE

# Feature_Name = SIM use different SRAM address for B9
# Description = Option for SIM SRAM usage
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SIM_SRAM_ADDR_B9 = TRUE


#===============================================================================
# ** System OPTIONS **
#===============================================================================
# Feature_Name = DLM over ARM support
# Description = Option for DLM over ARM support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_DLM_OVER_ARM = TRUE

# Feature_Name = MAK ARM support
# Description = Option for MAK ARM support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MAK_ARM = TRUE

# Feature_Name = MIU use APLL
# Description = Option for MIU use APLL
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = 153Mhz, 128P3Mhz
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
CHIP_MIU_USE_APLL_SEL = 153Mhz
endif
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
CHIP_MIU_USE_APLL_SEL = 128P3Mhz
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
CHIP_MIU_USE_APLL_SEL = 128P3Mhz
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
CHIP_MIU_USE_APLL_SEL = 128P3Mhz
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
CHIP_MIU_USE_APLL_SEL = 128P3Mhz
endif

# Feature_Name = Watchdog reset patch support
# Description = Option for Watchdog reset patch support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_WATCHDOG_RESET_PATCH = FALSE

# Feature_Name = DSP support
# Description = Option for DSP support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = B3, BRAVO, B5, BLOSSOM
CHIP_DSP_SEL = BLOSSOM

# Feature_Name = AVP ARM 9 support
# Description = Option for AVP ARM 9 support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_AVP_ARM_9 = TRUE

# Feature_Name = RIU Int Ctrl support
# Description = Option for RIU Int Ctrl support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_RIU_INT_CTL = TRUE

# Feature_Name = RTK Debug Info support
# Description = Option for RTK Debug Info support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_RTK_DBG_INFO = TRUE

# Feature_Name = AVP HW M4VD support
# Description = Option for AVP HW M4VD support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_AVP_HW_M4VD = FALSE

# Feature_Name = AVP AEON R2 support
# Description = Option for AVP AEON R2 support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_AVP_AEON_R2 = FALSE

# Feature_Name = MMAUDIO AEON support
# Description = Option for MMAUDIO AEON support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MMAUDIO_AEON = FALSE

# Feature_Name = MBAS suppport
# Description = Option for MBAS suppport
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MBAS = FALSE

# Feature_Name = RTK over R2 support
# Description = Option for RTK over R2 support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_RTK_OVER_R2 = FALSE

# Feature_Name = Allow Unaligned Memory Access Configuration
# Description = Option for unaligned memory access configuration
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_CONFIG_ALLOW_UNALIGNED_MEM_ACCESS = FALSE

# Feature_Name = Change DSP subsystem to R2 DSP
# Description = Option for change DSP subsystem to R2 DSP which is used in G1
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_UPGRADE_DSP_R2 = FALSE

# Feature_Name = [SYS] Null read write protect
# Description = Option for null read write protect
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_NULL_READ_WRITE_EXEC_PROTECT = TRUE

# Feature_Name = RTK Profile Enhance (for non-G1)
# Description = Option for RTK Profile Enhance (for non-G1)
# Pre_Variable_True = N/A
# Pre_Variable_False = __I_SW__
# Option_Selection = TRUE, FALSE
CHIP_RTK_PROFILE_ENHANCE = TRUE

# Feature_Name = MMU DLMA support
# Description = Option for MMU DLMA support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MMU_DLMA = TRUE

# Feature_Name = LIBS_PATH_BY_FEATURE = 3G
# Description = Option for LIBS_PATH_BY_FEATURE = 3G
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_LIBS_PATH_BY_FEATURE_IS_3G = FALSE

# Feature_Name = EMI Pool Protect
# Description = [SYS] Use EMI controller to protect pool clusters support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_EMI_POOL_PROTECT = TRUE

# Feature_Name = Write Trace Log related options
# Description = Option for Write Trace Log related options
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_UPGRADE_GENIE_OVER_SHMCONN = FALSE

# Feature_Name = Write Trace Log related options
# Description = Option for Write Trace Log related options
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_UPGRADE_HSL_OVER_SHMCONN = FALSE

# Feature_Name = Write Trace Log related options
# Description = Option for Write Trace Log related options
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_UPGRADE_RAMLOG_OVER_SHMCONN = FALSE

# Feature_Name = Write Trace Log related options
# Description = Option for Write Trace Log related options
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SYNC_VIA_HW_MAILBOX = FALSE

# Feature_Name = Coarse Timer support
# Description = Option for Coarse Timer support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_COARSE_TIMER = FALSE

# Feature_Name = [SYS] Auto Cpu Speed
# Description = Option for auto detect/modify cpu speed.
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_AUTO_CPU_SPEED = FALSE

# Feature_Name = for __EXTRACT_BOOT_IMAGE__
# Description = 32/64 compress whole binary usage
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
CHIP_EXTRACT_BOOT_IMAGE = TRUE
endif

# Feature_Name = for __COMPRESS_SELECTED_BIN__
# Description = 32/64 compress whole binary usage
# Pre_Variable_True = N/A
# Pre_Variable_False = CHIP_EXTRACT_BOOT_IMAGE = FALSE
# Option_Selection = TRUE, FALSE
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
CHIP_COMPRESS_SELECTED_BIN = TRUE
endif

# Feature_Name = [SYS] SD Download
# Description = Option for sd download
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SD_DOWNLOAD = TRUE


#===============================================================================
# ** Middleware (VML/ATI/RIL/MML) OPTIONS **
#===============================================================================
# Feature_Name = MMAUDIO ARM support
# Description = Option for MMAUDIO ARM support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MMAUDIO_ARM = TRUE

# Feature_Name = ENS support
# Description = [Middleware] Turn on ENS (Enhanced Network Selection) support.
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_ENS = TRUE

# Feature_Name = Full SIM path support
# Description = [Middleware] SIM file access service is provided in a way that full path/name should be specific rather than file name only.
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_FULL_SIM_PATH = TRUE

# Feature_Name = Silent reboot
# Description = Option for middleware silent reboot
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_ENABLE_DBB_SILENT_REBOOT = FALSE

# Feature_Name = Dual-SIM for RIL
# Description = [Middleware] Enable dual-SIM support of RIL.
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_DUO_MRL = TRUE

# Feature_Name = Remove logic not used by MMI/modem/production/GCF for core size reduction support
# Description = [Middleware] Remove logic not used by MMI/modem/production/GCF for core size reduction
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_CSR_ATI_VML = TRUE

# Feature_Name = Auto Cpu Speed Detection (Drv) support
# Description = Option for Auto Cpu Speed Detection (Drv) support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MDL_CPU_SPEED_AUTO_DETECT = TRUE

# Feature_Name = Dma2d HW support
# Description = Option for Dma2d HW support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_ENABLE_DMA2D_HW = TRUE

# Feature_Name = APP [Surround] IP Option
# Description = Option for select APP [Surround] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_BASICSURROUND
CHIP_APP_SURROUND = USE_APP_BASICSURROUND

# Feature_Name = APP [Graphic EQ] IP Option
# Description = Option for select APP [Graphic EQ] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_USERPEQ, USE_APP_B3HWGEQ, USE_APP_G1HWGEQ
CHIP_APP_GEQ = USE_APP_USERPEQ

# Feature_Name = APP [Reverb] IP Option
# Description = Option for select APP [Reverb] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_REVERB
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
CHIP_APP_REVERB = USE_APP_REVERB
endif

# Feature_Name = APP [Time Stretch] IP Option
# Description = Option for select APP [Time Stretch] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_TIMESTRETCH
CHIP_APP_TIMESTETCH = NULL

# Feature_Name = APP [Pitch Stretch] IP Option
# Description = Option for select APP [Pitch Stretch] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_PITCHTRETCH
CHIP_APP_PITCHSTETCH = USE_APP_PITCHTRETCH

# Feature_Name = APP [Compensation Filter] IP Option
# Description = Option for select APP [Compensation Filter] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_SPEAKERPEQ, USE_APP_B3HWPEQ, USE_APP_G1HWPEQ
CHIP_APP_COMPFILTER = USE_APP_SPEAKERPEQ

# Feature_Name = APP [Limiter] IP Option
# Description = Option for select APP [Limiter] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_DRCLIMITER, USE_APP_DRCLIMITER_V2, USE_APP_LOOKAHEADDRCLIMITER, USE_APP_HARDDRCLIMITER
CHIP_APP_LIMITER = USE_APP_DRCLIMITER_V2

# Feature_Name = APP [Voulme] IP Option
# Description = Option for select APP [Voulme] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_EXPVOL
CHIP_APP_VOLUME = USE_APP_EXPVOL

# Feature_Name = APP [Fading] IP Option
# Description = Option for select APP [Fading] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_SCFADER
CHIP_APP_FADING = USE_APP_SCFADER

# Feature_Name = ARP [Auto Volume Control] IP Option
# Description = Option for select ARP [Auto Volume Control] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_ARP_SWAGC, USE_ARP_B3HWAGC, USE_ARP_G1HWAGC
CHIP_ARP_AGC = USE_ARP_SWAGC

# Feature_Name = ARP [Voulme] IP Option
# Description = Option for select ARP [Voulme] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_ARP_EXPVOL
CHIP_ARP_VOLUME = NULL

# Feature_Name = Video Stabilizer
# Description = Option to enable video stabilizer
# Pre_Variable_True = VIDEO_STABILIZER_SUPPORT
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_VIDEO_STABILIZER_SUPPORT = TRUE

# Feature_Name = Camera support 2M bypass scaler
# Description = Options to support 2M bypass scaler
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_CAMERA_SUPPORT_2M_BYPASS_SCALER = FALSE

# Feature_Name = scaler support low bandwidth mode or not
# Description = scaler support low bandwidth mode or not
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_SCL_LOW_BANDWIDTH_MODE = TRUE

# Feature_Name = APP [SRS WOWHD] IP Option
# Description = Option for select APP [SRS WOWHD] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_SRSWOWHD
CHIP_APP_SRSWOWHD = USE_APP_SRSWOWHD

# Feature_Name = APP [BASS] IP Option
# Description = Option for select APP [BASS] IP
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = NULL, USE_APP_BASS
CHIP_APP_BASS = USE_APP_BASS


#===============================================================================
# ** MMI OPTIONS **
#===============================================================================
# Feature_Name = MMI Small Caller Photo support
# Description = Option for MMI Small Caller Photo support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MMI_SMALL_CALLER_PHOTO = TRUE

# Feature_Name = Dual SIM MMI support
# Description = Option for Dual SIM MMI support
# Pre_Variable_True = __MSTAR_DUAL_SIM__
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_DUAL_SIM_MMI = TRUE

# Feature_Name = Dual SIM reduce code support
# Description = Option for Dual SIM reduce code support
# Pre_Variable_True = __MSTAR_DUAL_SIM__
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_MSTAR_DUAL_SIM_REDUCE_CODE = TRUE

# Feature_Name = View Transition support
# Description = Option for  View Transition support
# Pre_Variable_True = UI_STYLE_VIEW_TRANSITION
# Pre_Variable_False = __SMALL_ROM__
# Option_Selection = TRUE, FALSE
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
CHIP_VIEW_TRANSITION = TRUE
endif

# Feature_Name = Image Compression support
# Description = Option for Image Compression support
# Pre_Variable_True = __NAND__
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_IMAGE_COMPRESSION = FALSE

# Feature_Name = EM Audio support
# Description = Option for EM Audio support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = B3, BRAVO, B5
CHIP_EM_AUDIO_SEL = B3

# Feature_Name = Simulator Chip support
# Description = Option for Simulator Chip support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = B3,G1
CHIP_SIMULATOR_SEL = B3

# Feature_Name = Camcorder support WQVGA record
# Description = Camcorder support WQVGA record
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_WQVGA_RECORD_SUPPORTED = FALSE

# Feature_Name = Camcorder support HVGA record
# Description = Camcorder support HVGA record
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_HVGA_RECORD_SUPPORTED = FALSE

# Feature_Name = King movie hvga support
# Description = Option for supporting HVGA resolution in king movie
# Pre_Variable_True = __MMI_KING_MOVIE__
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_KING_MOVIE_SUPPORT_HVGA_MMI = FALSE

# Feature_Name = HW JPD Decoder support
# Description = Option for JPD Hardware Decoder support
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_IMAGE_JPD_HW_DECODE = FALSE

# Feature_Name = Camera support auto focus
# Description = Camera support auto focus
# Pre_Variable_True = N/A
# Pre_Variable_False = N/A
# Option_Selection = TRUE, FALSE
CHIP_AUTO_FOCUS_SUPPORTED = FALSE


#===============================================================================
# ** Proprietary OPTIONS **
#===============================================================================
# Feature_Name = DZ BB CPU name
# Description = DZ BB CPU name
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = B3, BRAVO, 5, G1
DZ_BB_CPU_NAME = 8

# Feature_Name = BB Chip ID
# Description = BB Chip ID
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = msw8533x, msw8533d,msw853xb, msw8573, msw8830x
BB_CHIP_ID = msw8556x

# Feature_Name = Bootloader
# Description = Bootloader file name
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = bootloader_MSW853xb.ldr, bootloader_MSW8533x.ldr, bootloader_MSW8830x.ldr
BOOTLOADER =

# Feature_Name = Bootstrap
# Description = Bootstrap file name
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = bootstrap_MSW853xb.bst, bootstrap_MSW8533x.bst, bootstrap_MSW8533d.bst, bootstrap_MSW8830x.bst
BOOTSTRAP = bootstrap_MSW8556x.bst

# Feature_Name = Wintarget
# Description = Wintarget file name
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = lock_MSW853xb.wt, lock_MSW8533x.wt, lock_MSW8533d.wt, lock_MSW8830x.wt
WINTARGET = lock_MSW8556x.wt

# Feature_Name = Mcptest target
# Description = Mcptest file name
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = mcptest_MSW853xb.wt, mcptest_MSW8533x.wt, mcptest_MSW8533d.wt, mcptest_MSW8830x.wt
MCPTARGET = mcptest_MSW8556x.wt

# Feature_Name = Sensor cus path
# Description = Sensor cus path
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = 8533X, 8830X
SENSOR_CUS_PATH = 8533X

# Feature_Name = Disp table IC type
# Description = Disp table IC type
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = 8533x, 8533d
Disptbl_IC_TYPE = 8533d

# Feature_Name = Enhance SPI NOR burning speed
# Description = Enhance SPI NOR burning speed
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = MergeAll.dll
MERGE_TO_BIN = MergeAll.dll

# Feature_Name = folder name for BSP library set
# Description = folder name for BSP library set
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = BSP_B3, BSP_B4, BSP_B5
LIBS_PATH_BY_BSP = BSP_B9

# Feature_Name = BSP lib name
# Description = choose which bsp lib shouldl be built-in.
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = bsp_8f4,bsp_837,bsp_833,bsp_737,bsp_838,bsp_c3c,bsp_8f3
BSP_ID = bsp_6k3

# Feature_Name = Chip scatter file
# Description = Scatter filename for chip.
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = scatter_8532_64_32_bt_acrux2,scatter_8533d_bt_acrux2,scatter_8532b_64_32,scatter_8533bd_64_32,scatter_8533bn_nand,scatter_8533
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
CHIP_SCATTER = scatter_8556_64_32
endif
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
CHIP_SCATTER = scatter_8556r_64_32
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
CHIP_SCATTER = scatter_8556r_64_32
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
CHIP_SCATTER = scatter_8556m_64_32
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
CHIP_SCATTER = scatter_8556m_64_32
endif

# Feature_Name = Cpu type for DwlWin
# Description = Cpu type for DwlWin
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = 0,1,2,3,4,5,6
DWL_CPU_TYPE = 8

# Feature_Name = Flash mode for DwlWin
# Description = Flash mode for DwlWin
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = 0,1,2,3
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
DWL_FLASH_MODE = 0
endif
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
DWL_FLASH_MODE = 0
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
DWL_FLASH_MODE = 0
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
DWL_FLASH_MODE = 0
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
DWL_FLASH_MODE = 0
endif

# Feature_Name = BB Chip type
# Description = Chip type parameter for Dzpacker.exe
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = 8533C,8533N,8533CN,8536N,8532,8533D,8532B,8532B2,8533BN,8533BD
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
DZ_CHIP_TYPE = 8556
endif
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
DZ_CHIP_TYPE = 8556R
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
DZ_CHIP_TYPE = 8556R2
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
DZ_CHIP_TYPE = 8556M
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
DZ_CHIP_TYPE = 8556M2
endif

# Feature_Name = Compatible chip setting
# Description = Compatible chip setting for Dzpacker.exe
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = 8533C,8533N,8533CN,8536N,8532,8533D,8532B,8532B2,8533BN,8533BD
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
DZ_COMPATIBLE_CHIP = 8556R2
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
DZ_COMPATIBLE_CHIP = 8556M2
endif

# Feature_Name = MCP / SPI Flash support
# Description = MCP / SPI Flash configuation table path
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = msw8533x/default_8533x.xml,msw8533d/default_8533d.xml,msw8532/default_8532.xml,msw8533bd/default_8533bd.xml,msw8532b/default_8532b.xml
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
MCPCONFIG_XML_FILE = msw8556/default_8556.xml
endif
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
MCPCONFIG_XML_FILE = msw8556x/default_8556x.xml
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
MCPCONFIG_XML_FILE = msw8556x/default_8556x.xml
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
MCPCONFIG_XML_FILE = msw8556x/default_8556x.xml
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
MCPCONFIG_XML_FILE = msw8556x/default_8556x.xml
endif

# Feature_Name = MCP / SPI Flash support for page mode
# Description = MCP / SPI Flash page mode configuration
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = msw8533x/MemSettings.prm,msw8533d/MemSettings.prm,msw8533bd/MemSettings.prm
ifneq ($(filter __MSW8556__, $(CHIP_TYPE)),)
MCPCONFIG_PAGE_PRM = msw8556/MemSettings.prm
endif

# Feature_Name = Chip embedded RAM size
# Description = Chip embedded RAM size
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = 32M,64M
ifneq ($(filter __MSW8556R__, $(CHIP_TYPE)),)
CHIP_EMBEDDED_RAM_SIZE = 32M
endif
ifneq ($(filter __MSW8556R2__, $(CHIP_TYPE)),)
CHIP_EMBEDDED_RAM_SIZE = 64M
endif
ifneq ($(filter __MSW8556M__, $(CHIP_TYPE)),)
CHIP_EMBEDDED_RAM_SIZE = 32M
endif
ifneq ($(filter __MSW8556M2__, $(CHIP_TYPE)),)
CHIP_EMBEDDED_RAM_SIZE = 64M
endif

# Feature_Name = Sdappram
# Description = sdappram file name
# Pre_Variable_True = CHIP PROPRIETARY CONFIGURATION
# Pre_Variable_False = CHIP PROPRIETARY CONFIGURATION
# Option_Selection = SDAPPRAM_MSW8556x.BIN
SDAPPRAM = SDAPPRAM_MSW8556x.BIN

