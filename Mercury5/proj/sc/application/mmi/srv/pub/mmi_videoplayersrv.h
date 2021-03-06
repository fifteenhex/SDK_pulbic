/**
* @file mmi_VideoPlayerSrv.h
*
* State Machine Service - VIDEOPLAYERSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_VIDEOPLAYERSRV
*
*
* @version $Id: mmi_videoplayersrv.h 38798 2009-08-28 05:50:57Z lih.wang $
*/
#ifndef __MMI_VIDEOPLAYERSRV_H__
#define __MMI_VIDEOPLAYERSRV_H__

#include "mmi_mae_bitmap.h"
#include "mmi_mae_graphic_types.h"
#include "mmi_mae_graphic_forward.h"
#include "mmi_mae_common_def.h"
#include "mmi_mediasrv_common.h"
#include "mmi_videoplayerapp_cfg.h"

#ifdef __MMI_KING_MOVIE__
#define VDOPLAYERSRV_BYTE_SIZE_FOR_ENCRYPTION (2*1024)
#endif

#ifdef __MMI_STEREO_VIDEO__
#define VDOPLAYERSRV_DEFAULT_STEREO_DEPTH_LEVEL 4
#endif

typedef enum VideoPlayerSrvState_e_
{
    VIDEOPLAYERSRV_STATE_IDLE =0,
    VIDEOPLAYERSRV_STATE_PLAY,
    VIDEOPLAYERSRV_STATE_PAUSE,
    VIDEOPLAYERSRV_STATE_ACTIVE
} VideoPlayerSrvState_e;

typedef enum
{
    VIDEOPLAYERSRV_SEEKMODE_PRECISION = 0,
    VIDEOPLAYERSRV_SEEKMODE_FAST
}VideoPlayerSrvSeekMode_e;

typedef enum
{
    VIDEOPLAYERSRV_WIND_NORMAL_RATIO_KEEP = 0,
    VIDEOPLAYERSRV_WIND_NORMAL_RATIO_NOT_KEEP,
    VIDEOPLAYERSRV_WIND_STRETCH_RATIO_KEEP,
    VIDEOPLAYERSRV_WIND_STRETCH_RATIO_NOT_KEEP
}VideoPlayerSrvWindMode_e;

typedef enum
{
    VIDEOPLAYERSRV_SEEKSTART =0,
    VIDEOPLAYERSRV_SEEKSTOP
}VideoPlayerSrvSeekStatus_e;

typedef enum
{
    VIDEOPLAYERSRV_SETWIND_START =0,
    VIDEOPLAYERSRV_SETWIND_STOP
}VideoPlayerSrvSetWindStatus_e;

typedef enum
{
    VIDEOPLAYERSRV_REBUFFER_START =0,
    VIDEOPLAYERSRV_REBUFFER_END,
    VIDEOPLAYERSRV_REBUFFER_PROGRESS,
}VideoPlayerSrvBufferingStatus_e;

typedef enum
{
    VIDEOPLAYERSRV_PROG_PLAYBACK =0,
    VIDEOPLAYERSRV_PROG_DOWNLOAD,
    VIDEOPLAYERSRV_PROG_PLAYEND
}VideoPlayerSrvProgressStatus_e;

typedef enum
{
    VIDEOPLAYERSRV_ERR_OK =0,
    VIDEOPLAYERSRV_ERR_PLAY_ERR,
    VIDEOPLAYERSRV_ERR_PAUSE_ERR,
    VIDEOPLAYERSRV_ERR_STOP_ERR,
    VIDEOPLAYERSRV_ERR_SEEK_ERR,
    VIDEOPLAYERSRV_ERR_CANCEL_SEEK_ERR,
    VIDEOPLAYERSRV_ERR_GETFRAME_ERR,
    VIDEOPLAYERSRV_ERR_CANCEL_GETFRAME_ERR,
    VIDEOPLAYERSRV_ERR_GETINFO_ERR,
    VIDEOPLAYERSRV_ERR_SETWIND_ERR,
    VIDEOPLAYERSRV_ERR_DOWNLOAD_ERR,
    VIDEOPLAYERSRV_ERR_DOWNLOAD_CARD_FULL,
    VIDEOPLAYERSRV_ERR_FORMAT_NOT_SUPPORT,
    VIDEOPLAYERSRV_ERR_NO_MEMORY,
    VIDEOPLAYERSRV_ERR_CONFLICT_OPP,
    VIDEOPLAYERSRV_ERR_CONFLICT_BT_ON,
    VIDEOPLAYERSRV_ERR_LICENSE_NOT_EXIST,
    VIDEOPLAYERSRV_ERR_LICENSE_MISMATCH,
    VIDEOPLAYERSRV_ERR_PASSWORD_MISMATCH,
    VIDEOPLAYERSRV_ERR_DRM_RIGHTS_INVALID,
    VIDEOPLAYERSRV_ERR_DRM_RIGHTS_NEED_INSTALL,
#ifdef __MMI_STEREO_VIDEO__
    VIDEOPLAYERSRV_ERR_SET_STEREO_TYPE_ERR,
    VIDEOPLAYERSRV_ERR_SET_DEPTH_ERR,
#endif
    VIDEOPLAYERSRV_ERR_UNKNOW
}VideoPlayerSrvErrCode_e;

typedef enum
{
    VIDEOPLAYERSRV_STREAMING_MODE_FILE = 0,
    VIDEOPLAYERSRV_STREAMING_MODE_MEMORY,
    VIDEOPLAYERSRV_STREAMING_MODE_UNKNOWN,
    VIDEOPLAYERSRV_STREAMING_MODE_NUM = VIDEOPLAYERSRV_STREAMING_MODE_UNKNOWN
} VideoPlayerSrvStreamingMode_e;

typedef enum
{
    VIDEOPLAYERSRV_SEEK_UNSEEKABLE = 0,
    VIDEOPLAYERSRV_SEEK_SEEKABLE,
    VIDEOPLAYERSRV_SEEK_TAKE_TIME,
    VIDEOPLAYERSRV_SEEK_UNKNOWN
} VideoPlayerSrvSeekable_e;

typedef enum
{
    VIDEOPLAYERSRV_PSPEED_0_5X = 0,
    VIDEOPLAYERSRV_PSPEED_1X,
    VIDEOPLAYERSRV_PSPEED_2X,
    VIDEOPLAYERSRV_PSPEED_4X
} VideoPlayerSrvPlaySpeed_e;

typedef enum
{
    VIDEOPLAYERSRV_STREAM_PROG__NOT_STARTED = 0,
    VIDEOPLAYERSRV_STREAM_PROG__PARTIAL,
    VIDEOPLAYERSRV_STREAM_PROG__COMPLETE,
    VIDEOPLAYERSRV_STREAM_PROG__UNKNOWN,
    VIDEOPLAYERSRV_STREAM_PROG__NUM = VIDEOPLAYERSRV_STREAM_PROG__UNKNOWN
} VideoPlayerSrvStreamProgress_e;

#ifdef __MMI_STEREO_VIDEO__
typedef enum
{
    VIDEOPLAYERSRV_CONFIGURATIONTYPE_DISPLAYCALIBRATION  = 0,       ///< Display calibration
    VIDEOPLAYERSRV_CONFIGURATIONTYPE_STEREO_TYPE,                   ///< Playback 3D image
    VIDEOPLAYERSRV_CONFIGURATIONTYPE_STEREO_DEPTH,                  ///< LR-Depth
    VIDEOPLAYERSRV_CONFIGURATIONTYPE_DISPLAYCALIBRATION_MAX         ///< Get maximum display calibration values
} VideoPlayerConfigurationType_e;

typedef enum
{
    VIDEOPLAYERSRV_IMAGE_STEREOTYPE_NONE = 0,
    VIDEOPLAYERSRV_IMAGE_STEREOTYPE_RED_CYAN,
    VIDEOPLAYERSRV_IMAGE_STEREOTYPE_LEFT_RIGHT,
    VIDEOPLAYERSRV_IMAGE_STEREOTYPE_UNKNOWN,
    VIDEOPLAYERSRV_IMAGE_STEREOTYPE_NUM = VIDEOPLAYERSRV_IMAGE_STEREOTYPE_UNKNOWN
} VideoPlayerImageStereoType_e;
#endif

typedef enum
{
    VIDEOPLAYERSRV_CONNECTION_TYPE_WIFI,
    VIDEOPLAYERSRV_CONNECTION_TYPE_GPRS_SIM_MASTER,
    VIDEOPLAYERSRV_CONNECTION_TYPE_GPRS_SIM_SLAVE,
    VIDEOPLAYERSRV_CONNECTION_TYPE_UNKNOWN,
    VIDEOPLAYERSRV_CONNECTION_TYPE_NUM = VIDEOPLAYERSRV_CONNECTION_TYPE_UNKNOWN
} VideoPlayerSrvConnectionType_e;

typedef struct VideoPlayerSrvSeekStatusInfo_t_
{
    VideoPlayerSrvSeekStatus_e eSeekStatus;
    u32 nCurrPos;
} VideoPlayerSrvSeekStatusInfo_t;

typedef struct VideoPlayerSrvPlaySpeedInfo_t_
{
    MAE_Ret eErrorCode;
} VideoPlayerSrvPlaySpeedInfo_t;

typedef struct VideoPlayerSrvWindSizeInfo_t_
{
    VideoPlayerSrvSetWindStatus_e eSetWindStatus;
    Rect_t tWindRegion;
    MediaSrvAngle_e eWindowAngle;
    VideoPlayerSrvWindMode_e eWindowMode;
} VideoPlayerSrvWindSizeInfo_t;

typedef struct VideoPlayerSrvBufferingProgress_t_
{
    u32 nTotalSize;
    u32 nCurrentSize;
} VideoPlayerSrvBufferingProgress_t;

typedef struct VideoPlayerSrvBufferingInfo_t_
{
    VideoPlayerSrvBufferingStatus_e eStatus;
    union
    {
        VideoPlayerSrvBufferingProgress_t tBufferingProgress;
    } uInfo;
} VideoPlayerSrvBufferingInfo_t;

typedef struct VideoPlayerSrvDownloadInfo_t_
{
    u32 nStartPosition;
    u32 nEndPosition;
} VideoPlayerSrvDownloadInfo_t;

typedef struct VideoPlayerSrvProgressInfo_t_
{
    VideoPlayerSrvProgressStatus_e eStatus;
    union
    {
        VideoPlayerSrvDownloadInfo_t tDownloadInfo;
        u32 nTickPosition;
    } uInfo;
} VideoPlayerSrvProgressInfo_t;

typedef struct VideoPlayerSrvErrorInfo_t_
{
    VideoPlayerSrvErrCode_e eErrorCode;
} VideoPlayerSrvErrorInfo_t;

#ifdef __MMI_STEREO_VIDEO__
typedef struct VideoPlayerSrvSetConfigInfo_t_
{
    VideoPlayerSrvErrCode_e eErrorCode;
} VideoPlayerSrvSetConfigInfo_t;
#endif

typedef struct VideoPlayerSrvInterruptInfo_t_
{
    MediaSrvInterruptStatus_e eInterruptEvt;
} VideoPlayerSrvInterruptInfo_t;

typedef struct VideoPlayerSrvFirstFrameInfo_t_
{
    IBitmap *pBitmap;
} VideoPlayerSrvFirstFrameInfo_t;

typedef struct VideoPlayerSrvPlayStatusInfo_t_
{
    VideoPlayerSrvState_e ePlayState;
} VideoPlayerSrvPlayStatusInfo_t;

typedef struct VideoPlayerSrvDataInfo_t_
{
    u32 nTotalTime;   /**< Video play total time */
    u32 nSampleRate;  /**< This media's audio sample rate */
    u32 nBitRate;     /**< This media's Video bit rate */
    MediaSrvMimeType_e eFormat;      /**< Video Mime type */
    boolean bStereo;      /**< stereo(true) or mono(false) */
    VideoPlayerSrvSeekable_e eSeekable;    /**< Video seek availability*/
    VideoPlayerSrvPlaySpeed_e eMaxSpeed;    /**< Video playback support max speed */
    MediaSrvVdoCodec_e eVdoCodec;   /** < Video codec type*/
    u16 nHeight;      /**< Video resolution height */
    u16 nWidth;       /**< Video resolution width */
#ifdef __MMI_STEREO_VIDEO__
    VideoPlayerImageStereoType_e eVideoStereoType;
    boolean bDepthAdjust;
#endif
} VideoPlayerSrvDataInfo_t;

typedef struct VideoPlayerSrvStreamInfo_t_
{
    VideoPlayerSrvStreamProgress_e eProgress;
} VideoPlayerSrvStreamInfo_t;

typedef struct VideoPlayerSrvTempFileInfo_t_
{
    VideoPlayerSrvErrCode_e eErrorCode;
} VideoPlayerSrvTempFileInfo_t;

#ifdef __MMI_STEREO_VIDEO__
typedef struct
{
    u32 nHandle;           ///< 32-bit playback handle
    VideoPlayerImageStereoType_e eImageStereoType;  ///< Image stereo types
} VideoPlayerSetPlayback3D_t;

typedef struct
{
    VideoPlayerConfigurationType_e eConfigurationType;    ///< Specify which type of setting to be configured
    union
    {
       VideoPlayerSetPlayback3D_t tSetPlayback3D;		 ///< Used with 'VIDEO_CONFIGURATIONTYPE_3D'
    } uParam;
} VideoPlayerSetConfiguration_t;
#endif

typedef void *VideoSrvHandle_t;
typedef u8  VideoPlayerSrvDolby_e;

typedef void (*VideoPlayerSrvSeekStatusCb)(void *pThis, u32 nCusData, VideoPlayerSrvSeekStatusInfo_t *pRspInfo);
//typedef void (*VideoPlayerSrvPlaySpeedCb)(void *pThis, u32 nCusData, VideoPlayerSrvPlaySpeedInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvWindowSizeCb)(void *pThis, u32 nCusData, VideoPlayerSrvWindSizeInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvBufferingStatusCb)(void *pThis, u32 nCusData, VideoPlayerSrvBufferingInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvPlayProgressCb)(void *pThis, u32 nCusData, VideoPlayerSrvProgressInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvErrorCb)(void *pThis, u32 nCusData, VideoPlayerSrvErrorInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvInterruptCb)(void *pThis, u32 nCusData, VideoPlayerSrvInterruptInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvFirstFrameCb)(void *pThis, u32 nCusData, VideoPlayerSrvFirstFrameInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvPlayStatusCb)(void *pThis, u32 nCusData, VideoPlayerSrvPlayStatusInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvDataInfoCb)(void *pThis, u32 nCusData, VideoPlayerSrvDataInfo_t *pRspInfo);
typedef void (*VideoPlayerSrvTempFileProcessCb)(void *pThis, u32 nCusData, VideoPlayerSrvTempFileInfo_t *pRspInfo);
#ifdef __MMI_STEREO_VIDEO__
typedef void (*VideoPlayerSrvSetStereoConfigCmnCb)(void *pThis, u32 nCusData, VideoPlayerSrvSetConfigInfo_t *pRspInfo);
#endif
typedef s32 (*VideoPlayerSrvDownloadModuleCb)(s32 sMessageType, s32 sDataSize, void *pData); //Reference mdl_avp_streaming_interface.h

MAE_Ret VideoPlayerSrvCreate(VideoSrvHandle_t  *pVideoSrvHdl, u32 nAppInstance);
MAE_Ret VideoPlayerSrvDestroy(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvOpenSession(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvCloseSession(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvSetSeekMode(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvSeekMode_e eSeekMode);
MAE_Ret VideoPlayerSrvSetSeekDuration(VideoSrvHandle_t pVideoSrvHdl, u32 nSeekDuration);
MAE_Ret VideoPlayerSrvSetPosition(VideoSrvHandle_t pVideoSrvHdl, u32 nPosition);
MAE_Ret VideoPlayerSrvStartSeek(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvStopSeek(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvSetSeekStatusCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvSeekStatusCb pfnSeekStatusCb, u32 nCusData);
//MAE_Ret VideoPlayerSrvSetPlaySpeed(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvPlaySpeed_e ePlaySpeed);
//MAE_Ret VideoPlayerSrvSetPlaySpeedCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvPlaySpeedCb pfnPlaySpeedCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetWindowRegion(VideoSrvHandle_t pVideoSrvHdl, Rect_t tRegion);
MAE_Ret VideoPlayerSrvSetWindowAngle(VideoSrvHandle_t pVideoSrvHdl, MediaSrvAngle_e eWindowAngle);
MAE_Ret VideoPlayerSrvSetTempVolume(VideoSrvHandle_t pVideoSrvHdl, u8 nVolume);
MAE_Ret VideoPlayerSrvSetWindowMode(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvWindMode_e eWindowMode);
MAE_Ret VideoPlayerSrvStartSetWindow(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvSetWindowSizeCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvWindowSizeCb pfnWindowChangeCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetBufferingStatusCb(VideoSrvHandle_t pVideoSrvHdl,VideoPlayerSrvBufferingStatusCb pfnBufferingStatusCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetPlayProgressCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvPlayProgressCb pfnPlayProgressCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetErrorCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvErrorCb pfnErrorCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetInterruptCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvInterruptCb pfnInterruptCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetVolume(VideoSrvHandle_t pVideoSrvHdl, u8 nVolume);
MAE_Ret VideoPlayerSrvSetDolby(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvDolby_e eDolbyMode);
#ifdef __MMI_KING_MOVIE__
MAE_Ret VideoPlayerSrvSetPassword(VideoSrvHandle_t pVideoSrvHdl, const char *pPassword);
#endif
MAE_Ret VideoPlayerSrvSetConnectionType(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvConnectionType_e eConnectionType);
MAE_Ret VideoPlayerSrvSetStreamingMode(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvStreamingMode_e eStreamingMode);
MAE_Ret VideoPlayerSrvGetDolby(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvDolby_e *pDolbyMode);
MAE_Ret VideoPlayerSrvSetDataByUrl (VideoSrvHandle_t pVideoSrvHdl, MAE_WChar *pURL);
MAE_Ret VideoPlayerSrvSetDataByBuffer (VideoSrvHandle_t pVideoSrvHdl, void *pDataBuffer, u32 nBufferSize);
MAE_Ret VideoPlayerSrvSetDataFormat (VideoSrvHandle_t pVideoSrvHdl, MediaSrvMimeType_e eMimeType);
MAE_Ret VideoPlayerSrvSetExtInfoBuffer (VideoSrvHandle_t pVideoSrvHdl, void *pInfoBuffer, u32 nBufferSize);
//MAE_Ret VideoPlayerSrvSetLoopPlay (VideoSrvHandle_t pVideoSrvHdl, boolean bLoopPlay);
MAE_Ret VideoPlayerSrvPlay (VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvSetPlayStatusCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvPlayStatusCb pfnPlayStatusCb, u32 nCusData);
MAE_Ret VideoPlayerSrvStop(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvResume(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvPause(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvStartGetDataFirstFrame (VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvStopGetDataFirstFrame (VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvSetDataFirstFrameCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvFirstFrameCb pfnDataFirstFrameCb, u32 nCusData);
MAE_Ret VideoPlayerSrvStartGetDataInfo (VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvSetDataInfoCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvDataInfoCb pfnDataInfoCb, u32 nCusData);
#ifdef __MMI_STEREO_VIDEO__
MAE_Ret VideoPlayerSrvSetStereoType(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerImageStereoType_e eStereoType);
MAE_Ret VideoPlayerSrvSetStereoTypeCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvSetStereoConfigCmnCb pfnSetStereoCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetDepthCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvSetStereoConfigCmnCb pfnSetDepthCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetDepth(VideoSrvHandle_t pVideoSrvHdl, u32 nDepth);
MAE_Ret VideoPlayerSrvUpdateStereoType(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerImageStereoType_e eStereoType);
#endif
MAE_Ret VideoPlayerSrvGetDataInfoSync(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvDataInfo_t *pDataInfo);
MAE_Ret VideoPlayerSrvSetDownloadInterface(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvDownloadModuleCb pfnDownloadItf);
MAE_Ret VideoPlayerSrvGetStatus (VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvState_e *pStatus);
MAE_Ret VideoPlayerSrvGetStreamInfo(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvStreamInfo_t *pStreamInfo);
MAE_Ret VideoPlayerSrvSetTempFileProcessCb(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSrvTempFileProcessCb pfnTempFileCb, u32 nCusData);
MAE_Ret VideoPlayerSrvSetDestByUrl(VideoSrvHandle_t pVideoSrvHdl, MAE_WChar *pDestUrl);
MAE_Ret VideoPlayerSrvCopyTempFile(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvMoveTempFile(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvAbortTempFileOperation(VideoSrvHandle_t pVideoSrvHdl);
MAE_Ret VideoPlayerSrvInitAudio(VideoSrvHandle_t pVideoSrvHdl, boolean bIsInitAudio);
boolean VideoPlayerSrvQueryA2DPSupport(boolean *pUserA2dpSupported);
#ifdef __MMI_STEREO_VIDEO__
MAE_Ret VideoPlayerSrvSetConfiguration(VideoSrvHandle_t pVideoSrvHdl, VideoPlayerSetConfiguration_t *pVdoConfig);
#endif

#endif /* __MMI_VIDEOPLAYERSRV_H__ */
