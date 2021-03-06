/**
* @file mmi_vtccsrv_sm.h
*
* State Machine Service - VTCCSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_VTCCSRV
*
*
* @version $Id$
*/
#ifndef __MMI_VTCCSRV_SM_H__
#define __MMI_VTCCSRV_SM_H__

#include "mmi_mae_sm.h"
#include "mmi_class.h"

#ifdef __VT_3G324M__

/**
 * Mode Tree Properties
 */
#define cVTCCSRV_ModeNumbers              19
#define cVTCCSRV_DependencyNumbers                52

/**
 * Modes (index should begin from 0 and increase continuously)
 */
#define cVTCCSRV_MODE_VTCCSRV               0
#define cVTCCSRV_MODE_Init                1
#define cVTCCSRV_MODE_IDLE                2
#define cVTCCSRV_MODE_Active              3
#define cVTCCSRV_MODE_Active_MakeCall             4
#define cVTCCSRV_MODE_Active_CheckBlacklist               5
#define cVTCCSRV_MODE_Active_IncomingCall             6
#define cVTCCSRV_MODE_Active_InCallSession                7
#define cVTCCSRV_MODE_Active_InCallSession_OneActiveCall              8
#define cVTCCSRV_MODE_Active_InCallSession_OneActiveCall_Active               9
#define cVTCCSRV_MODE_Active_InCallSession_OneActiveCall_WaitingCall              10
#define cVTCCSRV_MODE_Active_InCallSession_OneHoldCall                11
#define cVTCCSRV_MODE_Active_InCallSession_OneHoldCall_Hold               12
#define cVTCCSRV_MODE_Active_InCallSession_OneHoldCall_WaitingCall                13
#define cVTCCSRV_MODE_Active_InCallSession_OneHoldCall_Make2ndCall                14
#define cVTCCSRV_MODE_Active_InCallSession_OneActiveOneHoldCall               15
#define cVTCCSRV_MODE_Active_InCallSession_OneActiveOneHoldCall_ActiveHold                16
#define cVTCCSRV_MODE_Active_InCallSession_OneActiveOneHoldCall_WaitingCall               17
#define cVTCCSRV_MODE_Active_InCallSession_CheckBlacklist             18


/**
 * Internal Events
 */
#define VTCCSRV_IEVT_ReleaseOutgoinCall               (CLSID_VTCCSRV << 16 | 38)
#define VTCCSRV_IEVT_ReleaseAllHoldCalls              (CLSID_VTCCSRV << 16 | 39)
#define VTCCSRV_IEVT_IncomingCallNotInBlacklist               (CLSID_VTCCSRV << 16 | 40)
#define VTCCSRV_IEVT_ReleaseWaitingCall               (CLSID_VTCCSRV << 16 | 41)
#define VTCCSRV_IEVT_ReplaceByWaitingCall             (CLSID_VTCCSRV << 16 | 42)
#define VTCCSRV_IEVT_ReleaseAllActiveInWaiting                (CLSID_VTCCSRV << 16 | 43)
#define VTCCSRV_IEVT_ReleaseAllHoldInWaiting              (CLSID_VTCCSRV << 16 | 44)
#define VTCCSRV_IEVT_NotBlockto1AW                (CLSID_VTCCSRV << 16 | 45)
#define VTCCSRV_IEVT_NotBlockto1HW                (CLSID_VTCCSRV << 16 | 46)
#define VTCCSRV_IEVT_NotBlockto1A1HW              (CLSID_VTCCSRV << 16 | 47)
#define VTCCSRV_IEVT_Blockto1A                (CLSID_VTCCSRV << 16 | 48)
#define VTCCSRV_IEVT_Blockto1H                (CLSID_VTCCSRV << 16 | 49)
#define VTCCSRV_IEVT_Blockto1A1H              (CLSID_VTCCSRV << 16 | 50)
#define VTCCSRV_IEVT_WaitAcceptRspIn1AW               (CLSID_VTCCSRV << 16 | 51)
#define VTCCSRV_IEVT_HoldCall             (CLSID_VTCCSRV << 16 | 52)
#define VTCCSRV_IEVT_RetrieveCall             (CLSID_VTCCSRV << 16 | 53)
#define VTCCSRV_IEVT_JoinMPTY             (CLSID_VTCCSRV << 16 | 54)
#define VTCCSRV_IEVT_SplitCall                (CLSID_VTCCSRV << 16 | 55)
#define VTCCSRV_IEVT_SwapCall             (CLSID_VTCCSRV << 16 | 56)
#define VTCCSRV_IEVT_ReleaseAllCalls              (CLSID_VTCCSRV << 16 | 57)
#define VTCCSRV_IEVT_ReleaseAllActiveCalls                (CLSID_VTCCSRV << 16 | 58)
#define VTCCSRV_IEVT_ReplaceByHoldCalls               (CLSID_VTCCSRV << 16 | 59)
#define VTCCSRV_IEVT_InitialSuccess               (CLSID_VTCCSRV << 16 | 60)
#define VTCCSRV_IEVT_DialingCallSuccess               (CLSID_VTCCSRV << 16 | 61)
#define VTCCSRV_IEVT_DialingCallFail              (CLSID_VTCCSRV << 16 | 62)
#define VTCCSRV_IEVT_HangUpCallSuccess                (CLSID_VTCCSRV << 16 | 63)
#define VTCCSRV_IEVT_HangUpCallFail               (CLSID_VTCCSRV << 16 | 64)
#define VTCCSRV_IEVT_AcceptCallSuccess                (CLSID_VTCCSRV << 16 | 65)
#define VTCCSRV_IEVT_AcceptCallFail               (CLSID_VTCCSRV << 16 | 66)
#define VTCCSRV_IEVT_BlackListEnable              (CLSID_VTCCSRV << 16 | 67)
#define VTCCSRV_IEVT_BlackListDisable             (CLSID_VTCCSRV << 16 | 68)
#define VTCCSRV_IEVT_HangUpOutgoingCallSuccess                (CLSID_VTCCSRV << 16 | 69)
#define VTCCSRV_IEVT_HangupOutgoingCallFail               (CLSID_VTCCSRV << 16 | 70)
#define VTCCSRV_IEVT_MakeCallReq              (CLSID_VTCCSRV << 16 | 71)
#define VTCCSRV_IEVT_GotoHoldCall             (CLSID_VTCCSRV << 16 | 72)
#define VTCCSRV_IEVT_AllCallsReleasedButIncoming              (CLSID_VTCCSRV << 16 | 73)


/**
 * Macros for triggering internal events
 */
#define TRIGGER_EVT_VTCCSRV_IEVT_ReleaseOutgoinCall(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReleaseOutgoinCall, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_ReleaseAllHoldCalls(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReleaseAllHoldCalls, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_IncomingCallNotInBlacklist(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_IncomingCallNotInBlacklist, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_ReleaseWaitingCall(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReleaseWaitingCall, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_ReplaceByWaitingCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReplaceByWaitingCall, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_ReleaseAllActiveInWaiting(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReleaseAllActiveInWaiting, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_ReleaseAllHoldInWaiting(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReleaseAllHoldInWaiting, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_NotBlockto1AW(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_NotBlockto1AW, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_NotBlockto1HW(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_NotBlockto1HW, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_NotBlockto1A1HW(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_NotBlockto1A1HW, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_Blockto1A(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_Blockto1A, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_Blockto1H(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_Blockto1H, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_Blockto1A1H(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_Blockto1A1H, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_WaitAcceptRspIn1AW(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_WaitAcceptRspIn1AW, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_HoldCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, VTCCSRV_IEVT_HoldCall, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_RetrieveCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, VTCCSRV_IEVT_RetrieveCall, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_JoinMPTY(pSM, p1, p2)    MAE_TriggerEvent(pSM, VTCCSRV_IEVT_JoinMPTY, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_SplitCall(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_SplitCall, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_SwapCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, VTCCSRV_IEVT_SwapCall, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_ReleaseAllCalls(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReleaseAllCalls, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_ReleaseAllActiveCalls(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReleaseAllActiveCalls, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_ReplaceByHoldCalls(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_ReplaceByHoldCalls, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_InitialSuccess(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_InitialSuccess, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_DialingCallSuccess(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_DialingCallSuccess, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_DialingCallFail(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_DialingCallFail, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_HangUpCallSuccess(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_HangUpCallSuccess, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_HangUpCallFail(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_HangUpCallFail, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_AcceptCallSuccess(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_AcceptCallSuccess, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_AcceptCallFail(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_AcceptCallFail, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_BlackListEnable(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_BlackListEnable, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_BlackListDisable(pSM, p1, p2)    MAE_TriggerEvent(pSM, VTCCSRV_IEVT_BlackListDisable, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_HangUpOutgoingCallSuccess(pSM, p1, p2)   MAE_TriggerEvent(pSM, VTCCSRV_IEVT_HangUpOutgoingCallSuccess, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_HangupOutgoingCallFail(pSM, p1, p2)  MAE_TriggerEvent(pSM, VTCCSRV_IEVT_HangupOutgoingCallFail, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_MakeCallReq(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_MakeCallReq, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_GotoHoldCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, VTCCSRV_IEVT_GotoHoldCall, p1, p2)
#define TRIGGER_EVT_VTCCSRV_IEVT_AllCallsReleasedButIncoming(pSM, p1, p2) MAE_TriggerEvent(pSM, VTCCSRV_IEVT_AllCallsReleasedButIncoming, p1, p2)


/*-------------------------------------------------------------------------*/
extern const SM_Mode_t VTCCSRV_modeTree[];
extern const SM_Transition_t VTCCSRV_transition[];
extern const SM_TransitionForEvent_t VTCCSRV_transForEvent[];
extern const SM_EventDep_t VTCCSRV_eventDependency[];

#endif //__VT_3G324M__
#endif /* __MMI_VTCCSRV_SM_H__ */

