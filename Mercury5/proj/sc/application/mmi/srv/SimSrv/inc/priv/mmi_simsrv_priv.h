/**
* @file mmi_simsrv_priv.h
*
* State Machine Service - SIMSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_SIMSRV
*
*
* @version $Id$
*/
#ifndef __MMI_SIMSRV_PRIV_H__
#define __MMI_SIMSRV_PRIV_H__

#include "mmi_mae_common_def.h"
#include "mmi_mae_sm_defs.h"
#include "mmi_simsrv.h"
#include "mmi_simsrv_sm.h"
#include "mmi_mae_vectormodel.h"
#include "api_mrl_sim.h"
#include "mmi_cfgsrv.h"
#include "mmi_mae_helper.h"
#include "mmi_mae_common_def.h"

#include "mmi_phbsrv.h"
#include "mmi_stksrv.h"
#include "mmi_smssrv.h"
#include "mmi_req_rtk.h"
#include "mmi_common_cfg.h"
#include "mmi_if_sim.h"
#include "mmi_common_util.h"
#include "mmi_util_fs.h"
#include "mmi_common_rai_id.h"
#ifdef __QUAD_SIM_DUAL_STANDBY__
#define SIMSRVMAXIND(MaxSimNum) (SIMSRV_SIM_IND_e)((1 << MaxSimNum)-1)
#endif
#define SIMSRV_INITAPP_TIMER    300000
#ifdef __QUAD_SIM_DUAL_STANDBY__
#define SIMSRV_WAIT_SIM_IND_TIME    50000//25000
#else
#define SIMSRV_WAIT_SIM_IND_TIME    25000
#endif
#ifdef __3G_RIL_MMI__
// Per DBB's comment, we only need 8 sec before power on DBB
// if DBB no response
#define SIMSRV_WAIT_SIM_CNF_TIME    10000
#else //__3G_RIL_MMI__
#define SIMSRV_WAIT_SIM_CNF_TIME    30000
#endif //__3G_RIL_MMI__
#if defined(__EMAPP_SHOW_PROFILING_DATA__) && defined(__SAVEPOOLSTATUS_MMI__)
#define SIMSRV_SAVE_POOL_STATUS_TIME    3600000 // one hour
#endif
#define XMMI_SIM_MAX_SST_LEN  8

typedef struct
{
    u8 u8SSTLen;                    //SIM Service Table length
    u8 u8SST[XMMI_SIM_MAX_SST_LEN]; //Each SIM Service Table element
} SIMSRV_SST_t;

#define SIMSRV_SEC_PIN_LEN 8
#define SIMSRV_SEC_PUK_LEN 8

#ifndef MEMCMP
#define MEMCMP(s,t,n) memcmp(s,t,n)
#endif

typedef enum
{
    SIMSRV_REQUEST_TYPE_NONE = 0
   ,SIMSRV_REQUEST_TYPE_ENABLEPIN
   ,SIMSRV_REQUEST_TYPE_DISABLEPIN
   ,SIMSRV_REQUEST_TYPE_VERIFYPIN
   ,SIMSRV_REQUEST_TYPE_CHANGEPIN
   ,SIMSRV_REQUEST_TYPE_UNBLOCKPIN
   ,SIMSRV_REQUEST_TYPE_READFILE
   ,SIMSRV_REQUEST_TYPE_STATUSFILE
   ,SIMSRV_REQUEST_TYPE_WRITEFILE
   ,SIMSRV_REQUEST_TYPE_WRITEPREFERREDLANG
   ,SIMSRV_REQUEST_TYPE_INITFORAPP
   ,SIMSRV_REQUEST_TYPE_ACTIVATEMASTERSIM
   ,SIMSRV_REQUEST_TYPE_ACTIVATESLAVESIM
   ,SIMSRV_REQUEST_TYPE_STKREFRESHMASTER
   ,SIMSRV_REQUEST_TYPE_STKREFRESHSLAVE
   ,SIMSRV_REQUEST_TYPE_INITPHONEBOOK_MASTER
   ,SIMSRV_REQUEST_TYPE_INITSMS_MASTER
   ,SIMSRV_REQUEST_TYPE_INITPHONEBOOK_SLAVE
   ,SIMSRV_REQUEST_TYPE_INITSMS_SLAVE
   ,SIMSRV_REQUEST_TYPE_ACTIVATEBOTHSIM
   ,SIMSRV_REQUEST_TYPE_SIMERROR_MASTER
   ,SIMSRV_REQUEST_TYPE_SIMERROR_SLAVE
}SIMSRV_REQUEST_TYPE_e;

typedef enum
{
    SIMSRV_ERROR_REASON_GETINFOERROR = 0
   ,SIMSRV_ERROR_REASON_SIMABSENCE = 1
}SIMSRV_ERROR_REASON_e;

typedef struct
{
    SIMSRV_PIN_TYPE_e PinType;
    u8 PinValue1[SIMSRV_SEC_PIN_LEN + 1];
    u8 PinValue2[SIMSRV_SEC_PIN_LEN + 1];
} SIMSRV_SEC_REQ_t;

typedef struct
{
    SIMSRV_SIM_FILE_ID_e FileID;    /* Record file ID */
    u16 nLength;
} SIMSRV_READ_FILE_REQ_t;

typedef struct
{
    boolean bActivate;
    SIMSRV_SIM_ID_e eCurGetInfoSIM;
    boolean bRevPWOF_Master;
    SIMSRV_RESULT_e eActRslt_Matser;
    boolean bRevPWOF_Slave;
    SIMSRV_RESULT_e eActRslt_Slave;
}SIMSRV_ACTIVATE_BOTH_SIM_REQ_t;


typedef union
{
    SIMSRV_SEC_REQ_t SecReq;
    SIMSRV_READ_FILE_REQ_t ReadFileReq;
    SIMSRV_ACTIVATE_BOTH_SIM_REQ_t ActiBothSIMReq;
    SIMSRV_SIM_FILE_ID_e StatusFileReq_SIMFileID;
    MAE_LANG_CODE_e LangCode;
    boolean bActivate;
} SIMSRV_UNION_REQUEST_INFO_t;

typedef struct
{
    void *pOwner;   /*Record SIMSRV point for free waiting queue function*/
    void *pCaller;  /*Record request caller*/
    SIMSRV_SIM_ID_e eSIMID;                     /*Record activate SIM ID */
    SIMSRV_REQUEST_TYPE_e eRequestType;     /* Record request type */
    SIMSRV_UNION_REQUEST_INFO_t RequestInfo;    /* Record request information */
}SIMSRV_REQUEST_t;

typedef struct
{
	boolean				bSIMAbsense;
    SIMSRV_PIN_STATUS_t PinStatus;          /*Record Pin Status*/
    SIMSRV_LANGUAGE_t Language;         /*Record Language*/
    SIMSRV_ECC_t ECC;               /*Record ECC Table*/
    SIMSRV_SST_t SST;               /*Record SSTable*/
    u8 IMSI[XMMI_SIM_MAX_IMSI_LEN + 1];         /*Record IMSI*/
    SIMSRV_OPName_t stSPNName;          /* store SPN name */
    SIMSRV_OPName_t stONSName;          /* store ONS name */
    SIMSRV_OPName_t stSONSName;     /* store SONS name */
    u8 bPinStatusValid; /* If get PinStatus*/
    u8 bLanguageValid;      /* If get Language*/
    u8 bECCValid;           /* If get ECC*/
    u8 bIMSIValid;          /* If get IMSI*/
    u8 bSPNFileValid;       /* If get SPN*/
    u8 bONSFileValid;       /* If get ONS*/
    u8 bSONSFileValid;      /* If get SONS*/
    u8 bSSTValid;           /* If get SST*/
    u8 bSIMInserted;        /* if SIM inserted */
    u8 bSIMActivated;       /* if SIM activated */
    u8 bSIMReady;           /* if SIM ready */
    u8 bSIMChanged;     /* if SIM changed */
    u8 bMasterFileReady;    /* if MF file ready */
    u8 bIMSIFileReady;      /* if IMSI file ready */
#ifdef __SIM_NO_RSP_HANDLING__
    u8 bSIMNoRsp;           /* if SIM no response */
#endif //__SIM_NO_RSP_HANDLING__
#ifdef __3G_RIL_MMI__
    u32 nLpCountToGet;
#endif //__3G_RIL_MMI__
}SIMSRV_SIM_DATA_t;

typedef struct
{
    boolean bDeactivate;
    boolean bSTKRefresh;
    SIMSRV_REQUEST_TYPE_e eRequestType;
} SIMSRV_REQUEST_INITAPP_t;

typedef struct
{
    boolean bMasterPhonebook;
    boolean bMasterSMS;
    boolean bSlavePhonebook;
    boolean bSlaveSMS;
} SIMSRV_INITAPP_STATUS_t;

typedef struct
{
    u8 SST_CHV1_DISABLE;    //PIN1 Disable function (Service n�X1)
    u8 SST_ADN;                 //Abbreviated Dialing Numbers (Service n�X2)
    u8 SST_FDN;                 //Fixed Dialing Numbers (Service n�X3)
    u8 SST_SMS;                 //Short Message Storage (Service n�X4)
    u8 SST_AoC;                 //Advice of Charge (Service n�X5)
    u8 SST_CCP;                 //Capability Configuration Parameters (Service n�X6)
    u8 SST_PLMN;                //PLMN selector (Service n�X7)
    u8 SST_MSISDN;              //MSISDN (Service n�X9)
    u8 SST_GID1;                //Group Identifier Level 1 (Service n�X15)
    u8 SST_GID2;                //Group Identifier Level 2 (Service n�X16)
    u8 SST_SPN;                 //Service Provider Name (Service n�X17)
    u8 SST_SDN;                 //Service Dialing Numbers (Service n�X18)
} SIMSRV_SST_INV_STATUS_t;


typedef struct
{
    MAE_Notifier_t *pNotifier;          /* to notify AbsenceInd, ActiveInd, ReadyInd event */
    IVectorModel *pWaitingQueue_REQUEST;  /* to keep requests if SIMSRV is busy to process it immediately */
    IVectorModel *pWaitingQueue_REQUEST_INITAPP;  /* to keep requests if SIMSRV is busy to process it immediately */
    ICFGSrv *pICFGSrv;  /* for get and set configuration items */
    IPHBSRV *pIPhbSrv;  /* for init phonebook */
    ISMS *pISMS;        /* for init message */
    ISTKSRV *pISTKSrv;  /* for STK refresh */
    SIMSRV_REQUEST_t EnablePINReq;      /* Record enable PIN request data */
    SIMSRV_REQUEST_t DisablePINReq;     /* Record disable PIN request data */
    SIMSRV_REQUEST_t VerifyPINReq;      /* Record verify PIN request data */
    SIMSRV_REQUEST_t ChangePINReq;      /* Record change PIN request data */
    SIMSRV_REQUEST_t UnblockPINReq;     /* Record unblock PIN request data */
    SIMSRV_REQUEST_t ReadFileReq;       /* Record read file request data */
    SIMSRV_REQUEST_t StatusFileReq;     /* Record status file request data */
    SIMSRV_REQUEST_t SetPreferredLangReq;   /* Record write preferred language code  */
    SIMSRV_REQUEST_t ActivateMasterSIMReq;      /* Record activate/deactivate Master SIM request */
    SIMSRV_REQUEST_t ActivateSlaveSIMReq;       /* Record activate/deactivate Slave SIM request */
    SIMSRV_REQUEST_t ActivateBothSIMReq;        /* Record activate/deactivate Slave SIM request */
    SIMSRV_REQUEST_t STKRefreshMasterReq;       /* Record Master SIM STK refresh request */
    SIMSRV_REQUEST_t STKRefreshSlaveReq;            /* Record Slave SIM STK refresh request */
    SIMSRV_REQUEST_t DeactivateSIMforShutdownReq;           /* Record deactivate SIM and application for shutdown request */
    SIMSRV_REQUEST_t SIMErrorforMasterReq;          /* Record master SIM error request */
    SIMSRV_REQUEST_t SIMErrorforSlaveReq;           /* Record slave SIM error request */
    SIMSRV_REQUEST_INITAPP_t InitMasterPhonebookReq; /* Record init phonebook request of Master SIM */
    SIMSRV_REQUEST_INITAPP_t InitSlavePhonebookReq; /* Record init phonebook request of Slave SIM */
    SIMSRV_REQUEST_INITAPP_t InitMasterSMSReq; /* Record init SMS request of Master SIM */
    SIMSRV_REQUEST_INITAPP_t InitSlaveSMSReq; /* Record init SMS request of Slave SIM */
    SIMSRV_SIM_DATA_t MasterSIM;    /* SIM data for Single SIM mode or Master SIM for DUO */
    SIMSRV_SIM_DATA_t SlaveSIM; /* Salve SIM data */
    SIMSRV_INITAPP_STATUS_t InitAppStatus;
    SIMSRV_SIM_IND_e eSIMIndication;    /* Record receive SIM present/absent indication */
    boolean bSTKRefreshMaster;  /*Is for Master SIM STK refresh */
    boolean bSTKRefreshSlave;   /*Is for Slave SIM STK refresh */
    boolean bInitMasterSIMReady;    /* check if present indication received for init SIM data */
    boolean bInitSlaveSIMReady; /* check if present indication received for init SIM data */
    boolean bMasterConfimed;    /* check if already confim to activate/deactivate Master SIM */
    boolean bSlaveConfimed;     /* check if already confim to activate/deactivate Slave SIM */
    boolean bInitAppProcessing; /* check if init application is under processing */
    boolean bTerminate;         /* check if shell wants to terminate service */
    boolean bAbortInitProcess;  /* check if need to abort init process */
    boolean bWaitCnf;   /* check if request is already sent and waiting confirm */
    boolean bIgnoreSIMCardStatusChangeInd;  /* check if need to ignore SIM card stauts changed indicaiton */
    boolean bWaitPINVerifyMaster; /*check if waiting PIN verify in Init Basic info */
    boolean bWaitPINVerifySlave; /*check if waiting PIN verify in Init Basic info */
    boolean bDeactivateSIMforShutdown;          /* check if wants to deactivate SIM for shutdown */
    boolean bNeedToDeactivateSlaveforShutdown;          /* check if need to deactivate Slave SIM after Master SIM is already deactivated for shutdown */
    boolean bFactoryModeActvateSIM; /* check if activate SIM protocol only for factory mode */
	boolean bIgnoreSimRack;      
    SIMSRV_SST_INV_STATUS_t SSTInvStatus;   /* store SST invalid status */
    SIMSRV_SIM_ID_e eInitAppSIMID;      /* record current init app processing is for which SIM */
    u32 nTotalMemory;           /* keep the total memory size from status file cnf */
    MAE_EventId nWaitingInitAppEvtId;   /* Waiting init application confirm event id. */
    u8 ActiveSIM;   /* Record whick SIM should be initialized */
    u8 ActiveSIMForInitApp; /* init application for which SIM */
    u8 nInitAppStep;    /* Record init application status. */
    u8 au8PreviousMasterIMSI[MAX_IMSI_LEN + 1];
    u8 au8PreviousSlaveIMSI[MAX_IMSI_LEN + 1];
    u8 au8LastInsertedIMSI1[MAX_IMSI_LEN + 1];
    u8 au8LastInsertedIMSI2[MAX_IMSI_LEN + 1];
#ifdef __QUAD_SIM_DUAL_STANDBY__
    u8 *pu8ActiveRackID;
    SIMSRV_SIM_INSERT_NEW_e *pRackInsertedStatus;
    SIMSRV_SimInfo_t tSIMInfo;
    SIMSRV_SIM_RACK_ID_e ePreMasterRack;
    SIMSRV_SIM_RACK_ID_e ePreSlaveRack;
#endif
#ifdef __3G_RIL_MMI__
    // In USIM, we have to know if we are using ADF usim or DF gsm.
    SIMSRV_SIM_PHASE_e eMasterSIMPhase;
    SIMSRV_SIM_PHASE_e eSlaveSIMPhase;
#endif // __3G_RIL_MMI__ 
    u8 eLimitedSrvSIMID;
} SIMSRV_DATA_t;

typedef struct
{
    u8 mnc2[MAX_MCC_LEN];
} SIMSRV_Mnc_Pre2Digitst_t;

typedef struct
{
    u8 mcc[MAX_MCC_LEN+1];
} SIMSRV_Mcc_Digitst_t;

typedef struct
{
    u8 mcc[MAX_MCC_LEN+1];
    const SIMSRV_Mnc_Pre2Digitst_t *pMncTbl;
    u16 tblsize;
} SIMSRV_MNC2_3Digits_t;

/**
 * Application structure
 */
typedef struct MMI_SIMSRV_TAG
{
    DECLARE_FUNCTBL(ISIMSRV); // function table pointer
    u32 refCnt;     // reference count
    SM_Mao_t app;       // StateMachine Application data
    SM_ModeId_t _lastActiveMode[cSIMSRV_ModeNumbers];   // Last child, current active child
    SM_ModeId_t _currentMode[1];
    /* Add custom fields below */
    IShell *pIShell;

#ifdef __3G_RIL_MMI__
    // In ttpcom modem, it always return +CPIN:NOT READY after we turn off SIM. we have to ignore it.
    u32 isWaitingCfunSimOffRes; 
    boolean bWaitingMasterSimInd;
    boolean bWaitingSlaveSimInd;
#endif //__3G_RIL_MMI__

} MMI_SIMSRV;

/**
* _mmi_SIMSRV_AddItemIntoWaitingQueue
* @brief        Add request command into waiting queue and post event to process item.
*
* @param    pThis       The pointer of ISIMSRV object.
* @param    pWaitingQueue   The pointer of waiting queue.
* @param    pData       The pointer of request command data.
*
* @retval       MAE_Ret value
*/
static MAE_Ret _mmi_SIMSRV_AddItemIntoWaitingQueue(MMI_SIMSRV *pThis, IVectorModel *pWaitingQueue, void *pData);

/**
* _mmi_SIMSRV_CheckWaitingQueue
* @brief        Check if waiting queue empty and get the first item to process.
*
* @param    pThis       The pointer of ISIMSRV object.
*/
static void _mmi_SIMSRV_CheckWaitingQueue(MMI_SIMSRV *pThis);


/**
* _mmi_SIMSRV_WaitingQueueFree_REQUEST
* @brief        To free waiting queue.
*
* @param    pThis       The pointer of SIMSRV_REQUEST_t object.
*/
static void _mmi_SIMSRV_WaitingQueueFree_REQUEST(void *pData);

/**
* _mmi_SIMSRV_WaitingQueueFree_REQUEST_INITAPP
* @brief        To free waiting queue.
*
* @param    pThis       The pointer of SIMSRV_REQUEST_INITAPP_t object.
*/
static void _mmi_SIMSRV_WaitingQueueFree_REQUEST_INITAPP(void *pData);

/**
* _mmi_SIMSRV_MapSIMLangCodeToPhoneLangCode
* @brief        Mapping SIM language code to Phone language code.
*
* @param    SIMLangCode     SIM language code value.
* @retval       Phone language code value.
*/
static MAE_LANG_CODE_e _mmi_SIMSRV_MapSIMLangCodeToPhoneLangCode(Mrl_SIM_Language_e SIMLangCode);

#ifdef __3G_RIL_MMI__
/**
* _mmi_SIMSRV_MapIso639ToSIMLangCode
* @brief        Mapping ISO639 language code to SIM language code.
*
* @param    iso639code   ISO 639 language code.
* @retval       SIM language code value.
*/
static Mrl_SIM_Language_e _mmi_SIMSRV_MapIso639ToSIMLangCode(u16 iso639code);
#endif // __3G_RIL_MMI__

/**
* _mmi_SIMSRV_MapPhoneLangCodeToSIMLangCode
* @brief        Mapping Phone language code to SIM language code.
*
* @param    PhoneLangCode   Phone language code value.
* @retval       SIM language code value.
*/
static Mrl_SIM_Language_e _mmi_SIMSRV_MapPhoneLangCodeToSIMLangCode(MAE_LANG_CODE_e PhoneLangCode);

/**
* _mmi_SIMSRV_Release
* @brief        Release resource of SIMSRV.
*
* @param    pThis       The pointer of ISIMSRV object.
*/
static void _mmi_SIMSRV_Release(MMI_SIMSRV *pThis);

/**
* _mmi_SIMSRV_FreeSIMReadCnf
* @brief        Free file read cnf data.
*
*/
static void _mmi_SIMSRV_FreeSIMReadCnf(IBase *pIssuer, u32 nParam1, u32 nParam2);

/**
* _mmi_SIMSRV_Remove1stItemFromWaitingQueue
* @brief        Remove the 1st item from waiting queue.
*
* @param    pThis           The pointer of ISIMSRV object.
* @param    pWaitingQueue   The pointer of waiting queue.
*/
static void _mmi_SIMSRV_Remove1stItemFromWaitingQueue(MMI_SIMSRV *pThis, IVectorModel *pWaitingQueue);

/**
* _mmi_SIMSRV_CreateTimer
* @brief        Start a timer with a specific time period.
*
* @param    pThis       The pointer of of MMI_SIMSRV object.
* @param    nTimePeriod Timer period.
* @param    fnCallBack  Call back function pointer.
*/
static void _mmi_SIMSRV_CreateTimer(MMI_SIMSRV *pThis, u32 nTimePeriod, PfnMAE_Notify fnCallBack);

/**
* _mmi_SIMSRV_CancelTimer
* @brief        Cancel timer.
*
* @param    pThis       The pointer of of MMI_SIMSRV object.
* @param    fnCallBack  Call back function pointer.
*/
static void _mmi_SIMSRV_CancelTimer(MMI_SIMSRV *pThis, PfnMAE_Notify fnCallBack);

/**
* _mmi_SIMSRV_Timer_CallBack
* @brief        Trigger external event to push state machine when timer expired.
*
* @param    pHandler        The pointer of of MMI_SIMSRV object.
*/
static void _mmi_SIMSRV_Timer_CallBack(void *pHandler);

/**
* _mmi_SIMSRV_Timer_CallBack_SIMIndTimeOut
* @brief        Trigger external event to push state machine when timer expired.
*
* @param    pHandler        The pointer of of MMI_SIMSRV object.
*/
static void _mmi_SIMSRV_Timer_CallBack_SIMIndTimeOut(void *pHandler);

/**
* _mmi_SIMSRV_Timer_CallBack_SavePoolStatus
* @brief        Save pool status.
*
* @param    pHandler        The pointer of of MMI_SIMSRV object.
*/
#if defined(__EMAPP_SHOW_PROFILING_DATA__) && defined(__SAVEPOOLSTATUS_MMI__)
static void _mmi_SIMSRV_Timer_CallBack_SavePoolStatus(void *pHandler);
#endif
/**
* _mmi_SIMSRV_Check_Auto
* @brief        Conver SIM ID suto to Master or Slave or None.
*
* @param    pThis       The pointer of of MMI_SIMSRV object.
* @param    eSIMID      The original SIM ID.
*
* @retval       SIMSRV_SIM_MASTER
* @retval       SIMSRV_SIM_SLAVE
* @retval       SIMSRV_SIM_NONE
*/
static SIMSRV_SIM_ID_e _mmi_SIMSRV_Check_Auto(MMI_SIMSRV *pThis, SIMSRV_SIM_ID_e eSIMID);


/**
* _mmi_SIMSRV_GetActiveSIMDataPtr
* @brief        Get active SIM Data pointer in SIMSRV.
*
* @param    pThis       The pointer of of MMI_SIMSRV object.
* @param    nActiveSIM  Active SIM ID.
*
* @retval       Pointer of MasterSIM or SlaveSIM.
*/
static SIMSRV_SIM_DATA_t *_mmi_SIMSRV_GetActiveSIMDataPtr(MMI_SIMSRV *pThis, u8 nActiveSIM);

/**
* _mmi_SIMSRV_GetModulID
* @brief        Get Modul ID from SIMSRV_SIM_ID_e
*
* @param    pThis       The pointer of of MMI_SIMSRV object.
* @param    eSIMID      SIMSRV_SIM_ID value.
*
* @retval       DUAL_MASTER or DUAL_SLAVE.
*/
static u32 _mmi_SIMSRV_GetModulID(MMI_SIMSRV *pThis, SIMSRV_SIM_ID_e eSIMID);

/**
* _mmi_SIMSRV_CheckInitAppWaitingQueue
* @brief        Check if init application waiting queue empty and get the first item to process.
*
* @param    pThis       The pointer of of MMI_SIMSRV object.
*
*/
static void _mmi_SIMSRV_CheckInitAppWaitingQueue(MMI_SIMSRV *pThis);

/**
* _mmi_SIMSRV_AddInitAppIntoWaitingQueue
* @brief        Check if init application waiting queue empty and get the first item to process.
*
* @param    pThis       The pointer of of MMI_SIMSRV object.
* @param    eSIMID      To identify which SIM.
* @param    bSTKRefresh Check if for STK refresh.
* @param    bDeactivate Check if for deactivate.
*
*/
static void _mmi_SIMSRV_AddInitAppIntoWaitingQueue(MMI_SIMSRV *pThis, SIMSRV_SIM_ID_e eSIMID, boolean bSTKRefresh, boolean bDeactivate);

static MAE_Ret _mmi_SIMSRV_InitSrv(MMI_SIMSRV *pThis);
static boolean _mmi_SIMSRV_AbortInitProcess(MMI_SIMSRV *pThis, void *pSM);
static void _mmi_SIMSRV_ResetSIMDataForInitFile(SIMSRV_SIM_DATA_t *pSIMData);
static void _mmi_SIMSRV_RemoveUnnecessaryItemsFromInitAppWaitingQueue(MMI_SIMSRV *pThis, SIMSRV_REQUEST_TYPE_e eRequestType);
static boolean _mmi_SIMSRV_IsSIMReadyForRequest(MMI_SIMSRV *pThis, SIMSRV_SIM_ID_e eSIMID);
void _mmi_SIMSRV_FreeStatusFileCnfData(IBase *pOwner, u32 lParam, u32 dParam);
static void _mmi_SIMSRV_CheckPINStatusWhenInitBasicInfo(MMI_SIMSRV *pThis, void *pSM, boolean bPinEnabled,u8 u8PinRemainTimes);
static void _mmi_SIMSRV_StopCurrentInitApplicationProcessing(MMI_SIMSRV *pThis, SIMSRV_SIM_ID_e eSIMID);
/**
* _mmi_SIMSRV_AddInitPhonebookIntoWaitingQueue
* @brief        Add init phonebook application request command into init application waiting queue and post event to process item.
*
* @param    pThis       The pointer of ISIMSRV object.
* @param    pWaitingQueue   The pointer of waiting queue.
* @param    pData       The pointer of request command data.
*
* @retval       MAE_Ret value
*/
static MAE_Ret _mmi_SIMSRV_AddInitPhonebookIntoWaitingQueue(MMI_SIMSRV *pThis, IVectorModel *pWaitingQueue, void *pData);
/**
* _mmi_SIMSRV_SavePoolStatus
* @brief        Save pool status before shutdown handset.
*
* @param    pThis       The pointer of ISIMSRV object.
*/
#if defined(__EMAPP_SHOW_PROFILING_DATA__) && defined(__SAVEPOOLSTATUS_MMI__)
static void _mmi_SIMSRV_SavePoolStatus(MMI_SIMSRV *pThis);
#endif
/**
* _mmi_SIMSRV_GetSIMDataPtr
* @brief        Get SIM data pointer according to SIM ID.
*
* @param    eSIMID      SIM ID.
*
* @retVal       The pointer of SIM data accroding to SIM ID.
*/
static SIMSRV_SIM_DATA_t *_mmi_SIMSRV_GetSIMDataPtr(SIMSRV_SIM_ID_e eSIMID);

/**
* _mmi_SIMSRV_SetReqData
* @brief        Set SIMSRV_REQUEST_t data except SIMSRV_UNION_REQUEST_INFO_t.
*           Must set SIMSRV_UNION_REQUEST_INFO_t before or after calling _mmi_SIMSRV_SetReqData() immediately.
*
* @param    pThis       The pointer of SIMSRV.
* @param    pReq        The pointer of SIMSRV_REQUEST_t data.
* @param    pCaller     The pointer of caller object
* @param    eSIMID      SIM ID.
* @param    eRequestType    Request type.
*
* @retval       MAE_Ret value
*
*/
static MAE_Ret _mmi_SIMSRV_SetReqData(MMI_SIMSRV *pThis, SIMSRV_REQUEST_t *pReq, void *pCaller, SIMSRV_SIM_ID_e eSIMID, SIMSRV_REQUEST_TYPE_e eRequestType);


/**
* _mmi_SIMSRV_ActivateSIMModeEntry
* @brief        Entry for activate Master/Slave SIM mode.
*
* @param    pThis       The pointer of SIMSRV.
* @param    pSM         The pointer of state machine.
* @param    nModuleID   DUAL_MASTER or DUAL_SLAVE.
* @param    pReq        The pointer of Activate SIM request data.
*
*/
static void _mmi_SIMSRV_ActivateSIMModeEntry(MMI_SIMSRV *pThis, void *pSM, u32 nModuleID, SIMSRV_REQUEST_t *pActivateSIMReq);

/**
* _mmi_SIMSRV_ActivateSIMModeAction
* @brief        Action for activate Master/Slave SIM mode.
*
* @param    pThis       The pointer of SIMSRV.
* @param    pSM         The pointer of state machine.
* @param    nModuleID       DUAL_MASTER or DUAL_SLAVE.
* @param    pReq        The pointer of Activate SIM request data.
*
*/
static void _mmi_SIMSRV_ActivateSIMModeAction(MMI_SIMSRV *pThis, void *pSM, u32 nModuleID, SIMSRV_REQUEST_t *pActivateSIMReq);


/**
* _mmi_SIMSRV_UpdatePINStatus
* @brief        Update PIN status after enable/disable/verify/change PIN.
*
* @param    nModuleID   DUAL_MASTER or DUAL_SLAVE.
* @param    ePINType        PIN1 or PIN2.
* @param    nRemAttpNum Remain times.
*
* @retVal       The pointer of PIN status.
*/
static SIMSRV_PIN_STATUS_t *_mmi_SIMSRV_UpdatePINStatus(u32 nModuleID, SIM_PIN_TYPE_e ePINType, u8 nRemAttpNum);

static boolean _mmi_SIMSRV_IsNeedCalibration(void);

/**
* _mmi_SIMSRV_UpdateLastInsertedSIMList
* @brief        Save IMSI to the inserted SIM list which contains last two inserted SIM
*
* @param    ISIMSRV *   the pointer of SIMSRV
* @param    u8*         Pointer of IMSI string.
*
*/
static void _mmi_SIMSRV_UpdateLastInsertedSIMList(MMI_SIMSRV *pThis, u8 *strIMSI);
/**
* _mmi_SIMSRV_ActivateBothSIMModeAction_TriggerEvt
* @brief        To trigger event to jump to right mode for activate Master/Slave SIM mode.
*
* @param    pThis       The pointer of SIMSRV.
* @param    pReq        The pointer of Activate SIM request data.
*
*/
static void _mmi_SIMSRV_ActivateBothSIMModeAction_TriggerEvt(MMI_SIMSRV *pThis, void *pSM, SIMSRV_REQUEST_t *pActivateSIMReq);
/**
* _mmi_SIMSRV_JudgePWONType
* @brief        get PWON type for SIM deactivation by sim card status.
*
* @param    pThis       The pointer of SIMSRV.
* @param    u8SIMID   DUAL_MASTER or DUAL_SLAVE.
*
* @out        ePWONType Power on type.
*
* @retval     MAE_Ret value
*
*/
static MAE_Ret _mmi_SIMSRV_JudgePWONType(MMI_SIMSRV *pThis,u8 u8SIMID,PWON_Type_e *ePWONType);

static void _mmi_SIMSRV_SIMErrorReq(MMI_SIMSRV *pThis, SIMSRV_SIM_ID_e eSIMID);

#ifdef __QUAD_SIM_DUAL_STANDBY__
/**
* _mmi_SIMSRV_GetTimeOutRackInd
* @brief        To SIM ID of time out indication.
*
* @return    SIMSRV_SIM_ID_e       SIM ID.
*                          SIMSRV_SIM_MASTER , Master IP has no received any rack ind.
*                          SIMSRV_SIM_SLAVE , Slave IP has no received any rack ind.
*                          SIMSRV_SIM_NONE , No received any rack ind.
*
*/
static SIMSRV_SIM_ID_e _mmi_SIMSRV_GetTimeOutSIMInd(void);
#endif /* __QUAD_SIM_DUAL_STANDBY__ */

#ifdef __3G_RIL_MMI__
/**
* _mmi_SIMSRV_GetActiveSimPhase
* @brief        Get sim phase for specified SIM
*
* @param    nModuleID   DUAL_MASTER or DUAL_SLAVE.
*
* @retVal       SIM phase for specified SIM.
*
*/
static SIMSRV_SIM_PHASE_e _mmi_SIMSRV_GetActiveSimPhase(u32 nModuleID);
#endif // #ifdef __3G_RIL_MMI__

#endif /* __MMI_SIMSRV_PRIV_H__ */
