/**
* @file mmi_shortcutssrv.h
*
* Service without using State Machine - SHORTCUTSSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_SHORTCUTSSRV
* Interface Id: IID_SHORTCUTSSRV
*
* @version $Id$
*/
#ifndef __MMI_SHORTCUTSSRV_H__
#define __MMI_SHORTCUTSSRV_H__

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"
#include "mmi_shortcutssrv_cfg.h"
#include "mae_textlabel.h"
#include "mae_menulabel.h"
#include "mmi_common_lang.h"

#define SHORTCUTS_DISP_TEXT_MAX_LEN     85      /* MMI_PHB_NAME_LEN + MMI_PHB_NUMBER_LEN + 3[' ', '(', ')'] + 1['/0'] */

enum
{
    SHORTCUTS_NAVIKEY_UP
   ,SHORTCUTS_NAVIKEY_DOWN
#if !defined(__3D_UI_IDLE_MULTIPAGE__)
   ,SHORTCUTS_NAVIKEY_LEFT
   ,SHORTCUTS_NAVIKEY_RIGHT
#endif
   ,SHORTCUTS_NAVIKEY_TOTAL
};

enum
{
	SHORTCUTS_IDLESHORTCUT_ITEM1
	,SHORTCUTS_IDLESHORTCUT_ITEM2
	,SHORTCUTS_IDLESHORTCUT_ITEM3
	,SHORTCUTS_IDLESHORTCUT_ITEM4
	,SHORTCUTS_IDLESHORTCUT_ITEM5
	,SHORTCUTS_IDLESHORTCUT_TOTAL
};

enum
{
    SHORTCUTS_SOFTKEY_LEFT
   ,SHORTCUTS_SOFTKEY_MIDDLE
   ,SHORTCUTS_SOFTKEY_RIGHT
   ,SHORTCUTS_SOFTKEY_TOTAL
};

enum
{
    SHORTCUTS_NUMKEY_1
   ,SHORTCUTS_NUMKEY_2
   ,SHORTCUTS_NUMKEY_3
   ,SHORTCUTS_NUMKEY_4
   ,SHORTCUTS_NUMKEY_5
   ,SHORTCUTS_NUMKEY_6
   ,SHORTCUTS_NUMKEY_7
   ,SHORTCUTS_NUMKEY_8
   ,SHORTCUTS_NUMKEY_9
   ,SHORTCUTS_NUMKEY_TOTAL
};

enum
{
    SHORTCUTS_LIST_ITEM_01
   ,SHORTCUTS_LIST_ITEM_02
   ,SHORTCUTS_LIST_ITEM_03
   ,SHORTCUTS_LIST_ITEM_04
   ,SHORTCUTS_LIST_ITEM_05
   ,SHORTCUTS_LIST_ITEM_06
   ,SHORTCUTS_LIST_ITEM_07
   ,SHORTCUTS_LIST_ITEM_08
   ,SHORTCUTS_LIST_ITEM_09
   ,SHORTCUTS_LIST_ITEM_10
   ,SHORTCUTS_LIST_ITEM_11
   ,SHORTCUTS_LIST_ITEM_12
   ,SHORTCUTS_LIST_ITEM_TOTAL
};

typedef struct
{
    ShortcutsFuncId_e nFuncId;
    boolean bIsLocked;
    MAE_WChar wcDispText[SHORTCUTS_DISP_TEXT_MAX_LEN];
} ShortcutsKeyInfo_t;

typedef struct
{
    u32 nTextId;
    u32 nParam;
    MAE_ClsId nClsId;
#if defined( __3D_UI_MAINMENU__)||(__3D_UI_SHORTCUTAPP__)||(__3D_UI_IDLE_MULTIPAGE__)
    u32 nImageId;
#endif //__APP_MMI_IDLE_MENU_SHORTCUT__

} ShortcutsFuncInfo_t;

typedef struct
{
    ShortcutsFuncId_e nFuncId;
    u32 nImgId;
} ShortcutsFuncSKImgInfo_t;

typedef u8 ShortcutFuncInfo_e;
enum
{
    SHORTCUTS_FUNCINFO_TEXTID
   ,SHORTCUTS_FUNCINFO_PARAM
   ,SHORTCUTS_FUNCINFO_CLSID
   ,SHORTCUTS_FUNCINFO_IMAGEID
#ifdef __UI_STYLE_MMI_IFONE__
   ,SHORTCUTS_FUNCINFO_FOCUS_IMAGEID
#endif
};

typedef u8 ShortcutsKeyAssignStatus_e;
enum
{
    SHORTCUTS_ASSIGNSTATUS_NO_ASSIGN
   ,SHORTCUTS_ASSIGNSTATUS_ASSIGNED
   ,SHORTCUTS_ASSIGNSTATUS_UNCHANGABLE      ///< key is assigned, but can not change setting
   ,SHORTCUTS_ASSIGNSTATUS_NOT_HANDLE       ///< key is assigned, but can not handle by shortcuts
};

typedef u16 ShortcutsKeyType_e;
enum
{
    SHORTCUTS_KEYTYPE_NAVIKEY_UP = 0
   ,SHORTCUTS_KEYTYPE_NAVIKEY_DOWN
   ,SHORTCUTS_KEYTYPE_NAVIKEY_LEFT
   ,SHORTCUTS_KEYTYPE_NAVIKEY_RIGHT
   ,SHORTCUTS_KEYTYPE_SOFTKEY_LEFT
   ,SHORTCUTS_KEYTYPE_SOFTKEY_MIDDLE
   ,SHORTCUTS_KEYTYPE_SOFTKEY_RIGHT
   ,SHORTCUTS_KEYTYPE_NUMKEY_1
   ,SHORTCUTS_KEYTYPE_NUMKEY_2
   ,SHORTCUTS_KEYTYPE_NUMKEY_3
   ,SHORTCUTS_KEYTYPE_NUMKEY_4
   ,SHORTCUTS_KEYTYPE_NUMKEY_5
   ,SHORTCUTS_KEYTYPE_NUMKEY_6
   ,SHORTCUTS_KEYTYPE_NUMKEY_7
   ,SHORTCUTS_KEYTYPE_NUMKEY_8
   ,SHORTCUTS_KEYTYPE_NUMKEY_9
   ,SHORTCUTS_KEYTYPE_NUMKEY_STAR
   ,SHORTCUTS_KEYTYPE_NUMKEY_0
   ,SHORTCUTS_KEYTYPE_NUMKEY_HASH
   ,SHORTCUTS_KEYTYPE_IDLESHORTCUT_ITEM1
   ,SHORTCUTS_KEYTYPE_IDLESHORTCUT_ITEM2
   ,SHORTCUTS_KEYTYPE_IDLESHORTCUT_ITEM3
   ,SHORTCUTS_KEYTYPE_IDLESHORTCUT_ITEM4
   ,SHORTCUTS_KEYTYPE_IDLESHORTCUT_ITEM5 
   ,SHORTCUTS_KEYTYPE_LIST
   ,SHORTCUTS_KEYTYPE_TOTAL
};

/**
 * External Events
 */


/**
 * ISHORTCUTSSRV Interfaces
 */
#define INHERIT_ISHORTCUTSSRV(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*ReadKeyInfo)      ( IName * , ShortcutsKeyType_e nKey, ShortcutsKeyInfo_t *pKeyInfo);  \
    MAE_Ret     (*ReadNaviKeyInfo)      ( IName * , ShortcutsKeyType_e nKey, ShortcutsKeyInfo_t *pKeyInfo);  \
    MAE_Ret     (*ReadSoftKeyInfo)      ( IName * , ShortcutsKeyType_e nKey, ShortcutsKeyInfo_t *pKeyInfo);  \
    MAE_Ret     (*ReadNumKeyInfo)       ( IName * , ShortcutsKeyType_e nKey, ShortcutsKeyInfo_t *pKeyInfo);  \
    u16     (*ReadListInfo)     ( IName * , ShortcutsListInfo_t *pListInfo);  \
    MAE_Ret     (*WriteNaviKeyInfo)     ( IName * , ShortcutsKeyType_e nKey, ShortcutsNaviKeyInfo_t *pKeyInfo);  \
    MAE_Ret     (*WriteSoftKeyInfo)     ( IName * , ShortcutsKeyType_e nKey, ShortcutsSoftKeyInfo_t *pKeyInfo);  \
    MAE_Ret     (*WriteNumKeyInfo)      ( IName * , ShortcutsKeyType_e nKey, ShortcutsNumKeyInfo_t *pKeyInfo);  \
    MAE_Ret     (*WriteListInfo)        ( IName * , ShortcutsListInfo_t *pListInfo);  \
    MAE_Ret     (*GetKeyString)     ( IName * , u32 nKeyCode, MAE_WChar *pDispString);  \
    MAE_Ret     (*LaunchKeyShortcut)        ( IName * , u32 nKeyCode, u32 nLaunchByKeyCode, MAE_EventId nEventId);  \
    MAE_Ret     (*LaunchNaviKey)        ( IName * , u32 nKeyCode, u32 nLaunchByKeyCode, MAE_EventId nEventId);  \
    MAE_Ret     (*LaunchSoftKey)        ( IName * , u32 nKeyCode, u32 nLaunchByKeyCode, MAE_EventId nEventId);  \
    MAE_Ret     (*LaunchNumKey)     ( IName * , u32 nKeyCode, u32 nLaunchByKeyCode, MAE_EventId nEventId);  \
    MAE_Ret     (*LaunchListShortcut)       ( IName * , u8 nListIdx, ShortcutsListInfo_t *pListInfo, u32 nLaunchByKeyCode);  \
    MAE_Ret     (*LaunchAP)     ( IName * , MAE_ClsId nClsId, u32 nParam);  \
    MAE_Ret     (*LaunchFunc)       ( IName * , ShortcutsFuncId_e eFuncId, u32 nParam);  \
    MAE_Ret     (*LaunchFuncByHotKey)       ( IName * , ShortcutsFuncId_e eFuncId, u32 nParam);  \
    MAE_Ret     (*ConvertListItemString)        ( IName * , ShortcutsListInfo_t *pListInfo, MAE_WChar *pDispString);  \
    ShortcutsKeyAssignStatus_e      (*GetKeyAssignStatus)       ( IName * , u32 nKeyCode, MAE_EventId nEventId, ShortcutsFuncId_e *pFuncId);  \
    MAE_Ret     (*GetNumKeyTextId)      ( IName * , u32 nKeyCode, u16 *pTextId);  \
    MAE_Ret     (*GetFuncInfoById)      ( IName * , ShortcutsFuncId_e eFuncId, ShortcutFuncInfo_e eType, u32 *pInfo);  \
    MAE_Ret     (*GetSoftKeyImageId)        ( IName * , u32 nKeyCode, u32 *pImgId);  \
    MAE_Ret     (*LaunchAPwTransId)     ( IName * , MAE_ClsId nClsId, u32 nParam, u32 nEntryTransId, u32 nExitTransId);  \
    MAE_Ret     (*LaunchFuncwTransId)       ( IName * , ShortcutsFuncId_e eFuncId, u32 nParam, u32 nEntryTransId, u32 nExitTransId)

DEFINE_INTERFACE(ISHORTCUTSSRV);


#define ISHORTCUTSSRV_QueryInterface(pICntlr, id, pp, po)           GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->QueryInterface(pICntlr, id, pp, po)
#define ISHORTCUTSSRV_HandleEvent(pICntlr, e, p1, p2)               GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->HandleEvent(pICntlr, e, p1, p2)
/**
 ISHORTCUTSSRV_ReadKeyInfo
@brief      The interface is use to read the detail settings of IDLE navigation, soft, or numeric keys

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKey            SHORTCUTS_KEYTYPE_NAVIKEY_UP, SHORTCUTS_KEYTYPE_NAVIKEY_DOWN, SHORTCUTS_KEYTYPE_NAVIKEY_LEFT, SHORTCUTS_KEYTYPE_NAVIKEY_RIGHT, SHORTCUTS_KEYTYPE_SOFTKEY_LEFT, SHORTCUTS_KEYTYPE_SOFTKEY_MIDDLE, SHORTCUTS_KEYTYPE_SOFTKEY_RIGHT, SHORTCUTS_KEYTYPE_NUMKEY_1, SHORTCUTS_KEYTYPE_NUMKEY_2, ..., or SHORTCUTS_KEYTYPE_NUMKEY_9.
@param[out] pKeyInfo        Pointer of detail setting of IDLE navigation, soft, or numeric key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_ReadKeyInfo(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->ReadKeyInfo( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_ReadNaviKeyInfo
@brief      The interface is use to read the detail settings of IDLE navigation key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKey            SHORTCUTS_KEYTYPE_NAVIKEY_UP, SHORTCUTS_KEYTYPE_NAVIKEY_DOWN, SHORTCUTS_KEYTYPE_NAVIKEY_LEFT, or SHORTCUTS_KEYTYPE_NAVIKEY_RIGHT.
@param[out] pKeyInfo        Pointer of detail setting of IDLE navigation key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_ReadNaviKeyInfo(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->ReadNaviKeyInfo( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_ReadSoftKeyInfo
@brief      The interface is use to read the detail shortcut settings of IDLE soft key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKey            SHORTCUTS_KEYTYPE_SOFTKEY_LEFT, SHORTCUTS_KEYTYPE_SOFTKEY_MIDDLE, or SHORTCUTS_KEYTYPE_SOFTKEY_RIGHT.
@param[out] pKeyInfo        Pointer of detail shortcut settings of IDLE soft key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.

 */
#define ISHORTCUTSSRV_ReadSoftKeyInfo(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->ReadSoftKeyInfo( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_ReadNumKeyInfo
@brief      The interface is use to read the detail shortcut settings of IDLE numeric key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKey            SHORTCUTS_KEYTYPE_NUMKEY_1, SHORTCUTS_KEYTYPE_NUMKEY_2, ..., or  SHORTCUTS_KEYTYPE_NUMKEY_9.
@param[out] pKeyInfo        Pointer of detail shortcut settings of IDLE numeric key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_ReadNumKeyInfo(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->ReadNumKeyInfo( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_ReadListInfo
@brief      The interface is use to read the detail settings of whole Shortcuts List

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[out] pListInfo       Pointer of detail shortcut settings of whole Shortcuts List.

@return Total item number of Shortcuts List
 */
#define ISHORTCUTSSRV_ReadListInfo(pICntlr, p1) GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->ReadListInfo( pICntlr, p1)
/**
 ISHORTCUTSSRV_WriteNaviKeyInfo
@brief      The interface is use to write the detail settings of IDLE navigation key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKey            SHORTCUTS_KEYTYPE_NAVIKEY_UP, SHORTCUTS_KEYTYPE_NAVIKEY_DOWN, SHORTCUTS_KEYTYPE_NAVIKEY_LEFT, or SHORTCUTS_KEYTYPE_NAVIKEY_RIGHT.
@param[in]  pKeyInfo        Pointer of detail shortcut settings of IDLE navigation key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_WriteNaviKeyInfo(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->WriteNaviKeyInfo( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_WriteSoftKeyInfo
@brief      The interface is use to write the detail shortcut settings of IDLE soft key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKey            SHORTCUTS_KEYTYPE_SOFTKEY_LEFT, SHORTCUTS_KEYTYPE_SOFTKEY_MIDDLE, or SHORTCUTS_KEYTYPE_SOFTKEY_RIGHT.
@param[in]  pKeyInfo        Pointer of detail shortcut settings of IDLE soft key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_WriteSoftKeyInfo(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->WriteSoftKeyInfo( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_WriteNumKeyInfo
@brief      The interface is use to write the detail shortcut settings of IDLE numeric key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKey            SHORTCUTS_KEYTYPE_NUMKEY_1, SHORTCUTS_KEYTYPE_NUMKEY_2, ..., or  SHORTCUTS_KEYTYPE_NUMKEY_9.
@param[in]  pKeyInfo        Pointer of detail shortcut settings of IDLE numeric key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_WriteNumKeyInfo(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->WriteNumKeyInfo( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_WriteListInfo
@brief      The interface is use to write the detail shortcut settings of Shortcuts List

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  pListInfo       Pointer of detail shortcut settings of Shortcuts List.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_WriteListInfo(pICntlr, p1)    GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->WriteListInfo( pICntlr, p1)
/**
 ISHORTCUTSSRV_GetKeyString
@brief      The interface is use to get the display string of given shortcut key type

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKeyCode        MAE_KEY_UP, MAE_KEY_DOWN, MAE_KEY_LEFT, MAE_KEY_RIGHT,
                            MAE_KEY_SKLEFT, MAE_KEY_SKRIGHT, MAE_KEY_1, ..., or MAE_KEY_9.
@param[out] pDispString     Pointer of MAE_WChar for display string.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_GetKeyString(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->GetKeyString( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_LaunchKeyShortcut
@brief  The interface is use to launch the assigned application of given shortcut key type

@param[in] pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] nKeyCode         MAE_KEY_UP, MAE_KEY_DOWN, MAE_KEY_LEFT, MAE_KEY_RIGHT,
                            MAE_KEY_SKLEFT, MAE_KEY_SKRIGHT, MAE_KEY_1, ..., or MAE_KEY_9.
@param[in] nLaunchByKeyCode MAE_KEY_ACTION, MAE_KEY_SEND, or MAE_KEY_SEND2.
@param[in] nEventId         MAE_EVT_KEY_PRESS, or MAE_EVT_KEY_LONGPRESS.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchKeyShortcut(pICntlr, p1, p2, p3)    GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchKeyShortcut( pICntlr, p1, p2, p3)
/**
 ISHORTCUTSSRV_LaunchNaviKey
@brief  The interface is use to launch the assigned application of given navigation key type

@param[in] pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] nKeyCode         MAE_KEY_UP, MAE_KEY_DOWN, MAE_KEY_LEFT, MAE_KEY_RIGHT.
@param[in] nLaunchByKeyCode MAE_KEY_ACTION, MAE_KEY_SEND, or MAE_KEY_SEND2.
@param[in] nEventId         MAE_EVT_KEY_PRESS, or MAE_EVT_KEY_LONGPRESS.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchNaviKey(pICntlr, p1, p2, p3)    GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchNaviKey( pICntlr, p1, p2, p3)
/**
 ISHORTCUTSSRV_LaunchSoftKey
@brief  The interface is use to launch the assigned application of given soft key type

@param[in] pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] nKeyCode         MAE_KEY_SKLEFT, MAE_KEY_ACTION, MAE_KEY_SKRIGHT.
@param[in] nLaunchByKeyCode MAE_KEY_ACTION, MAE_KEY_SEND, or MAE_KEY_SEND2.
@param[in] nEventId         MAE_EVT_KEY_PRESS, or MAE_EVT_KEY_LONGPRESS.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchSoftKey(pICntlr, p1, p2, p3)    GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchSoftKey( pICntlr, p1, p2, p3)
/**
 ISHORTCUTSSRV_LaunchNumKey
@brief  The interface is use to launch the assigned application of given numeric key type

@param[in] pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] nKeyCode         MAE_KEY_1, MAE_KEY_2, ..., MAE_KEY_9, MAE_KEY_0, MAE_KEY_STAR, or MAE_KEY_HASH.
@param[in] nLaunchByKeyCode MAE_KEY_ACTION, MAE_KEY_SEND, or MAE_KEY_SEND2.;
@param[in] nEventId         MAE_EVT_KEY_PRESS, or MAE_EVT_KEY_LONGPRESS.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchNumKey(pICntlr, p1, p2, p3) GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchNumKey( pICntlr, p1, p2, p3)
/**
 ISHORTCUTSSRV_LaunchListShortcut
@brief  The interface is use to launch the assigned application of given shortcut list index

@param[in]  pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] nListIdx         The index (0-base) in shortcuts list.
@param[in] pListInfo        Pointer of detail shortcut settings of whole Shortcuts List.
@param[in] nLaunchByKeyCode MAE_KEY_ACTION, MAE_KEY_SEND, or MAE_KEY_SEND2.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchListShortcut(pICntlr, p1, p2, p3)   GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchListShortcut( pICntlr, p1, p2, p3)
/**
 ISHORTCUTSSRV_LaunchAP
@brief  The interface is use to launch the AP according given class Id and parameter

@param[in] pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] nClsId           Class Id of AP.
@param[in] nParam           Parameter for launch specific AP.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchAP(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchAP( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_LaunchFunc
@brief  The interface is use to launch the AP according given shortcut function Id and parameter

@param[in]  pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] eFuncId          Shortcut function Id.
@param[in] nParam           Parameter for launch specific AP.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchFunc(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchFunc( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_LaunchFuncByHotKey
@brief  The interface is use to launch the AP according given shortcut function Id and parameter
@Applet is launched by hot key instead of applet.

@param[in] pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] eFuncId          Shortcut function Id.
@param[in] nParam           Parameter for launch specific AP.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchFuncByHotKey(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchFuncByHotKey( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_ConvertListItemString
@brief  The interface is use to convert stored shortcuts list item info into display string.

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  pListInfo       Pointer of detail shortcut settings of Shortcuts List.
@param[out] pDispString     Pointer of MAE_WChar to get converted display string.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_ConvertListItemString(pICntlr, p1, p2)    GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->ConvertListItemString( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_GetKeyAssignStatus
@brief  The interface is use to get key assign status

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKeyCode        MAE_KEY_UP, MAE_KEY_DOWN, MAE_KEY_LEFT, MAE_KEY_RIGHT, MAE_KEY_SKLEFT, MAE_KEY_ACTION, MAE_KEY_SKRIGHT,
                            MAE_KEY_1, MAE_KEY_2, ..., MAE_KEY_9, MAE_KEY_0, MAE_KEY_STAR, or MAE_KEY_HASH.
@param[in]  nEventId        MAE_EVT_KEY_PRESS, or MAE_EVT_KEY_LONGPRESS.
@param[out] pFuncId         Pointer of ShortcutsFuncId_e to get assigned shortcut function id.

@return ShortcutsKeyAssignStatus_e to get assign status.
 */
#define ISHORTCUTSSRV_GetKeyAssignStatus(pICntlr, p1, p2, p3)   GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->GetKeyAssignStatus( pICntlr, p1, p2, p3)
/**
 ISHORTCUTSSRV_GetNumKeyTextId
@brief  The interface is use to get text id of assigned numeric key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKeyCode        MAE_KEY_1, MAE_KEY_2, ..., MAE_KEY_9, MAE_KEY_0, MAE_KEY_STAR, or MAE_KEY_HASH.
@param[out] pTextId         Pointer of u16 to get text id of assigned numeric key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_GetNumKeyTextId(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->GetNumKeyTextId( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_GetFuncInfoById
@brief  The interface is use to get text id of assigned numeric key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  eFuncId         Shortcut function Id.
@param[in]  eType           ShortcutFuncInfo_e of info type.
@param[out] pInfo           Pointer of u32 to get value of given shortcut function id & info type.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_GetFuncInfoById(pICntlr, p1, p2, p3)  GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->GetFuncInfoById( pICntlr, p1, p2, p3)
/**
 ISHORTCUTSSRV_GetSoftKeyImageId
@brief  The interface is use to get image id of assigned soft key

@param[in]  pISHORTCUTSSRV  Pointer to the ISHORTCUTSSRV interface.
@param[in]  nKeyCode        MAE_KEY_SKLEFT, MAE_KEY_ACTION, MAE_KEY_SKRIGHT
@param[out] pImgId          Pointer of u32 to get image id of given soft key.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_GetSoftKeyImageId(pICntlr, p1, p2)    GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->GetSoftKeyImageId( pICntlr, p1, p2)
/**
 ISHORTCUTSSRV_LaunchAPwTransId
@brief  The interface is use to launch the AP with transition according given class Id and parameter

@param[in] pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] nClsId           Class Id of AP.
@param[in] nParam           Parameter for launch specific AP.
@param[in] nEntryTransId    Transition Id for entering AP.
@param[in] nExitTransId     Transition Id for exiting AP.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchAPwTransId(pICntlr, p1, p2, p3, p4) GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchAPwTransId( pICntlr, p1, p2, p3, p4)
/**
 ISHORTCUTSSRV_LaunchFuncwTransId
@brief  The interface is use to launch the AP according given shortcut function Id and parameter

@param[in] pISHORTCUTSSRV   Pointer to the ISHORTCUTSSRV interface.
@param[in] eFuncId          Shortcut function Id.
@param[in] nParam           Parameter for launch specific AP.
@param[in] nEntryTransId    Transition Id for entering AP.
@param[in] nExitTransId     Transition Id for exiting AP.

@return MAE_RET_SUCCESS     If successful.
@return MAE_RET_FAILED      If an error happen.
 */
#define ISHORTCUTSSRV_LaunchFuncwTransId(pICntlr, p1, p2, p3, p4)   GET_FUNCTBL((pICntlr), ISHORTCUTSSRV)->LaunchFuncwTransId( pICntlr, p1, p2, p3, p4)



/**
 * Functions
 */

void SHORTCUTSSRV_Init(void);

MAE_Ret SHORTCUTSSRV_New(MAE_ClsId id, void **ppObj);

#endif /* __MMI_SHORTCUTSSRV_H__ */
