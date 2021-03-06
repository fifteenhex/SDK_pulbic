/**
* @file mmi_fdnsrv_sm.h
*
* State Machine Service - FDNSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_FDNSRV
*
*
* @version $Id$
*/
#ifndef __MMI_FDNSRV_SM_H__
#define __MMI_FDNSRV_SM_H__

#include "mmi_mae_sm.h"
#include "mmi_class.h"

/**
 * Mode Tree Properties
 */
#define cFDNSRV_ModeNumbers             11
#define cFDNSRV_DependencyNumbers				22

/**
 * Modes (index should begin from 0 and increase continuously)
 */
#define cFDNSRV_MODE_FDNSrv             0
#define cFDNSRV_MODE_idle               1
#define cFDNSRV_MODE_QueryFDNStatus             2
#define cFDNSRV_MODE_active             3
#define cFDNSRV_MODE_active_CheckFID                4
#define cFDNSRV_MODE_active_GetFDNStorageStatus             5
#define cFDNSRV_MODE_active_SetFDNStatus                6
#define cFDNSRV_MODE_active_ReadOneFDN              7
#define cFDNSRV_MODE_active_ReadAllFDNToPhone               8
#define cFDNSRV_MODE_active_WriteOneFDN             9
#define cFDNSRV_MODE_active_DeleteOneFDN                10


/**
 * Internal Events
 */
#define FDNSRV_IEVT_TO_CHECK_FID                (CLSID_FDNSRV << 16 | 4)
#define FDNSRV_IEVT_TO_SET_STATUS               (CLSID_FDNSRV << 16 | 5)
#define FDNSRV_IEVT_TO_READ_ONE_FDN             (CLSID_FDNSRV << 16 | 6)
#define FDNSRV_IEVT_TO_READ_ALL_FDN_TO_PHONE                (CLSID_FDNSRV << 16 | 7)
#define FDNSRV_IEVT_TO_WRITE_ONE_FDN                (CLSID_FDNSRV << 16 | 8)
#define FDNSRV_IEVT_TO_DELETE_ONE_FDN               (CLSID_FDNSRV << 16 | 9)
#define FDNSRV_IEVT_FINISH              (CLSID_FDNSRV << 16 | 10)
#define FDNSRV_IEVT_TO_GET_FDN_STORAGE_STATUS               (CLSID_FDNSRV << 16 | 11)
#define FDNSRV_IEVT_TO_GET_FILE_STATUS              (CLSID_FDNSRV << 16 | 12)
#define FDNSRV_IEVT_TO_IDLE             (CLSID_FDNSRV << 16 | 13)
#define FDNSRV_IEVT_GET_PHB_READY               (CLSID_FDNSRV << 16 | 14)
#define FDNSRV_IEVT_TO_IDLE_AGAIN               (CLSID_FDNSRV << 16 | 15)

/**
 * Macros for triggering internal events
 */
#define TRIGGER_EVT_FDNSRV_IEVT_TO_CHECK_FID(pSM, p1, p2)   MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_CHECK_FID, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_SET_STATUS(pSM, p1, p2)  MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_SET_STATUS, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_READ_ONE_FDN(pSM, p1, p2)    MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_READ_ONE_FDN, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_READ_ALL_FDN_TO_PHONE(pSM, p1, p2)   MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_READ_ALL_FDN_TO_PHONE, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_WRITE_ONE_FDN(pSM, p1, p2)   MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_WRITE_ONE_FDN, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_DELETE_ONE_FDN(pSM, p1, p2)  MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_DELETE_ONE_FDN, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_FINISH(pSM, p1, p2) MAE_TriggerEvent(pSM, FDNSRV_IEVT_FINISH, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_GET_FDN_STORAGE_STATUS(pSM, p1, p2)  MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_GET_FDN_STORAGE_STATUS, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_GET_FILE_STATUS(pSM, p1, p2) MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_GET_FILE_STATUS, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_IDLE(pSM, p1, p2)    MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_IDLE, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_GET_PHB_READY(pSM, p1, p2)  MAE_TriggerEvent(pSM, FDNSRV_IEVT_GET_PHB_READY, p1, p2)
#define TRIGGER_EVT_FDNSRV_IEVT_TO_IDLE_AGAIN(pSM, p1, p2)  MAE_TriggerEvent(pSM, FDNSRV_IEVT_TO_IDLE_AGAIN, p1, p2)


/*-------------------------------------------------------------------------*/
extern const SM_Mode_t FDNSRV_modeTree[];
extern const SM_Transition_t FDNSRV_transition[];
extern const SM_TransitionForEvent_t FDNSRV_transForEvent[];
extern const SM_EventDep_t FDNSRV_eventDependency[];

#endif /* __MMI_FDNSRV_SM_H__ */
