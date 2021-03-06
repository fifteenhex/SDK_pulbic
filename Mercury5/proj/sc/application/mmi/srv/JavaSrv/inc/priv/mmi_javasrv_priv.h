/**
* @file mmi_javasrv_priv.h
*
* State Machine Service - JAVASRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_JAVASRV
*
*
* @version $Id$
*/
#ifndef __MMI_JAVASRV_PRIV_H__
#define __MMI_JAVASRV_PRIV_H__

#include "mmi_mae_common_def.h"
#include "mmi_mae_sm_defs.h"
#include "mmi_javasrv.h"
#include "mmi_javasrv_sm.h"

#ifdef __JAVA_MMI__

#include "mmi_mae_notifier.h"
#include "mmi_alarmsrv.h"
#ifdef __JAVA_OAKMONT__
#include "mmi_usbsrv.h"
#endif // __JAVA_OAKMONT__
#define JAVA_PUSH_ALARM_MAX 10
#define JAVA_PUSH_PORT_MAX  10

#ifdef __JAVA_OAKMONT_NFC_PUSH_SUPPORT__
#define JAVA_PUSH_NDEF_MAX  10
#endif
/**
 * Application structure
 */
typedef struct MMI_JAVASRV_TAG
{
    DECLARE_FUNCTBL(IJAVASRV);    // function table pointer
    u32 refCnt;     // reference count
    SM_Mao_t app;       // StateMachine Application data
    SM_ModeId_t _lastActiveMode[cJAVASRV_ModeNumbers];  // Last child, current active child
    SM_ModeId_t _currentMode[1];
    /* Add custom fields below */
    MAE_Notifier_t *pNotifier;  // to notify Setup Idle Text, Refresh event
    IALARMSRV *pIALARMSRV;
#ifdef __JAVA_OAKMONT__
    IUSBSRV *pIUSBSrv; // USB service
    ModelListener_t usbMdlListener; // Model listener of USB event
#endif // __JAVA_OAKMONT__
    boolean bTerminate;
    mmi_ams_PushAlarmReq_t PushAlarmReq[JAVA_PUSH_ALARM_MAX];
    mmi_ams_PushPortReq_t PushPortReq[JAVA_PUSH_PORT_MAX];
#ifdef __JAVA_OAKMONT_NFC_PUSH_SUPPORT__
    mmi_ams_PushNDEFReq_t PushNDEFReq[JAVA_PUSH_NDEF_MAX];
#endif
    int midletIndex;
    java_LanuchCause java_cause;
} MMI_JAVASRV;

#endif // __JAVA_MMI__

#endif /* __MMI_JAVASRV_PRIV_H__ */
