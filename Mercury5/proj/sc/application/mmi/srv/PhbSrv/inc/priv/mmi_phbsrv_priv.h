/**
* @file mmi_phbsrv_priv.h
*
* State Machine Service - PHBSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_PHBSRV
*
*
* @version $Id: mmi_phbsrv_priv.h 39644 2009-09-08 07:45:51Z cosmo.sung $
*/
#ifndef __MMI_PHBSRV_PRIV_H__
#define __MMI_PHBSRV_PRIV_H__

#include "mmi_mae_common_def.h"
#include "mmi_mae_sm_defs.h"
#include "mmi_phbsrv.h"
#include "mmi_phbsrv_sm.h"

#include "sys_sys_wmh_sys.h"   /* For vm_sysDelayWatchDogReset(). */

#include "mmi_mae_notifier.h"
#include "mmi_req_phb.h"
#include "mmi_simsrv.h"
#include "mmi_fdnsrv.h"
//#include "mmi_cfgsrv.h"
#include "mmi_req_sim.h"
#include "mmi_if_sim.h"

#include "mmi_common_sim.h"

#include "mmi_util_fs.h"
#include "mmi_util_rtc.h"
#include "mmi_common_rai_id.h"

#include "mmi_mae_filemgr.h"
#include "mmi_usbsrv.h"

#include "mmi_hashmapsrv.h"

#ifndef __MMI_PHB_DISABLE_IMPORT_EXPORT__

#define MMI_PHB_EXPORT_FILE_NAME_PAD_ADR    L"P"
#define MMI_PHB_EXPORT_FILE_NAME_PAD_ADN    L"S"
#define MMI_PHB_EXPORT_FILE_NAME_PAD_ADN1   L"S1"
#define MMI_PHB_EXPORT_FILE_NAME_PAD_ADN2   L"S2"
#define MMI_PHB_EXPORT_FILE_NAME_PAD_ALL    L"A"
#endif // #ifndef __MMI_PHB_DISABLE_IMPORT_EXPORT__

enum
{
    MMI_PHB_SRV_FUN_QUEUE_SIZE = 20
   ,MMI_PHB_SRV_TIME_TO_KICK_WATCHDOG = 50
   ,MMI_PHB_SRV_MULTI_INSERT_STEP = 5
   ,MMI_PHB_SRV_MULTI_INSERT_STEP_TICK = 5
};

typedef struct
{
    u32 u32PhbCheckValue;
    const IDataModel *ptReq;
    IDataModel *ptCnf;
    void *ptCnfData;
    MmiPhbSrvFunId_e s32PhbSrvFid;
    ModelListener_t tPhbSrvDMListener;
    SrvCallbackData_t *tPhbSrvCallbackData;
} MmiPhbSrvFunQueue_t;


typedef struct
{
    MMI_PHB_Recovery_Flag_e eADNRecoveryFlag;
    MMI_PHB_REQ_ChecksumInd_t tADNChecksum_M;
    MMI_PHB_REQ_ChecksumInd_t tADNChecksum_S;
    boolean bIsMMIModifyADN_M;
    boolean bIsMMIModifyADN_S;
#if defined(__MMI_PHB_SMART_ALPHABET_FILTER_SUPPORT__) || defined(__MMI_PHB_SMART_NUMBER_FILTER_SUPPORT__)
    MmiPhbSrvFuzzySearchType_e eFuzzySearchType;
#endif
} MmiPhbSrvInfo_t;


#ifndef MEMCMP
#define MEMCMP(s,t,n) memcmp(s,t,n)
#endif

#ifndef __MMI_PHB_DISABLE_IMPORT_EXPORT__

#define MMI_PHB_SRV_EXPORT_RESULT_TIMER         3000
#define MMI_PHB_SRV_EXPORT_WAIT_TIMER           1
#define MMI_PHB_SRV_IMPORT_IDLE_TIMER           1

#define MMI_PHB_SRV_IMPORT_SUSPEND_BY_ITEM_NUM  5
#endif // #ifndef __MMI_PHB_DISABLE_IMPORT_EXPORT__

enum
{
    MMI_PHB_IGNORE        = (1 << 8  | 0), //Ignore the VCard contact

    MMI_PHB_UPDATE        = (1 << 16 | 0), //Update one of the existing contact with the VCard contact

    MMI_PHB_ADDNEW        = (1 << 24 | 0), //Add the VCard contact to phone book
    MMI_PHB_ADDNEW_NAME   = (1 << 24 | 1), //Add the VCard contact to phone book cause contact names are different
    MMI_PHB_ADDNEW_NUMBER = (1 << 24 | 2), //Add the VCard contact to phone book cause contact numbers are different
#ifndef __SMALL_PHB_MMI__    
    MMI_PHB_ADDNEW_EMAIL  = (1 << 24 | 3), //Add the VCard contact to phone book cause contact email are different
#endif    
};
typedef u32 ContactCompareResult_e;

enum
{
    MMI_PHB_MASK_IGNORE  = 0x000000FF,//8 bits
    MMI_PHB_MASK_UPDATE  = 0x0000FFFF,//16 bits
    MMI_PHB_MASK_ADDNEW  = 0x00FFFFFF //24 bits
};
typedef u32 ContactCompareMask_e;

/**
 * Application structure
 */
typedef struct MMI_PHBSRV_TAG
{
    DECLARE_FUNCTBL(IPHBSRV); // function table pointer
    u32 refCnt;     // reference count
    SM_Mao_t app;       // StateMachine Application data
    SM_ModeId_t _lastActiveMode[cPHBSRV_ModeNumbers];   // Last child, current active child
    SM_ModeId_t _currentMode[1];
    /* Add custom fields below */
    MAE_Notifier_t *pNotifier;

    /*Used Services*/
    ISIMSRV *pISIMSRV;
    IFDNSRV *pIFDNSRV;

    /*Internal Function Queue*/
    MmiPhbSrvFunQueue_t atMmiPhbSrvFunQueue[MMI_PHB_SRV_FUN_QUEUE_SIZE];

    /*PHB Status*/
    boolean bIsTerminate;

    boolean bIsGetADNEntryReadyInd_M;
    boolean bIsGetADNEntryReadyInd_S;

    boolean bIsADNChanged_M;
    boolean bIsADNChanged_S;

    boolean bIsReceiveADNChecksum_M;
    boolean bIsReceiveADNChecksum_S;

    boolean bIsADNChecksumChanged_M;
    boolean bIsADNChecksumChanged_S;

    boolean bIsGetADNInitReq_M;
    boolean bIsGetADNInitReq_S;

    boolean bIsADNReady_M;
    boolean bIsADNReady_S;

    boolean bIsGetADNData_M;
    boolean bIsGetADNData_S;

    boolean bIsGetCopyAllADNReq_M;
    boolean bIsGetCopyAllADNReq_S;
    boolean bIsRebuildingIdx; //PHB is still rebuilding sorting index for ADR

    u32 u32PhbSrvCheckValue;
    MmiPhbBookType_e s32PhbSrvBookType;

    u8 u8CopyNumPos;        /* For copy ADR contact's four numbers to ADN. */

    MMI_PHB_REQ_WriteEntryReq_t *ptRILWriteReq;
    MMI_PHB_REQ_DeleteEntryReq_t *ptRILDeleteReq;
    MmiPhbReadOneContactByPhysicalIdxCnf_t *ptPhbDhReadCnf;

    MMI_PHB_REQ_ChecksumInd_t *pNewChecksum_M;
    MMI_PHB_REQ_ChecksumInd_t *pNewChecksum_S;

    u16 u16PhbSrvIdx;
    u16 u16PhbMaxContacts;
    u16 u16WriteContactPhyIdx;

    u32 u32PhbRecoveryCnt;
    MMI_PHB_Recovery_Flag_e ePhbRecoveryFlag;

#ifndef __MMI_PHB_DISABLE_IMPORT_EXPORT__

    /* For  import/export */
    MmiPhbImportContactReq_t *ptImportReq;
    MmiPhbExportContactReq_t *ptExportReq;
    MmiPhbExportImportStatus_e eCurrentEIStatus;
    MmiPhbActionType_e eCurrentEIAction;

    boolean bIsSuspendExportImport;
    boolean bIsStopExportImport;
    boolean bIsSkipCurImportContact;
#endif // #ifndef __MMI_PHB_DISABLE_IMPORT_EXPORT__

#ifdef __MMI_PHB_SUPPORT_CONTACT_CHANGED_NOTIFY__
	// contact changed notify funciton
	VectorClass_t 	*pVectorContactChanged;
	u16 			u16ContactChangedNum;
#endif

    MmiPhbSrvFunId_e s32PhbSrvFid;
    IHASHMAPSRV *pIHashMapSrv;

} MMI_PHBSRV;

#endif /* __MMI_PHBSRV_PRIV_H__ */
