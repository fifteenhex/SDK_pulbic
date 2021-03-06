/**
* @file mmi_btsrv.h
*
* State Machine Service - BTSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_BTSRV
*
*
* @version $Id$
*/
#ifndef __MMI_BTSRV_H__
#define __MMI_BTSRV_H__

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"
#include "mmi_btsrv_def.h"

/**
 * External Events
 */
#define BTSRV_EVT_PowerOnOffReq             (CLSID_BTSRV << 16 | 1)
#define BTSRV_EVT_PowerOnOffCnf             (CLSID_BTSRV << 16 | 2)
#define BTSRV_EVT_InquiryReq                (CLSID_BTSRV << 16 | 3)
#define BTSRV_EVT_InquiryInd                (CLSID_BTSRV << 16 | 4)
#define BTSRV_EVT_InquiryCnf                (CLSID_BTSRV << 16 | 5)
#define BTSRV_EVT_NameQueryCnf              (CLSID_BTSRV << 16 | 6)
#define BTSRV_EVT_DeleteDeviceReq           (CLSID_BTSRV << 16 | 7)
#define BTSRV_EVT_DeleteDeviceCnf           (CLSID_BTSRV << 16 | 8)
#define BTSRV_EVT_SetLocalNameReq           (CLSID_BTSRV << 16 | 9)
#define BTSRV_EVT_SetLocalNameCnf           (CLSID_BTSRV << 16 | 10)
#define BTSRV_EVT_SetDiscoveryReq           (CLSID_BTSRV << 16 | 11)
#define BTSRV_EVT_SetDiscoveryCnf           (CLSID_BTSRV << 16 | 12)
#define BTSRV_EVT_PairReq                   (CLSID_BTSRV << 16 | 13)
#define BTSRV_EVT_PinCodeInd                (CLSID_BTSRV << 16 | 14)
#define BTSRV_EVT_PairDoneInd               (CLSID_BTSRV << 16 | 15)
#define BTSRV_EVT_AudioLinkStatusChanged    (CLSID_BTSRV << 16 | 16)        ///BTSRV_MASK_Audio_Link
#define BTSRV_EVT_AudioLinkCnf              (CLSID_BTSRV << 16 | 17)        ///BTSRV_MASK_Audio_Link
#define BTSRV_EVT_AudioLinkInd              (CLSID_BTSRV << 16 | 18)        ///BTSRV_MASK_Audio_Link
#define BTSRV_EVT_AudioCallReq              (CLSID_BTSRV << 16 | 19)        ///BTSRV_MASK_Audio_Call
#define BTSRV_EVT_AudioCallInd              (CLSID_BTSRV << 16 | 20)        ///BTSRV_MASK_Audio_Call
#define BTSRV_EVT_AudioCallCnf              (CLSID_BTSRV << 16 | 21)        ///BTSRV_MASK_Audio_Call
#define BTSRV_EVT_AudioCallPktTypeInd       (CLSID_BTSRV << 16 | 22)

#define BTSRV_EVT_ATA                       (CLSID_BTSRV << 16 | 23)        ///BTSRV_MASK_Audio_Call
#define BTSRV_EVT_ATD                       (CLSID_BTSRV << 16 | 24)        ///BTSRV_MASK_Audio_Call
#define BTSRV_EVT_ATCHUP                    (CLSID_BTSRV << 16 | 25)        ///BTSRV_MASK_Audio_Call
#define BTSRV_EVT_ATCHLD                    (CLSID_BTSRV << 16 | 26)        ///BTSRV_MASK_Audio_Call
#define BTSRV_EVT_AudioVolumeInd            (CLSID_BTSRV << 16 | 27)        ///BTSRV_MASK_Audio_Call
#define BTSRV_EVT_RecvFileInd               (CLSID_BTSRV << 16 | 28)        ///BTSRV_MASK_TRANS_STATUS
#define BTSRV_EVT_ImportFileInd             (CLSID_BTSRV << 16 | 29)        ///BTSRV_MASK_TRANS_STATUS
#define BTSRV_EVT_SendFileInd               (CLSID_BTSRV << 16 | 30)        ///BTSRV_MASK_TRANS_STATUS
#define BTSRV_EVT_TransProgressInd          (CLSID_BTSRV << 16 | 31)        ///BTSRV_MASK_TRANS_PROGRESS
#define BTSRV_EVT_ChipResetInd              (CLSID_BTSRV << 16 | 32)
#define BTSRV_EVT_Ready                     (CLSID_BTSRV << 16 | 33)
#define BTSRV_EVT_PhonePowerOffCnf          (CLSID_BTSRV << 16 | 34)
#define BTSRV_EVT_TransInteractiveInd       (CLSID_BTSRV << 16 | 35)        ///BTSRV_MASK_TRANS_INTERACTIVE
#define BTSRV_EVT_A2dpStatusInd             (CLSID_BTSRV << 16 | 36)        ///BTSRV_MASK_A2DP_STATUS
#define BTSRV_EVT_AvrcpCmdReq               (CLSID_BTSRV << 16 | 37)
#define BTSRV_EVT_AvrcpCmdCnf               (CLSID_BTSRV << 16 | 38)
#define BTSRV_EVT_SDPSerivecnf              (CLSID_BTSRV << 16 | 39)
#define BTSRV_EVT_A2dpLinkcnf               (CLSID_BTSRV << 16 | 40)        ///BTSRV_MASK_A2DP_STATUS
#define BTSRV_EVT_RecvReqInd                (CLSID_BTSRV << 16 | 41)        ///BTSRV_MASK_TRANS_STATUS
#define BTSRV_EVT_PairReqInd                (CLSID_BTSRV << 16 | 42)
#define BTSRV_EVT_AudioLinkConnInd          (CLSID_BTSRV << 16 | 43)        ///BTSRV_MASK_Audio_Link
#define BTSRV_EVT_ACLModeChangeInd          (CLSID_BTSRV << 16 | 44)        ///

/**
 * IBTSRV Interfaces
 */
#define INHERIT_IBTSRV(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret                 (*RegisterNotification)         ( IName * , void *pInstance, BTSRV_NOTIFY_MASK_e eMask);  \
    MAE_Ret                 (*DeRegisterNotification)       ( IName * , void *pInstance, BTSRV_NOTIFY_MASK_e eMask);  \
    MAE_Ret                 (*PowerOnOffReq)                ( IName * , BTSRV_PowerAction_e eAction, BTSRV_POWER_ONOFF_CAUSE_e eCause);  \
    MAE_Ret                 (*InquiryReq)                   ( IName * , BTSRV_InquiryAction_e eAction);  \
    MAE_Ret                 (*PairReq)                      ( IName * , BTSRV_DevInfo_t* pDev, BTSRV_ACLLinkAction_e eAction);  \
    MAE_Ret                 (*PinCodeRsp)                   ( IName * , MAE_WChar* pPinCode);  \
    MAE_Ret                 (*DeleteDeviceReq)              ( IName * , u8 u8DevIdx);  \
    MAE_Ret                 (*SetLocalNameReq)              ( IName * , MAE_WChar* pName);  \
    MAE_Ret                 (*SetDiscoveryReq)              ( IName * , BTSRV_Discoverable_e eDiscoverable);  \
    MAE_Ret                 (*AudioLinkReq)                 ( IName * , BTSRV_AudioLink_e eLink, u8 u8DevIdx);  \
    MAE_Ret                 (*AudioLinkReqByProfile)        ( IName * , BTSRV_AudioDevLinkAction_e eLink, u8 u8DevIdx, BTSRV_PROFILE_e eProfile);  \
    MAE_Ret                 (*AudioCallReq)                 ( IName * , BTSRV_AudioCallType_e eCall);  \
    BTSRV_Mode_e            (*GetActiveMode)                ( IName * );  \
    BTSRV_AudioPacketType_e (*GetAudioPacketType)           ( IName * );  \
    u8                      (*GetPairDeviceNum)             ( IName * );  \
    BTSRV_DevInfo_t *       (*GetPairDeviceInfo)            ( IName * , u8 u8DevIdx);  \
    BTSRV_PowerAction_e     (*GetPowerOnOffStataus)         ( IName * );  \
    MAE_WChar *             (*GetLocalName)                 ( IName * );  \
    BTSRV_Discoverable_e    (*GetDiscoveryStatus)           ( IName * );  \
    BTSRV_AudioLink_e       (*GetAudioStatus)               ( IName * );  \
    boolean                 (*IsA2DPActive)                 ( IName * );  \
    MAE_Ret                 (*SetPairDeviceInfo)            ( IName * , u8 u8DevIdx, BTSRV_DevInfo_t *pInfo);  \
    MAE_Ret                 (*AudioRingStart)               ( IName * );  \
    MAE_Ret                 (*AudioRingStop)                ( IName * );  \
    u8                      (*GetPairListIndexByAddr)       ( IName * , u8 *pu8DevAddr);  \
    MAE_Ret                 (*AudioMuteReq)                 ( IName * , BTSRV_AudioMuteType_e eMute);  \
    MAE_Ret                 (*AudioCallStatus)              ( IName * , BTSRV_AudioCallStatus_e eStatus, u8* pCallerID, u8 u8Type);  \
    MAE_Ret                 (*AudioVolumeReq)               ( IName * , AudioSrvToneVolLevel_e eVolume);  \
    boolean                 (*IsOPPActive)                  ( IName * );  \
    void                    (*SetRecvFileInteractiveMode)   ( IName * , boolean bIsActive );  \
    void                    (*InteractiveRecvFileRsp)       ( IName * , boolean bIsActive);  \
    void                    (*Start)                        ( IName * );  \
    MAE_WChar *             (*GetReceiveFolder)             ( IName * );  \
    MAE_Ret                 (*SetReceiveFolderReq)          ( IName * , MAE_WChar* pwFolderPath);  \
    u32                     (*GetBTStatus)                  ( IName * );  \
    MAE_Ret                 (*GetBtHeadsetStatus)           ( IName * , BTSRV_HeadsetStatus_e *peHeadsetStatus);  \
    MAE_Ret                 (*RegAvcrpListener)             ( IName * , BTSRV_AvrcpRegType_e eAvrcpRegType, IHandler *pListener);  \
    MAE_Ret                 (*DeRegAvcrpListener)           ( IName * , BTSRV_AvrcpRegType_e eAvrcpRegType, IHandler *pListener);  \
    MAE_Ret                 (*AvrcpCmdCnf)                  ( IName * , BTSRV_AvrcpActionType_e eAvrcpActionType, boolean bIsSuccess, IHandler *pListener);  \
    MAE_Ret                 (*AudioRingStartWithCallerID)   ( IName * , u8 *pCallerID)


DEFINE_INTERFACE(IBTSRV);


/**

 */
#define IBTSRV_QueryInterface(pICntlr, id, pp, po)          GET_FUNCTBL((pICntlr), IBTSRV)->QueryInterface(pICntlr, id, pp, po)
/**

 */
#define IBTSRV_HandleEvent(pICntlr, e, p1, p2)              GET_FUNCTBL((pICntlr), IBTSRV)->HandleEvent(pICntlr, e, p1, p2)
/**

 */
#define IBTSRV_RegisterNotification(pICntlr, p1, p2)        GET_FUNCTBL((pICntlr), IBTSRV)->RegisterNotification( pICntlr, p1, p2)
/**

 */
#define IBTSRV_DeRegisterNotification(pICntlr, p1, p2)      GET_FUNCTBL((pICntlr), IBTSRV)->DeRegisterNotification( pICntlr, p1, p2)
/**

 */
#define IBTSRV_PowerOnOffReq(pICntlr, p1, p2)               GET_FUNCTBL((pICntlr), IBTSRV)->PowerOnOffReq( pICntlr, p1, p2)
/**

 */
#define IBTSRV_InquiryReq(pICntlr, p1)                      GET_FUNCTBL((pICntlr), IBTSRV)->InquiryReq( pICntlr, p1)
/**

 */
#define IBTSRV_PairReq(pICntlr, p1, p2)                     GET_FUNCTBL((pICntlr), IBTSRV)->PairReq( pICntlr, p1, p2)
/**

 */
#define IBTSRV_PinCodeRsp(pICntlr, p1)                      GET_FUNCTBL((pICntlr), IBTSRV)->PinCodeRsp( pICntlr, p1)
/**

 */
#define IBTSRV_DeleteDeviceReq(pICntlr, p1)                 GET_FUNCTBL((pICntlr), IBTSRV)->DeleteDeviceReq( pICntlr, p1)
/**

 */
#define IBTSRV_SetLocalNameReq(pICntlr, p1)                 GET_FUNCTBL((pICntlr), IBTSRV)->SetLocalNameReq( pICntlr, p1)
/**

 */
#define IBTSRV_SetDiscoveryReq(pICntlr, p1)                 GET_FUNCTBL((pICntlr), IBTSRV)->SetDiscoveryReq( pICntlr, p1)
/**

 */
#define IBTSRV_AudioLinkReq(pICntlr, p1, p2)                GET_FUNCTBL((pICntlr), IBTSRV)->AudioLinkReq( pICntlr, p1, p2)
/**

 */
#define IBTSRV_AudioLinkReqByProfile(pICntlr, p1, p2, p3)   GET_FUNCTBL((pICntlr), IBTSRV)->AudioLinkReqByProfile( pICntlr, p1, p2, p3)
/**

 */
#define IBTSRV_AudioCallReq(pICntlr, p1)                    GET_FUNCTBL((pICntlr), IBTSRV)->AudioCallReq( pICntlr, p1)
/**

 */
#define IBTSRV_GetActiveMode(pICntlr)                       GET_FUNCTBL((pICntlr), IBTSRV)->GetActiveMode( pICntlr)
/**

 */
#define IBTSRV_GetAudioPacketType(pICntlr)                  GET_FUNCTBL((pICntlr), IBTSRV)->GetAudioPacketType( pICntlr)
/**

 */
#define IBTSRV_GetPairDeviceNum(pICntlr)                    GET_FUNCTBL((pICntlr), IBTSRV)->GetPairDeviceNum( pICntlr)
/**

 */
#define IBTSRV_GetPairDeviceInfo(pICntlr, p1)               GET_FUNCTBL((pICntlr), IBTSRV)->GetPairDeviceInfo( pICntlr, p1)
/**

 */
#define IBTSRV_GetPowerOnOffStataus(pICntlr)                GET_FUNCTBL((pICntlr), IBTSRV)->GetPowerOnOffStataus( pICntlr)
/**

 */
#define IBTSRV_GetLocalName(pICntlr)                        GET_FUNCTBL((pICntlr), IBTSRV)->GetLocalName( pICntlr)
/**

 */
#define IBTSRV_GetDiscoveryStatus(pICntlr)                  GET_FUNCTBL((pICntlr), IBTSRV)->GetDiscoveryStatus( pICntlr)
/**

 */
#define IBTSRV_GetAudioStatus(pICntlr)                      GET_FUNCTBL((pICntlr), IBTSRV)->GetAudioStatus( pICntlr)
/**

 */
#define IBTSRV_IsA2DPActive(pICntlr)                        GET_FUNCTBL((pICntlr), IBTSRV)->IsA2DPActive( pICntlr)
/**

 */
#define IBTSRV_SetPairDeviceInfo(pICntlr, p1, p2)           GET_FUNCTBL((pICntlr), IBTSRV)->SetPairDeviceInfo( pICntlr, p1, p2)
/**

 */
#define IBTSRV_AudioRingStart(pICntlr)                      GET_FUNCTBL((pICntlr), IBTSRV)->AudioRingStart( pICntlr)
/**

 */
#define IBTSRV_AudioRingStop(pICntlr)                       GET_FUNCTBL((pICntlr), IBTSRV)->AudioRingStop( pICntlr)
/**

 */
#define IBTSRV_GetPairListIndexByAddr(pICntlr, p1)          GET_FUNCTBL((pICntlr), IBTSRV)->GetPairListIndexByAddr( pICntlr, p1)
/**

 */
#define IBTSRV_AudioMuteReq(pICntlr, p1)                    GET_FUNCTBL((pICntlr), IBTSRV)->AudioMuteReq( pICntlr, p1)
/**

 */
#define IBTSRV_AudioCallStatus(pICntlr, p1, p2, p3)         GET_FUNCTBL((pICntlr), IBTSRV)->AudioCallStatus( pICntlr, p1, p2, p3)
/**

 */
#define IBTSRV_AudioVolumeReq(pICntlr, p1)                  GET_FUNCTBL((pICntlr), IBTSRV)->AudioVolumeReq( pICntlr, p1)
/**

 */
#define IBTSRV_IsOPPActive(pICntlr)                         GET_FUNCTBL((pICntlr), IBTSRV)->IsOPPActive( pICntlr)
/**

 */
#define IBTSRV_SetRecvFileInteractiveMode(pICntlr, p1)      GET_FUNCTBL((pICntlr), IBTSRV)->SetRecvFileInteractiveMode( pICntlr, p1)
/**

 */
#define IBTSRV_InteractiveRecvFileRsp(pICntlr, p1)          GET_FUNCTBL((pICntlr), IBTSRV)->InteractiveRecvFileRsp( pICntlr, p1)
/**

 */
#define IBTSRV_Start(pICntlr)                               GET_FUNCTBL((pICntlr), IBTSRV)->Start( pICntlr)
/**

 */
#define IBTSRV_GetReceiveFolder(pICntlr)                    GET_FUNCTBL((pICntlr), IBTSRV)->GetReceiveFolder( pICntlr)
/**

 */
#define IBTSRV_SetReceiveFolderReq(pICntlr, p1)             GET_FUNCTBL((pICntlr), IBTSRV)->SetReceiveFolderReq( pICntlr, p1)
/**

 */
#define IBTSRV_GetBTStatus(pICntlr)                         GET_FUNCTBL((pICntlr), IBTSRV)->GetBTStatus( pICntlr)
/**

 */
#define IBTSRV_GetBtHeadsetStatus(pICntlr, p1)              GET_FUNCTBL((pICntlr), IBTSRV)->GetBtHeadsetStatus( pICntlr, p1)
/**

 */
#define IBTSRV_RegAvcrpListener(pICntlr, p1, p2)            GET_FUNCTBL((pICntlr), IBTSRV)->RegAvcrpListener( pICntlr, p1, p2)
/**

 */
#define IBTSRV_DeRegAvcrpListener(pICntlr, p1, p2)          GET_FUNCTBL((pICntlr), IBTSRV)->DeRegAvcrpListener( pICntlr, p1, p2)
/**

 */
#define IBTSRV_AvrcpCmdCnf(pICntlr, p1, p2, p3)             GET_FUNCTBL((pICntlr), IBTSRV)->AvrcpCmdCnf( pICntlr, p1, p2, p3)
/**

 */
#define IBTSRV_AudioRingStartWithCallerID(pICntlr, p1)      GET_FUNCTBL((pICntlr), IBTSRV)->AudioRingStartWithCallerID( pICntlr, p1)


/**
 * Functions
 */

void BTSRV_Init(void);

__SLDPM_FREE__ MAE_Ret BTSRV_New(MAE_ClsId id, void **ppObj);

void    mmi_bt_GetPairedListDataByIndex(u8 u8DevIdx, u8 *puBtAddr, u8 *puLinkKey, u8 *puTrusted, u8 *puKeyType, u8 *puInUsed);

MAE_Ret mmi_BTSRV_IsBusy(IBTSRV *pBtSrv);
void    mmi_BTSRV_PhonePowerOffReq(IBTSRV *pBtSrv);
boolean mmi_BTSRV_IsSearching(IBTSRV *pBtSrv);
boolean mmi_BTSRV_IsConnectDevice(IBTSRV *pBtSrv);
boolean mmi_BTSRV_IsUsed(IBTSRV *pBtSrv, u8 *pAddr);

/*Add to function table later*/
#ifdef __BLUETOOTH_OBEX_MMI__
boolean mmi_BTSRV_IsReceivingFile(IBTSRV *pBtSrv);
boolean mmi_BTSRV_IsSendingFile(IBTSRV *pBtSrv);
void    mmi_BTSRV_AbortTransFile(IBTSRV *pBtSrv);
void    mmi_BTSRV_DisconObexLink(IBTSRV *pBtSrv);
MAE_Ret mmi_BTSRV_SendFileReq(IBTSRV *pBtSrv, u8 *pAddr, MAE_WChar *pwFileName);
#endif

#ifdef __BLUETOOTH_A2DP_MMI__
#ifdef __BLUETOOTH_AVRCP_MMI__
MAE_Ret mmi_BTSRV_RegAvcrpListener(IBTSRV *pBtSrv, BTSRV_AvrcpRegType_e eAvrcpRegType, IHandler *pListener);
MAE_Ret mmi_BTSRV_DeRegAvcrpListener(IBTSRV *pBtSrv, BTSRV_AvrcpRegType_e eAvrcpRegType, IHandler *pListener);
MAE_Ret mmi_BTSRV_AvrcpCmdCnf(IBTSRV *pBtSrv, BTSRV_AvrcpActionType_e eAvrcpActionType, boolean bIsSuccess, IHandler *pListener);
#endif // __BLUETOOTH_AVRCP_MMI__
#endif // __BLUETOOTH_A2DP_MMI__

#endif /* __MMI_BTSRV_H__ */
