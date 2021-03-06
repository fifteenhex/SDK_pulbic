/**
* file  mmi_antistealapp_cfg.h
*
*
*/


#ifndef __MMI_ANTISTEALAPP_CFG_H__
#define __MMI_ANTISTEALAPP_CFG_H__


#include"mmi_common_sms_master.h"


#define CONFIG_AMR_ANTISTEAL_SAVE_PASSWORD CONFIG_DEFINE(CFGIT_ANTISTEAL_SAVE_PASSWORD, MAE_WChar, 9, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00})
/* First In */
#define CONFIG_AMR_ANTISTEAL_FIRSTIN CONFIG_DEFINE(CFGIT_ANTISTEAL_FIRSTIN, boolean, 1, FALSE)
/* Status */
#define CONFIG_AMR_ANTISTEAL_STATUS CONFIG_DEFINE(CFGIT_ANTISTEAL_STATUS, boolean, 1, FALSE)
/* Encoding */
#define CONFIG_AMR_ANTISTEAL_ENCODING CONFIG_DEFINE(CFGIT_ANTISTEAL_ENCODING, SMI_SmEncoding_t, 1, EncodingGSM7Bit)
/* Number */
#define CONFIG_AMR_ANTISTEAL_NOTIFY_NUMBER CONFIG_DEFINE(CFGIT_ANTISTEAL_NOTIFY_NUMBER, MAE_WChar, 41, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00})
/* Content */
#define CONFIG_AMR_ANTISTEAL_NOTIFY_CONTENT CONFIG_DEFINE(CFGIT_ANTISTEAL_NOTIFY_CONTENT, MAE_WChar, 21, {0x00,0x00,0x00,0x00,0x00,0x00, \
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00})

#define CONFIG_AMR_ANTISTEAL_SIM_MASTER CONFIG_DEFINE(CFGIT_ANTISTEAL_SIM_MASTER, u8, 9, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00})
#define CONFIG_AMR_ANTISTEAL_SIM_SLAVE CONFIG_DEFINE(CFGIT_ANTISTEAL_SIM_SLAVE, u8, 9, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00})

#ifdef __ANTI_STEAL_MMI__
#define ANTISTEALAPP_AMR_ALL_CONFIG \
                            CONFIG_AMR_ANTISTEAL_FIRSTIN \
                            CONFIG_AMR_ANTISTEAL_STATUS \
                            CONFIG_AMR_ANTISTEAL_SAVE_PASSWORD \
                            CONFIG_AMR_ANTISTEAL_SIM_MASTER \
                            CONFIG_AMR_ANTISTEAL_SIM_SLAVE \
                            CONFIG_AMR_ANTISTEAL_NOTIFY_NUMBER \
                            CONFIG_AMR_ANTISTEAL_NOTIFY_CONTENT \
                            CONFIG_AMR_ANTISTEAL_ENCODING
#else
#define ANTISTEALAPP_AMR_ALL_CONFIG
#endif // __ANTI_STEAL_MMI__

#endif	//__MMI_ANTISTEALAPP_CFG_H__


