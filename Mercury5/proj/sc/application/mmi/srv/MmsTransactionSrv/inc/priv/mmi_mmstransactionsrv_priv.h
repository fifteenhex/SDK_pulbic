/**
* @file mmi_mmstranssrv_priv.h
*
* Service without using State Machine - MMSTRANSSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_MMSTRANSSRV
* Interface Id: IID_MMSTRANSSRV
*
* @version $Id$
*/
#ifndef __MMI_MMSTRANSACTIONSRV_PRIV_H__
#define __MMI_MMSTRANSACTIONSRV_PRIV_H__

#include "mmi_mae_common_def.h"
#include "mmi_mmstransactionsrv.h"
#include "mmi_messagemanagersrv.h"
#include "mmi_vendorsrv.h"
#include "mmi_cfgsrv.h"
#include "mmi_mae_filemgr.h"
#include "mmi_common_storage_mgr.h"
#define MMS_RECIPIENTADDR_LEN 20*2
#define MMS_CNTMEMO_LEN 10

enum
{
    MMSTRANSSRV_TRANS_UNKNOWN = 0
   ,MMSTRANSSRV_TRANS_SEND
   ,MMSTRANSSRV_TRANS_RECV
} ;
typedef u8 MMSTRANSSRV_MmsTransStatus_e;

/**
 * Application structure
 */
typedef struct MMI_MMSTRANSSRV_TAG
{
    DECLARE_FUNCTBL(IMMSTRANSSRV);
    u32 refCnt;
    IVectorModel *pIEvtSaveMmsModel;                    /* Record the SaveMms event message ids */
    IVectorModel *pIEvtSendMmsByBoxModel;               /* Record the SendMmsByBox event message ids */
    IVectorModel *pIEvtGetMmsReceiverListModel;         /* Record the GetMmsReceiverList event message ids */
    IVectorModel *pIEvtGetMmsSenderAddrModel;           /* Record the GetMmsReceiverList event message ids */
    IVectorModel *pIEvtGetMmsHdrInfoModel;              /* Record the GetMmsHdrInfo event message ids */
    IVectorModel *pIEvtGetMmsItemInfoModel;             /* Record the GetMmsItemInfo event message ids */
    IVectorModel *pIEvtGetMmsSubjectInfoModel;          /* Record the GetMmsSubjectInfo event message ids */
    IVectorModel *pIEvtGetMmsStatusInfoModel;           /* Record the GetMmsStatusInfo event message ids */
    IVectorModel *pIEvtGetMmsAllSlidesModel;            /* Record the GetMmsAllSlides event message ids */
    IVectorModel *pIEvtMmsTransCancelModel;             /* Record the TransCancel event message ids */
    IVectorModel *pIEvtRecvMmsBodyModel;                /* Record the RecvMmsBody event message ids */
    IVectorModel *pIEvtDelMmsByIdModel;                 /* Record the DelMmsById event message ids */
    IVectorModel *pIEvtDelMmsByboxModel;                /* Record the DelMmsBybox event message ids */
    IVectorModel *pIEvtGetMmsAllAttachModel;            /* Record the GetMmsAllAttach event message ids */
    IVectorModel *pIEvtRetrvCdMmsModel;                 /* Record the RetrvCdMms event message ids */
    IVectorModel *pIEvtSendNotiRespModel;               /* Record the SendNotiResp event message ids */
#ifdef __MMS_READ_REPORT__
    IVectorModel *pIEvtSendReadReplyModel;              /* Record the SendReadReply event message ids */
#endif
    IVectorModel *pIEvtMoveMmsModel;                    /* Record the MoveMms event message ids */
    IVectorModel *pIEvtMmsBootUpModel;                  /* Record the BootUp event message ids */
#ifdef __MMS_MMI_CDMMS_STORAGE_SWITCH__
	IVectorModel* pIEvtGetMmsRawItemModel;				/* Record the GetMmsRawItem event message ids */
	IVectorModel* pIEvtSaveMmsRawItemModel;				/* Record the SaveMmsRawItem event message ids */
#endif
    MAE_Notifier_t *pNotifier;     /* to notify I'm ready */
    MMI_MmsFs_headInfo *pMmsFsHeadInfo;

    u8 recipAddr[SMI_MAX_ADDR_LEN*2 + 1];
    u16 mmsSubject[MMI_MMS_MAX_SUBJECT_CHAR + 1];
    u8 mmsToAddr[MMI_MMS_MAX_RECEIVE_LIST+1];
    u8 mmsCcAddr[MMI_MMS_MAX_RECEIVE_LIST+1];
    u8 mmsBccAddr[MMI_MMS_MAX_RECEIVE_LIST+1];
    u32 mmsContentSize;
    ISMI *pISMI;
    IVENDORSRV *pIVendorSrv;
	ICFGSrv *pCFGSRV;
	ModelListener_t CFGListener;
    u8 bTerminateState;
    u16 replaceMsgId;
    u16 nResendCnt;
	StorageInfo_t StorageInfo;
    MMI_RetrvCdMmsCnf_t *pRetrvCdMmsCnf;
    u16         RestoreCount;
    u16         RestoreTotalCount;
} MMI_MMSTRANSSRV;

typedef struct MMSTRANSSRV_DO_NOTIFY_DATA_TAG
{
    u32 NotifyMask;
    MAE_EventId NotifyEvent;
    u32 Param1;                     //param1 with the Notify Event
    u32 Param2;    //param2 with the Notify Event
    PfnEventCleanup pCleanFnc;      //The clean function for update vector model
}MMSTRANSSRV_DoNotify_Data_t;

typedef struct TXI_NOTIFY_INFO_TAG
{
    void *pinst;
    u32 id;
    u32 mmsIndex;
    u8 mailBox;
}MMSTRANSSRV_NotifyInfo_t;

static void mmi_MMSTRANSSRV_SaveMmsCnf(MMI_MMSTRANSSRV *pThis, MMI_SaveMmsCnf_t *pSaveMmsCnf);
static void mmi_MMSTRANSSRV_GetMmsReceiverListCnf(MMI_MMSTRANSSRV *pThis, MMI_GetMmsReceiverListCnf_t *pMmsGetRecvLstCnf);
static void mmi_MMSTRANSSRV_GetMmsSenderAddrCnf(MMI_MMSTRANSSRV *pThis, MMI_GetMmsSenderAddrCnf_t *pMmsGetSenderAddrCnf);
static void mmi_MMSTRANSSRV_GetMmsItemInfoCnf(MMI_MMSTRANSSRV *pThis, MMI_GetMmsItemInfoCnf_t *pMmsGetItemInfoCnf);
static void mmi_MMSTRANSSRV_GetMmsSubjectInfoCnf(MMI_MMSTRANSSRV *pThis, MMI_GetMmsSubjectInfoCnf_t *pMmsGetSubjectInfoCnf);
static void mmi_MMSTRANSSRV_GetMmsStatusInfoCnf(MMI_MMSTRANSSRV *pThis, MMI_GetMmsStatusInfoCnf_t *pMmsStatusInfoCnf);
static void mmi_MMSTRANSSRV_GetMmsAllSlidesCnf(MMI_MMSTRANSSRV *pThis, MMI_GetMmsAllSlidesCnf_t *pGetMmsAllSlidesCnf);
static void mmi_MMSTRANSSRV_SendMmsByBoxCnf(MMI_MMSTRANSSRV *pThis, MMI_SendMmsByBoxCnf_t *pMmsSendByBoxCnf);
static void mmi_MMSTRANSSRV_RecvMmsBodyCnf(MMI_MMSTRANSSRV *pThis, MMI_RecvMmsBodyCnf_t *pMmsRecvBodyCnf);
static void mmi_MMSTRANSSRV_DelMmsByIdCnf(MMI_MMSTRANSSRV *pThis, MMI_DelMmsByIdCnf_t *pMmsDelByIdCnf);
static void mmi_MMSTRANSSRV_DelMmsByboxCnf(MMI_MMSTRANSSRV *pThis, MMI_DelMmsByBoxCnf_t *pMmsDelByBoxCnf);
static void mmi_MMSTRANSSRV_NewMmsNotifyCnf(MMI_MMSTRANSSRV *pThis, MMI_NewMmsNoteCnf_t *pMmsNewMmsNoteCnf);
static void mmi_MMSTRANSSRV_MmsTransCancelCnf(MMI_MMSTRANSSRV *pThis, MMI_TransCancelCnf_t *pMmsTransCancelCnf);
static void mmi_MMSTRANSSRV_RetrvCdMmsCnf(MMI_MMSTRANSSRV *pThis, MMI_RetrvCdMmsCnf_t *pRetrvCdMmsCnf);

void mmi_MMSTRANSSRV_DoNotifyResumeCB(IBase *pObj, u32 Param);
#ifdef __MMS_MMI_CDMMS__
static MAE_Ret mmi_MMSTRANSSRV_ContextSwitchDoNotify(MMI_MMSTRANSSRV *pThis, u32 NotifyMask, MAE_EventId NotifyEvent, u32 Param1, u32 Param2, PfnEventCleanup pCleanFnc);
#endif
static MAE_Ret MMSTRANSSRV_VectorModel_Add(IVectorModel **ppIVectorModel, void *pvItem, PfnModelFree FreeModelItem, MMI_MMSTRANSSRV *pThis);
static MAE_Ret MMSTRANSSRV_VectorModel_Delete(IVectorModel *pIVectorModel, u32 nIndex, void **pvItem);
static void MMSTRANSSRV_FreeModelItem(u32 *pData, IBase *pOwner);
static void MMSTRANSSRV_FreeCnfInfo(IBase *pOwner, u32 lParam, u32 dParam);
#ifdef __MMS_MMI_CDMMS__
static void MMSTRANSSRV_FreeNewMmsNoteCnfInfo(IBase *pOwner, u32 lParam, u32 dParam);
static void MMSTRANSSRV_FreeMmsAllAttachCnfInfo(IBase *pOwner, u32 lParam, u32 dParam);
#endif
__SLDPM_FREE__ static void MMSTRANSSRV_CFGSrvListener(MMI_MMSTRANSSRV *pThis, ModelEvent_t *pMdlEvt);
#ifdef __MMS_MMI_CDMMS__
static void MMSTRANSSRV_FreeMmsAllSlidesCnfInfo(IBase *pOwner, u32 lParam, u32 dParam);
#endif

static void mmi_MMSTRANSSRV_ReleaseObj(MMI_MMSTRANSSRV *pThis);
#ifdef __MMS_MMI_CDMMS__
static void mmi_MMSTRANSSRV_CleanTransCancelRequests( MMI_MMSTRANSSRV *pThis );
static void mmi_MMSTRANSSRV_HandleConfirmMessage( MMI_MMSTRANSSRV *pThis, IVectorModel **ppReqHolder, u32 nCnfEvt, void *pCnfMsg, u32 nExtParam, PfnEventCleanup pfnClean );
#endif
static void mmi_MMSTRANSSRV_GetMmsAllAttachCnf(MMI_MMSTRANSSRV *pThis, MMI_GetMmsAllAttachesCnf_t *pGetMmsAllAttachesCnf);
static MAE_Ret mmi_MMSTRANSSRV_GetMmsMailBox(SMI_MsgLocation_e msgLoc, MMI_MMS_FS_MAILBOX_e *pMsgBox);
static MAE_Ret mmi_MMSTRANSSRV_GetMsgLocation(MMI_MMS_FS_MAILBOX_e msgBox, SMI_MsgLocation_e *pMsgLoc);
static MAE_Ret mmi_MMSTRANSSRV_DelMmsById(MMI_MMSTRANSSRV *pThis);
static void mmi_MMSTRANSSRV_SendMmsNotiRespCnf(MMI_MMSTRANSSRV *pThis, MMI_SendNotiRespCnf_t *pSendNotiRespCnf);
#ifdef __MMS_READ_REPORT__
static void mmi_MMSTRANSSRV_SendMmsReadReplyCnf(MMI_MMSTRANSSRV *pThis, MMI_SendReadReplyCnf_t *pSendReadReplyCnf);
#endif
static void mmi_MMSTRANSSRV_MoveMmsCnf(IMMSTRANSSRV *pIMMSTRANSSRV, MMI_MoveMmsCnf_t *pMmsMoveMmsCnf);
static void mmi_MMSTRANSSRV_MmsBootUpCnf(MMI_MMSTRANSSRV *pThis, MMI_BootupMmsCnf_t *pMmsBootupCnf);
#ifdef __MMS_MMI_CDMMS_STORAGE_SWITCH__
static void mmi_MMSTRANSSRV_GetMmsRawItemCnf( MMI_MMSTRANSSRV *pThis, MMI_GetMmsRawItemCnf_t *pGetMmsRawItemCnf );
static void mmi_MMSTRANSSRV_SaveMmsRawItemCnf( MMI_MMSTRANSSRV *pThis, MMI_SaveMmsRawItemCnf_t *pSaveMmsRawItemCnf );
#endif
static void mmi_MMSTRANSSRV_RecvMmsBodyJSRCnf( MMI_MMSTRANSSRV *pThis, MMI_RecvMmsBodySDKCnf_t *pMmsRecvBodyJSRCnf );
#endif /* __MMI_MMSTRANSACTIONSRV_PRIV_H__ */
