/**
* @file mmi_ccsrv_sm.h
*
* State Machine Service - CCSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_CCSRV
*
*
* @version $Id$
*/
#ifndef __MMI_CCSRV_SM_H__
#define __MMI_CCSRV_SM_H__

#include "mmi_mae_sm.h"
#include "mmi_class.h"

/**
 * Mode Tree Properties
 */
#define cCCSRV_ModeNumbers              19
#define cCCSRV_DependencyNumbers                52

/**
 * Modes (index should begin from 0 and increase continuously)
 */
#define cCCSRV_MODE_CCSRV               0
#define cCCSRV_MODE_Init                1
#define cCCSRV_MODE_IDLE                2
#define cCCSRV_MODE_Active              3
#define cCCSRV_MODE_Active_MakeCall             4
#define cCCSRV_MODE_Active_CheckBlacklist               5
#define cCCSRV_MODE_Active_IncomingCall             6
#define cCCSRV_MODE_Active_InCallSession                7
#define cCCSRV_MODE_Active_InCallSession_OneActiveCall              8
#define cCCSRV_MODE_Active_InCallSession_OneActiveCall_Active               9
#define cCCSRV_MODE_Active_InCallSession_OneActiveCall_WaitingCall              10
#define cCCSRV_MODE_Active_InCallSession_OneHoldCall                11
#define cCCSRV_MODE_Active_InCallSession_OneHoldCall_Hold               12
#define cCCSRV_MODE_Active_InCallSession_OneHoldCall_WaitingCall                13
#define cCCSRV_MODE_Active_InCallSession_OneHoldCall_Make2ndCall                14
#define cCCSRV_MODE_Active_InCallSession_OneActiveOneHoldCall               15
#define cCCSRV_MODE_Active_InCallSession_OneActiveOneHoldCall_ActiveHold                16
#define cCCSRV_MODE_Active_InCallSession_OneActiveOneHoldCall_WaitingCall               17
#define cCCSRV_MODE_Active_InCallSession_CheckBlacklist             18


/**
 * Internal Events
 */
#define CCSRV_IEVT_ReleaseOutgoinCall               (CLSID_CCSRV << 16 | 38)
#define CCSRV_IEVT_ReleaseAllHoldCalls              (CLSID_CCSRV << 16 | 39)
#define CCSRV_IEVT_IncomingCallNotInBlacklist               (CLSID_CCSRV << 16 | 40)
#define CCSRV_IEVT_ReleaseWaitingCall               (CLSID_CCSRV << 16 | 41)
#define CCSRV_IEVT_ReplaceByWaitingCall             (CLSID_CCSRV << 16 | 42)
#define CCSRV_IEVT_ReleaseAllActiveInWaiting                (CLSID_CCSRV << 16 | 43)
#define CCSRV_IEVT_ReleaseAllHoldInWaiting              (CLSID_CCSRV << 16 | 44)
#define CCSRV_IEVT_NotBlockto1AW                (CLSID_CCSRV << 16 | 45)
#define CCSRV_IEVT_NotBlockto1HW                (CLSID_CCSRV << 16 | 46)
#define CCSRV_IEVT_NotBlockto1A1HW              (CLSID_CCSRV << 16 | 47)
#define CCSRV_IEVT_Blockto1A                (CLSID_CCSRV << 16 | 48)
#define CCSRV_IEVT_Blockto1H                (CLSID_CCSRV << 16 | 49)
#define CCSRV_IEVT_Blockto1A1H              (CLSID_CCSRV << 16 | 50)
#define CCSRV_IEVT_WaitAcceptRspIn1AW               (CLSID_CCSRV << 16 | 51)
#define CCSRV_IEVT_HoldCall             (CLSID_CCSRV << 16 | 52)
#define CCSRV_IEVT_RetrieveCall             (CLSID_CCSRV << 16 | 53)
#define CCSRV_IEVT_JoinMPTY             (CLSID_CCSRV << 16 | 54)
#define CCSRV_IEVT_SplitCall                (CLSID_CCSRV << 16 | 55)
#define CCSRV_IEVT_SwapCall             (CLSID_CCSRV << 16 | 56)
#define CCSRV_IEVT_ReleaseAllCalls              (CLSID_CCSRV << 16 | 57)
#define CCSRV_IEVT_ReleaseAllActiveCalls                (CLSID_CCSRV << 16 | 58)
#define CCSRV_IEVT_ReplaceByHoldCalls               (CLSID_CCSRV << 16 | 59)
#define CCSRV_IEVT_InitialSuccess               (CLSID_CCSRV << 16 | 60)
#define CCSRV_IEVT_DialingCallSuccess               (CLSID_CCSRV << 16 | 61)
#define CCSRV_IEVT_DialingCallFail              (CLSID_CCSRV << 16 | 62)
#define CCSRV_IEVT_HangUpCallSuccess                (CLSID_CCSRV << 16 | 63)
#define CCSRV_IEVT_HangUpCallFail               (CLSID_CCSRV << 16 | 64)
#define CCSRV_IEVT_AcceptCallSuccess                (CLSID_CCSRV << 16 | 65)
#define CCSRV_IEVT_AcceptCallFail               (CLSID_CCSRV << 16 | 66)
#define CCSRV_IEVT_BlackListEnable              (CLSID_CCSRV << 16 | 67)
#define CCSRV_IEVT_BlackListDisable             (CLSID_CCSRV << 16 | 68)
#define CCSRV_IEVT_HangUpOutgoingCallSuccess                (CLSID_CCSRV << 16 | 69)
#define CCSRV_IEVT_HangupOutgoingCallFail               (CLSID_CCSRV << 16 | 70)
#define CCSRV_IEVT_MakeCallReq              (CLSID_CCSRV << 16 | 71)
#define CCSRV_IEVT_GotoHoldCall             (CLSID_CCSRV << 16 | 72)
#define CCSRV_IEVT_AllCallsReleasedButIncoming              (CLSID_CCSRV << 16 | 73)


/**
 * Macros for triggering internal events
 */
#define TRIGGER_EVT_CCSRV_IEVT_ReleaseOutgoinCall(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_ReleaseOutgoinCall, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_ReleaseAllHoldCalls(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_ReleaseAllHoldCalls, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_IncomingCallNotInBlacklist(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_IncomingCallNotInBlacklist, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_ReleaseWaitingCall(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_ReleaseWaitingCall, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_ReplaceByWaitingCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, CCSRV_IEVT_ReplaceByWaitingCall, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_ReleaseAllActiveInWaiting(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_ReleaseAllActiveInWaiting, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_ReleaseAllHoldInWaiting(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_ReleaseAllHoldInWaiting, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_NotBlockto1AW(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_NotBlockto1AW, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_NotBlockto1HW(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_NotBlockto1HW, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_NotBlockto1A1HW(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_NotBlockto1A1HW, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_Blockto1A(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_Blockto1A, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_Blockto1H(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_Blockto1H, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_Blockto1A1H(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_Blockto1A1H, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_WaitAcceptRspIn1AW(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_WaitAcceptRspIn1AW, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_HoldCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, CCSRV_IEVT_HoldCall, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_RetrieveCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, CCSRV_IEVT_RetrieveCall, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_JoinMPTY(pSM, p1, p2)    MAE_TriggerEvent(pSM, CCSRV_IEVT_JoinMPTY, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_SplitCall(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_SplitCall, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_SwapCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, CCSRV_IEVT_SwapCall, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_ReleaseAllCalls(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_ReleaseAllCalls, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_ReleaseAllActiveCalls(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_ReleaseAllActiveCalls, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_ReplaceByHoldCalls(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_ReplaceByHoldCalls, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_InitialSuccess(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_InitialSuccess, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_DialingCallSuccess(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_DialingCallSuccess, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_DialingCallFail(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_DialingCallFail, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_HangUpCallSuccess(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_HangUpCallSuccess, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_HangUpCallFail(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_HangUpCallFail, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_AcceptCallSuccess(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_AcceptCallSuccess, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_AcceptCallFail(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_AcceptCallFail, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_BlackListEnable(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_BlackListEnable, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_BlackListDisable(pSM, p1, p2)    MAE_TriggerEvent(pSM, CCSRV_IEVT_BlackListDisable, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_HangUpOutgoingCallSuccess(pSM, p1, p2)   MAE_TriggerEvent(pSM, CCSRV_IEVT_HangUpOutgoingCallSuccess, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_HangupOutgoingCallFail(pSM, p1, p2)  MAE_TriggerEvent(pSM, CCSRV_IEVT_HangupOutgoingCallFail, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_MakeCallReq(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_MakeCallReq, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_GotoHoldCall(pSM, p1, p2)    MAE_TriggerEvent(pSM, CCSRV_IEVT_GotoHoldCall, p1, p2)
#define TRIGGER_EVT_CCSRV_IEVT_AllCallsReleasedButIncoming(pSM, p1, p2) MAE_TriggerEvent(pSM, CCSRV_IEVT_AllCallsReleasedButIncoming, p1, p2)


/*-------------------------------------------------------------------------*/
extern const SM_Mode_t CCSRV_modeTree[];
extern const SM_Transition_t CCSRV_transition[];
extern const SM_TransitionForEvent_t CCSRV_transForEvent[];
extern const SM_EventDep_t CCSRV_eventDependency[];

#endif /* __MMI_CCSRV_SM_H__ */
