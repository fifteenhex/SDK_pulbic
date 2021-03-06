/**
* @file mmi_videoplayersrv_priv.h
*
* State Machine Service - VIDEOPLAYERSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_VIDEOPLAYERSRV
*
*
* @version $Id: mmi_videoplayersrv_priv.h 41616 2009-09-28 11:40:02Z lih.wang $
*/
#ifndef __MMI_VIDEOPLAYERSRV_PRIV_H__
#define __MMI_VIDEOPLAYERSRV_PRIV_H__

/*-------------------------------------------------------------------------*/

#include "mmi_videoplayerSrv.h"
#include "ABL_Vdo.h"
#include "mmi_cfgsrv.h"
#include "mmi_basesrv.h"
#include "mmi_videostreaming.h"
#ifdef __MMI_KING_MOVIE__
#include "mmi_mae_md5.h"
#endif
#ifdef __MMI_OMA_DRM_V1__
#include "mmi_drmagentsrv_util.h"
#endif

#if defined(__MMI_STEREO_VIDEO__) && defined(__BLUETOOTH_A2DP_MMI__) && !defined(__NAND__)
#include "mmi_btsrv.h"
#endif

#define VDOPLAYERSRV_EVT_GROUP_MASK 0xFF00
#define VDOPLAYERSRV_GET_EVT_GROUP(_EVTID_) ((_EVTID_) & VDOPLAYERSRV_EVT_GROUP_MASK)

typedef enum VideoPlayerSrvEvt_e_
{
    VDOPLAYERSRV_EVT_GROUP_REQ = 0x0000,
    VDOPLAYERSRV_EVT_PLAY_REQ = VDOPLAYERSRV_EVT_GROUP_REQ,
    VDOPLAYERSRV_EVT_PLAYNEXT_CLOSE_REQ,
    VDOPLAYERSRV_EVT_PLAYNEXT_PLAY_REQ,
    VDOPLAYERSRV_EVT_AUTOSET_PASSWORD_CLOSE_REQ,
    VDOPLAYERSRV_EVT_RESUME_REQ,
    VDOPLAYERSRV_EVT_PAUSE_REQ,
    VDOPLAYERSRV_EVT_STOP_REQ,
    VDOPLAYERSRV_EVT_SEEKSTART_REQ,
    VDOPLAYERSRV_EVT_SEEKNEXT_REQ,
    VDOPLAYERSRV_EVT_SEEKSTOP_REQ,
    VDOPLAYERSRV_EVT_GETFRAMESTART_REQ,
    VDOPLAYERSRV_EVT_GETFRAMESTOP_REQ,
    VDOPLAYERSRV_EVT_SETWINDSIZE_REQ,
    VDOPLAYERSRV_EVT_SETWINDSIZE_PLAYING_REQ,
    VDOPLAYERSRV_EVT_GETINFO_REQ,
    VDOPLAYERSRV_EVT_BACK2IDLE_REQ,//for get frame complete

    VDOPLAYERSRV_EVT_GROUP_RSP = 0x0100,
    VDOPLAYERSRV_EVT_OPEN_RSP = VDOPLAYERSRV_EVT_GROUP_RSP,
    VDOPLAYERSRV_EVT_CLOSE_RSP,
    VDOPLAYERSRV_EVT_PLAY_RSP,
    VDOPLAYERSRV_EVT_PAUSE_RSP,
    VDOPLAYERSRV_EVT_RESUME_RSP,
    VDOPLAYERSRV_EVT_STOP_RSP,
    VDOPLAYERSRV_EVT_SEEKSTART_RSP,
    VDOPLAYERSRV_EVT_SEEKSTOP_RSP,
    VDOPLAYERSRV_EVT_GETFRAMESTART_RSP,
    VDOPLAYERSRV_EVT_GETFRAMESTOP_RSP,
    VDOPLAYERSRV_EVT_GETINFO_RSP,
    VDOPLAYERSRV_EVT_SETWINDSIZE_RSP,

    VDOPLAYERSRV_EVT_GROUP_NOTIFY = 0x0200,
    VDOPLAYERSRV_EVT_OPEN_COMPLETE = VDOPLAYERSRV_EVT_GROUP_NOTIFY,
    VDOPLAYERSRV_EVT_OPEN_ERROR,
    VDOPLAYERSRV_EVT_PLAY_END,
    VDOPLAYERSRV_EVT_PLAY_ERROR,
    VDOPLAYERSRV_EVT_SEEK_COMPLETE,
    VDOPLAYERSRV_EVT_SEEK_ERROR,
    VDOPLAYERSRV_EVT_GETFRAME_COMPLETE,
    VDOPLAYERSRV_EVT_GETFRAME_ERROR,
    VDOPLAYERSRV_EVT_REBUFFER_START,
    VDOPLAYERSRV_EVT_REBUFFER_END,

    VDOPLAYERSRV_EVT_GROUP_INFORM = 0x0300,
    VDOPLAYERSRV_EVT_INFORM_SEEKSTATUS = VDOPLAYERSRV_EVT_GROUP_INFORM,
    VDOPLAYERSRV_EVT_INFORM_PLAYSPEED,
    VDOPLAYERSRV_EVT_INFORM_WINDOWSIZE,
    VDOPLAYERSRV_EVT_INFORM_BUFFERING_STATUS,
    VDOPLAYERSRV_EVT_INFORM_PROGRESS,
    VDOPLAYERSRV_EVT_INFORM_ERROR,
    VDOPLAYERSRV_EVT_INFORM_INTERRUPT,
    VDOPLAYERSRV_EVT_INFORM_PLAYSTATUS,
    VDOPLAYERSRV_EVT_INFORM_FIRSTFRAME,
    VDOPLAYERSRV_EVT_INFORM_DATAINFO,
    VDOPLAYERSRV_EVT_INFORM_SET_STEREO_TYPE,
    VDOPLAYERSRV_EVT_INFORM_SET_DEPTH,
    VDOPLAYERSRV_EVT_INVALID = 0xFFFF,
} VideoPlayerSrvEvt_e;

typedef enum VdoPlayerSrvState_e_
{
    VDOPLAYERSRV_STATE_IDLE = 0,
    VDOPLAYERSRV_STATE_ACTIVE,
    VDOPLAYERSRV_STATE_OPENING,
    VDOPLAYERSRV_STATE_OPEN,
    VDOPLAYERSRV_STATE_PRESEEK,
    VDOPLAYERSRV_STATE_PLAY,
    VDOPLAYERSRV_STATE_PAUSE,
    VDOPLAYERSRV_STATE_SEEK,
    VDOPLAYERSRV_STATE_GETFRAME,
} VdoPlayerSrvState_e;

typedef enum VideoPlayerSrvPlayType_e_
{
    VDOPLAYERSRV_PLAY_FILE = 0,
    VDOPLAYERSRV_PLAY_RAW,
    VDOPLAYERSRV_PLAY_STREAM,
    VDOPLAYERSRV_PLAY_UNKNOW_TYPE
} VideoPlayerSrvPlayType_e;

typedef enum VideoPlayerSrvCmdType_e_
{
    VDOPLAYERSRV_CMD_OPEN = 0,
    VDOPLAYERSRV_CMD_CLOSE,
    VDOPLAYERSRV_CMD_PLAY,
    VDOPLAYERSRV_CMD_PAUSE,
    VDOPLAYERSRV_CMD_RESUME,
    VDOPLAYERSRV_CMD_STOP,
    VDOPLAYERSRV_CMD_SEEK_START,
    VDOPLAYERSRV_CMD_SEEK_STOP,
    VDOPLAYERSRV_CMD_GETINFO,
    VDOPLAYERSRV_CMD_GETFRAME_START,
    VDOPLAYERSRV_CMD_GETFRAME_STOP,
    VDOPLAYERSRV_CMD_SETWINDOW,
    VDOPLAYERSRV_CMD_INVALID
} VideoPlayerSrvCmdType_e;

typedef struct VideoPlayerSrvCbItem_t_
{
    union
    {
        VideoPlayerSrvSeekStatusCb pfnSeekStatusCb;
        VideoPlayerSrvWindowSizeCb pfnWindowSizeCb;
        VideoPlayerSrvBufferingStatusCb pfnBufferingStatusCb;
        VideoPlayerSrvPlayProgressCb pfnPlayProgressCb;
        VideoPlayerSrvErrorCb pfnErrorCb;
        VideoPlayerSrvInterruptCb pfnInterruptCb;
        VideoPlayerSrvFirstFrameCb pfnDataFirstFrameCb;
        VideoPlayerSrvPlayStatusCb pfnPlayStatusCb;
        VideoPlayerSrvDataInfoCb pfnDataInfoCb;
        VideoPlayerSrvTempFileProcessCb pfnTempFileCb;
#ifdef __MMI_STEREO_VIDEO__
        VideoPlayerSrvSetStereoConfigCmnCb pfnSetStereoCb;
        VideoPlayerSrvSetStereoConfigCmnCb pfnSetDepthCb;
#endif
    }uCb;
    u32 nCusData;
} VideoPlayerSrvCbItem_t;

typedef struct VideoPlayerSrv_t_
{
    SERVICE_BASE_ELEMENTS;
    BaseSrvHdl_t pBaseSrvHdl;
    ResMgr_AppId_e eAppId;
    u32 nAppInstance;
    boolean bIsSuspended;
    boolean bOpenSession;
    VideoPlayerSrvDolby_e eCurrDolbyMode;
#ifdef __MMI_KING_MOVIE__
    u8 *pPassword;    //for encrypted video files
    boolean bIsAutoSetPassword;    //for encrypted video files
#endif
    boolean bInformStateChange;
    SrvEvtHdl_t pPendingEvt;
    boolean bWaitForNtf;
    boolean bIsInitAudio;
    boolean bIsReqSubject;

    /* Information about current file */
    MAE_WChar *pCurrPlayURL;
    u8 *pCurrMemBuffer;
    VideoPlayerSrvPlayType_e eCurrPlayType;
    Rect_t tVideoRegion;
    Rect_t tCurrVideoRegion;
    MediaSrvAngle_e eVideoAngle;
    MediaSrvAngle_e eCurrVideoAngle;
    IBitmap *pBitmap;
    VideoPlayerSrvDataInfo_t tDataInfo;
    VideoPlayerSrvState_e eCurrApState;
    VideoPlayerSrvEvt_e eOpenForEvt;

    /* Parameter for setting function*/
    MAE_WChar *pFileURL;
    u32 nPosition;
    u32 *pExtInfo;
    u32 nExtInfoLen;
    MediaSrvMimeType_e eMimeType;
    u8 *pMemBuffer;
    u32 nMemLen;
    MediaSrvAngle_e eWindowAngle;
    VideoPlayerSrvWindMode_e eWindowMode;
    Rect_t tWindowRegion;
    VideoPlayerSrvSeekMode_e eSeekMode;
    u32 nSeekDuration;
    boolean bLoopPlay;
    VideoPlayerSrvDolby_e eDolbyMode;
    VideoPlayerSrvDownloadModuleCb pfnDownloadItf;
    VideoPlayerSrvStreamingMode_e eStreamingMode;
    MAE_WChar *pDestUrl;

    /* callback function for ap*/
    VideoPlayerSrvCbItem_t tSeekStatusCb;
    VideoPlayerSrvCbItem_t tPlaySpeedCb;
    VideoPlayerSrvCbItem_t tWindowSizeCb;
    VideoPlayerSrvCbItem_t tCusWindowRegionCb;
    VideoPlayerSrvCbItem_t tBufferingStatusCb;
    VideoPlayerSrvCbItem_t tPlayProgressCb;
    VideoPlayerSrvCbItem_t tErrorCb;
    VideoPlayerSrvCbItem_t tInterruptCb;
    VideoPlayerSrvCbItem_t tPlayStatusCb;
    VideoPlayerSrvCbItem_t tDataFirstFrameCb;
    VideoPlayerSrvCbItem_t tDataInfoCb;
    VideoPlayerSrvCbItem_t tTempFileCb;
#ifdef __MMI_STEREO_VIDEO__
    VideoPlayerSrvCbItem_t tSetStereoCb;
    VideoPlayerSrvCbItem_t tSetDepthCb;
    VideoPlayerImageStereoType_e eImageStereoType;
    u32 nDepth;
    boolean bIsSupportStereoEffect;
#if defined(__BLUETOOTH_A2DP_MMI__) && !defined(__NAND__)
    IBTSRV *pIBTSrv;
	boolean bIsSupportA2DP;
	boolean bIsPromptPoorPerformanceIn3D;
#endif
#endif

    FileMgrHandleID_t nTempFileHdl;
#ifdef __STREAMING_MODULE__
    VideoPlayerSrvConnectionType_e eConnectionType;
    VideoPlayerSrvStreamProgress_e eStreamProgress;
#endif
} VideoPlayerSrv_t;

typedef MAE_Ret (*VideoPlayerSrvCmnItf)(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdll);

typedef struct VideoPlayerSrvItf_t_
{
    VideoPlayerSrvCmnItf pfnVdoOpen;
    VideoPlayerSrvCmnItf pfnVdoClose;
    VideoPlayerSrvCmnItf pfnVdoPlay;
    VideoPlayerSrvCmnItf pfnVdoPause;
    VideoPlayerSrvCmnItf pfnVdoResume;
    VideoPlayerSrvCmnItf pfnVdoStop;
    VideoPlayerSrvCmnItf pfnVdoSeekStart;
    VideoPlayerSrvCmnItf pfnVdoSeekStop;
    VideoPlayerSrvCmnItf pfnVdoGetInfo;
    VideoPlayerSrvCmnItf pfnVdoGetFrameStart;
    VideoPlayerSrvCmnItf pfnVdoGetFrameStop;
    VideoPlayerSrvCmnItf pfnVdoSetWindSize;
} VideoPlayerSrvItf_t;

typedef struct VideoPlayerSrvReqEvt_t_
{
    /*Play*/
    MAE_WChar *pURL;
    u8 *pMemBuffer;
    u32 nMemLen;
    MediaSrvMimeType_e eMimeType;
    u32 nPosition;
    u32 *pExtInfo;
    u32 nExtInfoLen;
    MediaSrvAngle_e eWindowAngle;
    Rect_t tWindowRegion;
    VideoPlayerSrvWindMode_e eWindowMode;
    boolean bLoopPlay;
    VideoPlayerSrvDownloadModuleCb pfnDownloadItf;
#if defined(__MMI_OMA_DRM_V1__)
    u8* pDrmCid;
#endif

    /*Seek*/
    VideoPlayerSrvSeekMode_e eSeekMode;
    u32 nSeekDuration;

    /*Flag */
    boolean bAlreadySeek;
    boolean bAlreadyGetInfo;
    boolean bAlreadySetWindSize;

    /*common*/
    VideoPlayerSrvItf_t tVdoItf;
    VideoPlayerSrvPlayType_e ePlayType;
    VideoPlayerSrvCmdType_e eCurrCmd;
} VideoPlayerSrvReqEvt_t;

typedef struct VideoPlayerSrvRspEvt_t_
{
    MAE_Ret eErrCode;
    union
    {
        u32 nSeekPosition;
        VideoPlayerSrvDataInfo_t tDataInfo;
    }uInfo;
}VideoPlayerSrvRspEvt_t;

typedef struct VideoPlayerSrvNtfEvt_t_
{
    union
    {
        u32 nSeekPosition;
        ABL_VdoErrorType_e eErrorType;
        u32 nFileSize;
    }uInfo;
}VideoPlayerSrvNtfEvt_t;

typedef struct VideoPlayerSrvInformEvt_t_
{
    VideoPlayerSrv_t *pVideoPlayerSrv;
    VideoPlayerSrvCbItem_t tCbItem;
    union
    {
    	VideoPlayerSrvSeekStatusInfo_t tSeekStatusInfo;
    	VideoPlayerSrvPlaySpeedInfo_t tPlaySpeedInfo;
    	VideoPlayerSrvWindSizeInfo_t tWindSizeInfo;
    	VideoPlayerSrvBufferingInfo_t tBBufferingInfo;
    	VideoPlayerSrvProgressInfo_t tProgressInfo;
    	VideoPlayerSrvErrorInfo_t tErrorInfo;
    	VideoPlayerSrvInterruptInfo_t tInterruprInfo;
    	VideoPlayerSrvFirstFrameInfo_t tFirstFrameInfo;
    	VideoPlayerSrvPlayStatusInfo_t tPlayStatusInfo;
    	VideoPlayerSrvDataInfo_t tDataInfo;
#ifdef __MMI_STEREO_VIDEO__
        VideoPlayerSrvSetConfigInfo_t tSetStereoInfo;
        VideoPlayerSrvSetConfigInfo_t tSetDepthInfo;
#endif
    } uInfo;
}VideoPlayerSrvInformEvt_t;


/************************************************************************/
/* VideoPlayer Service Utility                                          */
/************************************************************************/
static void _VideoPlayerSrvConfigSetItem(VideoPlayerSrv_t *pVideoPlayerSrv, boolean bOsdOn);
#ifdef __MMI_KING_MOVIE__
static MAE_Ret _VideoPlayerSrvAutoSetPassword(VideoPlayerSrv_t *pVideoPlayerSrv);
#endif
MAE_Ret _VideoPlayerSrvRemapErrCode(ABL_VdoErrCode_e eErrCode);
MAE_Ret VideoPlayerSrvDecideOpenCapability(VideoPlayerSrv_t *pVideoPlayerSrv, ABL_VideoOpenPlayback_t *pAblOpenParam);
static void _VideoPlayerSrvRemapDataInfo(VideoPlayerSrvDataInfo_t *pDataInfo, ABL_VdoInfo_t *pVdoInfo);
static VideoPlayerSrvErrCode_e _VideoPlayerSrvRemap2ApErrCode(MAE_Ret eErrCode);
static VideoPlayerSrvErrCode_e _VideoPlayerSrvRemap2ApErrCodeByNotifyErrType(ABL_VdoErrorType_e eErrType);
static VideoPlayerSrvErrCode_e _VideoPlayerSrvRemap2ApErrCodeByCmdType(VideoPlayerSrv_t * pVideoPlayerSrv, MAE_Ret eErrCode);
static MAE_Ret _VideoPlayerSrvRequestSubject(VideoPlayerSrv_t *pVideoPlayerSrv);
static void _VideoPlayerSrvReleaseSubject(VideoPlayerSrv_t *pVideoPlayerSrv);
#ifdef __MMI_OMA_DRM_V1__
static MAE_Ret _VideoPlayerSrvCheckDrmRight(VideoPlayerSrv_t *pVideoPlayerSrv, VideoPlayerSrvReqEvt_t *pReq);
static MAE_Ret _VideoPlayerSrvConsumeDrmRight(VideoPlayerSrv_t *pVideoPlayerSrv, VideoPlayerSrvReqEvt_t *pReq);
#endif
static ABL_VdoRotateAngle_e _VideoPlayerSrvConvertToABLRotateAngle(MediaSrvAngle_e eRotateAngle);
static MmlVideoRotationAngle_e _VideoPlayerSrvConvertToMmlRotateAngle(MediaSrvAngle_e eRotateAngle);
//static ABL_VdoPlaySpeed_e _VideoPlayerSrvConvertToABLPlaySpeed(VideoPlayerSrvSpeed_e ePlaySpeed);
static MmlVideoFormat_e _VideoPlayerSrvConvertToMmlFormat(MediaSrvMimeType_e eMimeType);
static MediaSrvMimeType_e _VideoPlayerSrvConvertToMimeType(esl_VdoFormat_e eFormat);
static MAE_Ret _VideoPlayerSrvDecideVideoRegion(VideoPlayerSrvWindMode_e eWindowMode, VideoPlayerSrvDataInfo_t *pVdoInfo, Rect_t pWindowRegion, Rect_t *pVideoRegion);
static MAE_Ret _VideoPlayerSrvDecideRotateAngle(MediaSrvAngle_e eRotateAngle, MediaSrvAngle_e *pFinalAngle);
static VideoPlayerSrvPlayType_e _VideoPlayerSrvDecideEvtPlayType( VideoPlayerSrv_t *pVideoPlayerSrv);
static MAE_Ret _VideoPlayerSrvSetEvtHandleFunc( VideoPlayerSrvReqEvt_t *pReq, VideoPlayerSrvPlayType_e ePlayType);
MAE_Ret _VideoPlayerSrvResetCurrPlayParameter( VideoPlayerSrv_t *pVideoPlayerSrv);
static boolean _VideoPlayerSrvIsPlayNext( VideoPlayerSrv_t *pVideoPlayerSrv, VideoPlayerSrvReqEvt_t *pReq);
/************************************************************************/
/*  VideoPlayer Service Callback                                        */
/************************************************************************/
void _VideoPlayerSrvOpenCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvCloseCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvPlayCmnCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvStopCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvPauseCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvResumeCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvSeekStartCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvSeekStopCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvGetFileInfoCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvGetInfoWithoutOpenCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvGetInfoSyncCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvSetWindSizeCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvGetFirstFrameStartCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvGetFirstFrameStopCb(u16 nSenderID, u32 nUserValue, ABL_VdoErrCode_e eErrCode, ABL_VdoInfo_t *pVdoInfo);
void _VideoPlayerSrvTempFileCb(void *pUser, void *pInfo);

//Related to Notify CB
void _VideoPlayerSrvNotifyCb(u32 nCusData, void *pNotifyInfo);
void _VideoPlayerSrvResMgrNotifyCb(u32 nCusData, void *pNotifyInfo);

/************************************************************************/
/* VideoPlayer Service Video Req                                          */
/************************************************************************/
static MAE_Ret _VideoPlayerSrvHandleVdoOpenReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoOpenRawReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoOpenStreamReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoCloseReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoPlayReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoPauseReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoResumeReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoStopReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoSeekStartReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoSeekStopReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoGetInfoReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoGetFrameStartReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleVdoGetFrameStopReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
static MAE_Ret _VideoPlayerSrvHandleSetWindSizeReq(VideoPlayerSrv_t * pVideoPlayerSrv, SrvEvtHdl_t pSrvEvtHdl);
/************************************************************************/
/* VideoPlayer Service State Handler                                          */
/************************************************************************/
static BaseSrvRet_e _VideoPlayerSrvIdleHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);
static BaseSrvRet_e _VideoPlayerSrvActiveHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);
static BaseSrvRet_e _VideoPlayerSrvOpeningHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);
static BaseSrvRet_e _VideoPlayerSrvOpenHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);
static BaseSrvRet_e _VideoPlayerSrvPreSeekHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);
static BaseSrvRet_e _VideoPlayerSrvPlayHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);
static BaseSrvRet_e _VideoPlayerSrvPauseHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);
static BaseSrvRet_e _VideoPlayerSrvSeekHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);
static BaseSrvRet_e _VideoPlayerSrvGetFrameHandler(BaseSrvHdl_t pBaseSrvHdl, SrvSMHandle_e eSMHandleType, SrvEvtHdl_t pSrvEvtHdl, u32 nCusData);

/************************************************************************/
/* Private Function Declarations                                         */
/************************************************************************/
static MAE_Ret _VideoPlayerSrvConstructor(IBaseSrv *pBaseSrv);
static MAE_Ret _VideoPlayerSrvDestructor(IBaseSrv *pBaseSrv);
static MAE_Ret _VideoPlayerSrvHandleEvt(IBaseSrv *pBaseSrv, MAE_EventId nEventId, u32 nParam1, u32 nParam2);
bool _VideoPlayerSrvQueueCheckAbort (BaseSrvHdl_t pBaseSrvHdl, SrvEvtHdl_t pCurEvtHdl, SrvEvtHdl_t pWaitEvtHdl);
BaseSrvRet_e _VideoPlayerSrvQueueFetchEvt(BaseSrvHdl_t pBaseSrvHdl, SrvEvtHdl_t pCurEvtHdl);
#endif /* __MMI_VIDEOPLAYERSRV_PRIV_H__ */
