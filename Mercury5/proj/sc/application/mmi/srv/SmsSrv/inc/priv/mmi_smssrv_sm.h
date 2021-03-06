/**
* @file mmi_sms_sm.h
*
* State Machine Service - SMS
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_SMS
*
*
* @version $Id$
*/
#ifndef __MMI_SMS_SM_H__
#define __MMI_SMS_SM_H__

#include "mmi_mae_sm.h"
#include "mmi_class.h"

/**
 * Mode Tree Properties
 */
#define cSMS_ModeNumbers                8
#define cSMS_DependencyNumbers				24

/**
 * Modes (index should begin from 0 and increase continuously)
 */
#define cSMS_MODE_sms               0
#define cSMS_MODE_Init              1
#define cSMS_MODE_Idle              2
#define cSMS_MODE_Active                3
#define cSMS_MODE_Active_CheckQueue             4
#define cSMS_MODE_Active_Send               5
#define cSMS_MODE_Exit              6
#define cSMS_MODE_Suspend               7


/**
 * Internal Events
 */
#define SMS_IEVT_Idle               (CLSID_SMS << 16 | 12)
#define SMS_IEVT_Send               (CLSID_SMS << 16 | 13)
#define SMS_IEVT_CheckQueue             (CLSID_SMS << 16 | 14)
#define SMS_IEVT_READY              (CLSID_SMS << 16 | 15)
#define SMS_IEVT_EXIT               (CLSID_SMS << 16 | 16)
#define SMS_IEVT_SIM_ReadyInd               (CLSID_SMS << 16 | 17)
#define SMS_IEVT_SIM_DeactiveInd                (CLSID_SMS << 16 | 18)
#define SMS_IEVT_STK_Refresh                (CLSID_SMS << 16 | 19)
#define SMS_IEVT_Suspend                (CLSID_SMS << 16 | 20)


/**
 * Macros for triggering internal events
 */
#define TRIGGER_EVT_SMS_IEVT_Idle(pSM, p1, p2)  MAE_TriggerEvent(pSM, SMS_IEVT_Idle, p1, p2)
#define TRIGGER_EVT_SMS_IEVT_Send(pSM, p1, p2)  MAE_TriggerEvent(pSM, SMS_IEVT_Send, p1, p2)
#define TRIGGER_EVT_SMS_IEVT_CheckQueue(pSM, p1, p2)    MAE_TriggerEvent(pSM, SMS_IEVT_CheckQueue, p1, p2)
#define TRIGGER_EVT_SMS_IEVT_READY(pSM, p1, p2) MAE_TriggerEvent(pSM, SMS_IEVT_READY, p1, p2)
#define TRIGGER_EVT_SMS_IEVT_EXIT(pSM, p1, p2)  MAE_TriggerEvent(pSM, SMS_IEVT_EXIT, p1, p2)
#define TRIGGER_EVT_SMS_IEVT_SIM_ReadyInd(pSM, p1, p2)  MAE_TriggerEvent(pSM, SMS_IEVT_SIM_ReadyInd, p1, p2)
#define TRIGGER_EVT_SMS_IEVT_SIM_DeactiveInd(pSM, p1, p2)   MAE_TriggerEvent(pSM, SMS_IEVT_SIM_DeactiveInd, p1, p2)
#define TRIGGER_EVT_SMS_IEVT_STK_Refresh(pSM, p1, p2)   MAE_TriggerEvent(pSM, SMS_IEVT_STK_Refresh, p1, p2)
#define TRIGGER_EVT_SMS_IEVT_Suspend(pSM, p1, p2)   MAE_TriggerEvent(pSM, SMS_IEVT_Suspend, p1, p2)


/*-------------------------------------------------------------------------*/
extern const SM_Mode_t SMS_modeTree[];
extern const SM_Transition_t SMS_transition[];
extern const SM_TransitionForEvent_t SMS_transForEvent[];
extern const SM_EventDep_t SMS_eventDependency[];

#endif /* __MMI_SMS_SM_H__ */
