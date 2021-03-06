#ifndef __CUS_WTEST_H__
#define __CUS_WTEST_H__

#include "sys_vm_dbg.ho"

#define _CUS1WT _CUS1 | LEVEL_30

//#define _PVW_WTEST_ENABLE_
#ifdef _PVW_WTEST_ENABLE_
#define _CUS_PVWWT _CUS1 | LEVEL_28
void pvw_wtest(void * TestParameters);
#endif

void ReceiveTestParam(void * TestParameters);
void cus_rspKeyTouchEvent(void * pMsg);

enum
{
WTEST_SYS_PROFILE_MEM_DISP_MMI=0x30, /* '0' in ascii */
WTEST_SYS_PROFILE_MEM_DISP_AT,
WTEST_SYS_DEBUG_MEM_DISP_MMI,
WTEST_SYS_DEBUG_MEM_DISP_AT
};
#ifdef __TMT_TRACE_STORE_SD__
typedef enum
{
   TMT_TRACE_OFF_WITH_STORE_SD=0x30,
   TMT_TRACE_OFF_WITHOUT_STORE_SD,
   TMT_TRACE_CIRCULAR_BUFFER_MODE,
   TMT_TRACE_FLIPFLAP_BUFFER_MODE=0x41,
   TMT_TRACE_ON_SAVE_TO_SD,
   TMT_TRACE_ON_USER_DEFINED_LEVEL1,
   TMT_TRACE_ON_AUDIO_LEVEL,
   TMT_TRACE_ON_DEFAULT_LEVEL,
   TMT_TRACE_ON_SMS_LEVEL,
   TMT_TRACE_ON_MMS_LEVEL,
   TMT_TRACE_ON_WAP_LEVEL,
   TMT_TRACE_ON_JAVA_LEVEL,
   TMT_TRACE_ON_SS_LEVEL,
   TMT_TRACE_ON_BLUETOOTH_LEVEL,
   TMT_TRACE_ON_USB_LEVEL,
   TMT_TRACE_ON_CAMERA_CAMOCRDER_LEVEL,
   TMT_TRACE_ON_FILE_SYSTEM_LEVEL,
   TMT_TRACE_ON_FM_LEVEL,
   TMT_TRACE_ON_ATV_LEVEL

} tmt_trcProfile_e;
#endif
#endif /* __CUS_WTEST_H__ */

