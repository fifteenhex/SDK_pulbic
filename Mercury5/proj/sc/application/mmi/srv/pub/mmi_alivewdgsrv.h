/**
* @file mmi_alivewdgsrv.h
*
* Service without using State Machine - ALIVEWDGSRV
* Generated by XFSM v1.0, CodeVer=v0.24 
*
* Class Id: CLSID_ALIVEWDGSRV
* Interface Id: IID_ALIVEWDGSRV
*
* @version $Id: mmi_alivewdgsrv.h 37577 2009-08-11 12:26:34Z jason.su $
*/
#ifndef __MMI_ALIVEWDGSRV_H__
#define __MMI_ALIVEWDGSRV_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"

/*-------------------------------------------------------------------------*/

#if defined(__GADGETS_MMI__) || defined(__3D_UI_IDLE_GADGETBAR__)

#include "mmi_mae_datamodel.h"
#include "mmi_common_alivewidget.h"
#include "mmi_wdg_abscontainer.h"

enum
{
    AliveWidget_BG_Play_None = 0
   ,AliveWidget_BG_Play_MediaPlayer
   ,AliveWidget_BG_Play_FMRadio
}; 
typedef u8 AliveWidget_BG_Play_e;

typedef struct
{
    AliveWidget_InputEvent_e evtType;
} AliveWidgetData_t;

typedef struct
{
    AliveWidget_Init_State_Info_t stInitStateInfo;
} AliveWidgetSrvInfo_t;

/*-------------------------------------------------------------------------*/

/**
 * External Events
 */

/**
 * IALIVEWDGSRV Interfaces
 */
#define INHERIT_IALIVEWDGSRV(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*Register)     ( IName * , void *instance, AliveWidgetID_e wId, IDataModel **ppDataMdl);  \
    MAE_Ret     (*Deregister)       ( IName * , void *pDataMdl, AliveWidgetID_e wId);  \
    boolean     (*IsBackgroundMusicPlay)        ( IName * , boolean *pbIsMediaPlayer);  \
    MAE_Ret     (*GetNextState)     ( IName * , AliveWidgetID_e wId, AliveWidget_State_e currState, AliveWidget_InputEvent_e inputEvent, AliveWidget_State_e *pNextState);  \
    MAE_Ret     (*GetBehavior)      ( IName * , AliveWidgetID_e wId, AliveWidget_State_e currState, AliveWidget_Behavior_t *pBehavior);  \
    MAE_Ret     (*UpdateStatus)     ( IName * , AliveWidgetID_e wId, IDataModel *pDataMdl, AliveWidgetSrvInfo_t *pInfo);  \
    MAE_Ret     (*RestoreStatus)        ( IName * , AliveWidgetID_e wId, IDataModel *pDataMdl, AliveWidgetSrvInfo_t *pInfo);  \
    MAE_Ret     (*GetInitState)     ( IName * , AliveWidgetID_e wId, AliveWidget_Init_State_Info_t *pInitStateInfo);  \
    AliveWidget_Priority_Compare_Result_e       (*CompareStatePriority)     ( IName * , AliveWidget_State_e eNewState, AliveWidget_State_e eCurrentState);  \
    boolean     (*IsCountDownTimerExist)        ( IName * );  \
    void        (*SetNotify)        ( IName * , AliveWidget_InputEvent_e eInputEvent);  \
    boolean     (*IsPetExist)       ( IName * );  \
    void        (*SetPetExist)      ( IName * , boolean bExist);  \
    boolean     (*IsIdleApActive)       ( IName * );  \
    void        (*SetIdleApActive)      ( IName * , boolean bActive);  \
    boolean     (*IsAliveWidgetCanBeFocused)        ( IName * , AliveWidgetID_e wId);  \
    AliveWidget_State_e     (*GetNextSamePriorityState)     ( IName * , AliveWidgetID_e wId, AliveWidget_State_e eCurrState);  \
    boolean     (*IsIncomingCallExisted)        ( IName * );  \
    AliveWidget_BG_Play_e       (*GetLastBGPlayAP)      ( IName * )

DEFINE_INTERFACE(IALIVEWDGSRV);


#define IALIVEWDGSRV_QueryInterface(pICntlr, id, pp, po)            GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->QueryInterface(pICntlr, id, pp, po)
#define IALIVEWDGSRV_HandleEvent(pICntlr, e, p1, p2)                GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->HandleEvent(pICntlr, e, p1, p2)
/**
 mmi_AliveWdgSrv_Register
@brief   The interface is provided AliveWdg to listen data model

@param[in]  pIALIVEWDGSRV   Pointer to the pICCSRV interface
@param[in]  instance                 Object pointer to the APP
@param[in]  wId                       ID of AliveWidget (Dog or Clock)
@param[out]  ppDataMdl           Interface will return data model. One model for one singleton type, multiple models for non-singleton type

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_FAILED              If an error happen. 
            
 */
#define IALIVEWDGSRV_Register(pICntlr, p1, p2, p3)  GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->Register( pICntlr, p1, p2, p3)
/**
 mmi_AliveWdgSrv_Deregister
@brief   The interface is provided AliveWdg to de-register data model

@param[in]  pIALIVEWDGSRV  Pointer to the pIAliveWdgSrv interface
@param[in]  pDataMdl              Necessary for Non-Singletone widget
@param[in]  wId                       ID of AliveWidget (Dog or Clock)

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_FAILED              If an error happen. 
            
 */
#define IALIVEWDGSRV_Deregister(pICntlr, p1, p2)    GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->Deregister( pICntlr, p1, p2)
/**
 mmi_AliveWdgSrv_IsBackgroundMusicPlay
@brief   The interface is provided to query FM radio or MPlayer is played

@param[in]  pIALIVEWDGSRV    Pointer to the pIAliveWdgSrv interface

@return TRUE           If FM radio or Mpalyer is played in background
@return FALSE         FM radio and Mplayer is not played in background
            
 */
#define IALIVEWDGSRV_IsBackgroundMusicPlay(pICntlr, p1) GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->IsBackgroundMusicPlay( pICntlr, p1)
/**
 mmi_AliveWdgSrv_GetNextState
@brief   The interface is provided AliveWdg to get next state

@param[in]  pIALIVEWDGSRV  Pointer to the pIAliveWdgSrv interface
@param[in]  wId                       ID of AliveWidget (Dog or Clock)
@param[in]  currState                The state of current widget (EX: Sleep of Dog)
@param[in]  inputEvent             Input event to change current state
@param[out]  pNextState           Return the next state of current widget

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If input paramter error.
@return MAE_RET_FAILED              If an error happen. 
@return MAE_RET_NOT_FOUND    If the state or table is not found. 
            
 */
#define IALIVEWDGSRV_GetNextState(pICntlr, p1, p2, p3, p4)  GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->GetNextState( pICntlr, p1, p2, p3, p4)
/**
 mmi_AliveWdgSrv_GetBehavior
@brief   The interface is provided AliveWdg to get state behavior

@param[in]  pIALIVEWDGSRV  Pointer to the pIAliveWdgSrv interface
@param[in]  wId                       ID of AliveWidget (Dog or Clock)
@param[in]  currState                The state of current widget (EX: Sleep of Dog)
@param[out]  pBehavior           Return the behavior description of given state

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If input paramter error.
@return MAE_RET_FAILED              If an error happen. 
@return MAE_RET_NOT_FOUND    If the behavior is not found.          
 */
#define IALIVEWDGSRV_GetBehavior(pICntlr, p1, p2, p3)   GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->GetBehavior( pICntlr, p1, p2, p3)
/**
 mmi_AliveWdgSrv_UpdateStatus
@brief   The interface is provided AliveWdg to keep information

@param[in]  pIALIVEWDGSRV  Pointer to the pIAliveWdgSrv interface
@param[in]  wId                       ID of AliveWidget (Dog or Clock)
@param[in]  pDataMdl              Necessary for Non-Singletone widget
@param[in]  pInfo                   Data to be stored

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If input paramter error.
@return MAE_RET_FAILED              If an error happen.             
 */
#define IALIVEWDGSRV_UpdateStatus(pICntlr, p1, p2, p3)  GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->UpdateStatus( pICntlr, p1, p2, p3)
/**
 mmi_AliveWdgSrv_Restore
@brief   The interface is provided AliveWdg to retrieve previous information

@param[in]  pIALIVEWDGSRV  Pointer to the pIAliveWdgSrv interface
@param[in]  wId                       ID of AliveWidget (Dog or Clock)
@param[in]  pDataMdl              Necessary for Non-Singletone widget
@param[out] pInfo                    Data pointer to return

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If input paramter error.
@return MAE_RET_FAILED              If an error happen.             
 */
#define IALIVEWDGSRV_RestoreStatus(pICntlr, p1, p2, p3) GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->RestoreStatus( pICntlr, p1, p2, p3)
/**
 mmi_AliveWdgSrv_GetInitState
@brief   The interface is provided AliveWdg to get init state and position information

@param[in]  pIALIVEWDGSRV  Pointer to the pIAliveWdgSrv interface
@param[in]  wId                       ID of AliveWidget (Dog or Clock)
@param[out] pInitStateInfo       Data pointer to return

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If input paramter error.
@return MAE_RET_NOT_FOUND    If not found.          
 */
#define IALIVEWDGSRV_GetInitState(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->GetInitState( pICntlr, p1, p2)
/**
 mmi_AliveWdgSrv_CompareStatePriority
@brief   The interface is provided AliveWdg to compare the priority between two states

@param[in]  pIALIVEWDGSRV  Pointer to the pIAliveWdgSrv interface
@param[in]  eNewState                 New state
@param[in]  eCurrentState             Current state

@retrun AliveWidget_Priority_Compare_Result_CanNotCompare can not compare these two states
@return AliveWidget_Priority_Compare_Result_Lower           eNewState's priority is lower than eCurrentState's
@return AliveWidget_Priority_Compare_Result_Equal            eNewState's priority is the same as eCurrentState's
@return AliveWidget_Priority_Compare_Result_Higher           eNewState's priority is higher than eCurrentState's            
 */
#define IALIVEWDGSRV_CompareStatePriority(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->CompareStatePriority( pICntlr, p1, p2)
/**
 mmi_AliveWdgSrv_IsCountDownTimerExist
@brief   The interface is provided to query count down timer exist

@param[in]  pIALIVEWDGSRV    Pointer to the pIAliveWdgSrv interface

@return TRUE          Count down timer exist.
@return FALSE         There is no count down timer.
            
 */
#define IALIVEWDGSRV_IsCountDownTimerExist(pICntlr) GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->IsCountDownTimerExist( pICntlr)
/**
 mmi_AliveWdgSrv_SetNotify
@brief   The interface is provided to other AP or service to set notify like missed SMS or low battery to AliveWdgSrv

@param[in]  eInputEvent    Input event type         
 */
#define IALIVEWDGSRV_SetNotify(pICntlr, p1) GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->SetNotify( pICntlr, p1)

/**
 mmi_AliveWdgSrv_IsPetExist
@brief   The interface is provided to query if Pet exist or not

@return TRUE    Pet exist
@return FALSE   Pet doesn't exist
 */
#define IALIVEWDGSRV_IsPetExist(pICntlr)    GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->IsPetExist( pICntlr)

/**
 mmi_AliveWdgSrv_SetPetExist
@brief   The interface is provided to set Pet exist status

@param[in]  bActive    TRUE for exist; FALSE for inexist
 */
#define IALIVEWDGSRV_SetPetExist(pICntlr, p1)   GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->SetPetExist( pICntlr, p1)

/**
 mmi_AliveWdgSrv_IsIdleApActive
@brief   The interface is provided to query if Idle Ap is active or not

@return TRUE    Idle Ap is active
@return FALSE   Idle Ap is inactive         
 */
#define IALIVEWDGSRV_IsIdleApActive(pICntlr)    GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->IsIdleApActive( pICntlr)
/**
 mmi_AliveWdgSrv_SetIdleApActive
@brief   The interface is provided to Idle AP to set its status.

@param[in]  bActive    TRUE for active; FALSE for inactive          
 */
#define IALIVEWDGSRV_SetIdleApActive(pICntlr, p1)   GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->SetIdleApActive( pICntlr, p1)
/**
 mmi_AliveWdgSrv_IsAliveWidgetCanBeFocused
@brief   The interface is provided to query count down timer exist

@param[in]  wId    ID of AliveWidget (Dog or Clock)

@return TRUE          Can be focused
@return FALSE         Can not be focused
            
 */
#define IALIVEWDGSRV_IsAliveWidgetCanBeFocused(pICntlr, p1) GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->IsAliveWidgetCanBeFocused( pICntlr, p1)
/**
 mmi_AliveWdgSrv_GetNextSamePriorityState
@brief   The interface is provided to get next same prioroty state

@param[in]  wId    ID of AliveWidget (Dog or Clock)
@prarm[in]   eCurrState    current state

@return  state for next priority            
 */
#define IALIVEWDGSRV_GetNextSamePriorityState(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->GetNextSamePriorityState( pICntlr, p1, p2)
/**
 mmi_AliveWdgSrv_IsIncomingCallExisted
@brief   The interface is provided to query Incoming call existed or not

@param[in]  pIALIVEWDGSRV    Pointer to the pIAliveWdgSrv interface

@return TRUE           If Incoming call existed
@return FALSE         If Incoming call is not existed
            
 */
#define IALIVEWDGSRV_IsIncomingCallExisted(pICntlr) GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->IsIncomingCallExisted( pICntlr)
/**
 Get last BG play AP            
 */
#define IALIVEWDGSRV_GetLastBGPlayAP(pICntlr)   GET_FUNCTBL((pICntlr), IALIVEWDGSRV)->GetLastBGPlayAP( pICntlr)



/**
 * Functions
 */

void ALIVEWDGSRV_Init(void);

MAE_Ret ALIVEWDGSRV_New(MAE_ClsId id, void **ppObj);

#endif //__GADGETS_MMI__ || __3D_UI_IDLE_GADGETBAR__

/*-------------------------------------------------------------------------*/
#endif /* __MMI_ALIVEWDGSRV_H__ */
