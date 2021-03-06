/**
* @file mmi_shortcutsapp_priv.h
*
* State Machine Application - SHORTCUTSAPP
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_SHORTCUTSAPP
*
*
* @version $Id$
*/
#ifndef __MMI_SHORTCUTSAPP_PRIV_H__
#define __MMI_SHORTCUTSAPP_PRIV_H__

#include "mmi_baseapplet.h"
#include "mmi_shortcutsapp.h"
#include "mmi_shortcutssrv.h"
#include "mmi_shortcutsapp_custom.h"
#include "mmi_launcher_phb.h"
#include "mmi_launcher_shortcut.h"
#include "mmi_base_util.h"
#include "mmi_srv_header.h"
#include "mmi_UrlSrvUtilUrl.h"
#include "mmi_UrlSrvClientHelper.h"
#include "mmi_common_vtm.h"
#include "mmi_shortcutsapp_id.h"
#include "shortcutsapp_resource.h"


#define SHORTCUTS_INFO_TIMER    2000
#define SHORTCUTS_DONE_TIMER    1000

#ifdef __3D_UI_SHORTCUTAPP__
#define SHORTCUT_START_ANI_DELAY_TIMER (30)
#define SHORTCUT_START_ANI_TIMER (3)
#define SHORTCUTS_SELF_CLOSE_TIMER 5000
#endif

#define cSHORTCUTSAPP_MODE_ShortcutsApp                     0
#define cSHORTCUTSAPP_MODE_Idle                         1
#define cSHORTCUTSAPP_MODE_Init                         2
#define cSHORTCUTSAPP_MODE_Active                       3
#define cSHORTCUTSAPP_MODE_Active_Shortcuts                   4
#define cSHORTCUTSAPP_MODE_Active_Shortcuts_ShowList              5
#define cSHORTCUTSAPP_MODE_Active_Shortcuts_ChangeOrder             6
#define cSHORTCUTSAPP_MODE_Active_Shortcuts_ChangeOrder_DisplayList       7
#define cSHORTCUTSAPP_MODE_Active_Shortcuts_ChangeOrder_Mark          8
#define cSHORTCUTSAPP_MODE_Active_Shortcuts_Delete                9
#define cSHORTCUTSAPP_MODE_Active_KeyAssignment                 10
#define cSHORTCUTSAPP_MODE_Active_KeyAssignment_MainList            11
#define cSHORTCUTSAPP_MODE_Active_KeyAssignment_NavigationKeys          12
#define cSHORTCUTSAPP_MODE_Active_KeyAssignment_NumericKeys           13
#define cSHORTCUTSAPP_MODE_Active_KeyAssignment_FunctionsMenu         14
#define cSHORTCUTSAPP_MODE_Active_AssignDynamicLink               15
#define cSHORTCUTSAPP_MODE_Active_AssignDynamicLink_AvailableShortcuts      16
#define cSHORTCUTSAPP_MODE_Active_AssignDynamicLink_ReplaceDialog       17
#define cSHORTCUTSAPP_MODE_Active_AssignDynamicLink_ReplaceList         18
#define cSHORTCUTSAPP_MODE_Active_AssignDynamicLink_AssignAsNumericKey      19
#define cSHORTCUTSAPP_MODE_Active_MainMenuSetting               20
#define cSHORTCUTSAPP_MODE_AddFunction                      21
#define cSHORTCUTSAPP_MODE_Suspend                        22
#define cSHORTCUTSAPP_MODE_Stop                         23

enum
{
    SHORTCUTS_IMG_CACHE_APPLICATION = 0,
    SHORTCUTS_IMG_CACHE_NUMBER,
    SHORTCUTS_IMG_CACHE_ORDER,
    SHORTCUTS_IMG_CACHE_TOTAL
};

enum
{
    SHORTCUTS_APPLIST_STYLE_RADIO = 0,
    SHORTCUTS_APPLIST_STYLE_TEXT,
    SHORTCUTS_APPLIST_STYLE_ICON,
    SHORTCUTS_APPLIST_STYLE_TOTAL
};

typedef struct
{
    MenuItemId_e nMenuId;
    ShortcutsKeyType_e nKeyType;
} ShortcutKeysMap_t;

const static u32 ShortcutsImgCacheIdTbl[SHORTCUTS_IMG_CACHE_TOTAL] =
{
    COMMON_IMG_SHORTCUTS_APPLICATION,
    COMMON_IMG_SHORTCUTS_NUMBER,
    MEDIAPLAYER_IMG_ORDER
};

const static ShortcutKeysMap_t ShortcutNaviKeysMapTbl[SHORTCUTS_NAVIKEY_TOTAL] =
{
    {MNU_SHORTCUTS_NAVI_UP, SHORTCUTS_KEYTYPE_NAVIKEY_UP},
    {MNU_SHORTCUTS_NAVI_DOWN, SHORTCUTS_KEYTYPE_NAVIKEY_DOWN},
#if !defined(__3D_UI_IDLE_MULTIPAGE__)
    {MNU_SHORTCUTS_NAVI_LEFT, SHORTCUTS_KEYTYPE_NAVIKEY_LEFT},
    {MNU_SHORTCUTS_NAVI_RIGHT, SHORTCUTS_KEYTYPE_NAVIKEY_RIGHT}
#endif
};

const static ShortcutKeysMap_t ShortcutSoftKeysMapTbl[SHORTCUTS_SOFTKEY_TOTAL] =
{
    {MNU_SHORTCUTS_LEFT_SOFT_KEY, SHORTCUTS_KEYTYPE_SOFTKEY_LEFT},
    {0, SHORTCUTS_KEYTYPE_SOFTKEY_MIDDLE},
    {MNU_SHORTCUTS_RIGHT_SOFT_KEY, SHORTCUTS_KEYTYPE_SOFTKEY_RIGHT}
};

const static ShortcutKeysMap_t ShortcutNumKeysMapTbl[SHORTCUTS_NUMKEY_TOTAL] =
{
    {MNU_SHORTCUTS_NUM_KEY_1, SHORTCUTS_KEYTYPE_NUMKEY_1},
    {MNU_SHORTCUTS_NUM_KEY_2, SHORTCUTS_KEYTYPE_NUMKEY_2},
    {MNU_SHORTCUTS_NUM_KEY_3, SHORTCUTS_KEYTYPE_NUMKEY_3},
    {MNU_SHORTCUTS_NUM_KEY_4, SHORTCUTS_KEYTYPE_NUMKEY_4},
    {MNU_SHORTCUTS_NUM_KEY_5, SHORTCUTS_KEYTYPE_NUMKEY_5},
    {MNU_SHORTCUTS_NUM_KEY_6, SHORTCUTS_KEYTYPE_NUMKEY_6},
    {MNU_SHORTCUTS_NUM_KEY_7, SHORTCUTS_KEYTYPE_NUMKEY_7},
    {MNU_SHORTCUTS_NUM_KEY_8, SHORTCUTS_KEYTYPE_NUMKEY_8},
    {MNU_SHORTCUTS_NUM_KEY_9, SHORTCUTS_KEYTYPE_NUMKEY_9}
};

#ifdef __3D_UI_SHORTCUTAPP__
enum
{
    SHORTCUTS_ICONLIST_PANEL_CONTAINER = APP_WDG_START,
    SHORTCUTS_ICONLIST_BG_IMAGEWIDGET ,
    SHORTCUTS_ICONLIST_GRID_MENUWIDGET,
    SHORTCUTS_ICONLIST_LSK_BUTTONWIDGET,
    SHORTCUTS_ICONLIST_RSK_BUTTONWIDGET,
    SHORTCUTS_ICONLIST_ITEM_TEXTWIDGET,
    SHORTCUTS_ICONLIST_BUTTON_TRANSFORM_WDG,
    SHORTCUTS_ICONLIST_PANEL_TRANSFORM_WDG,
    SHORTCUTS_ICONLIST_BTN_TRANSFORM_WDG
};

typedef struct
{
    IWidget *pPanelCnt;
    IWidget *pBtnCnt;
    IWidget *pBgImgWdg;
    IWidget *pGridMenuWdg;
    IWidget *pLskBtn;
    IWidget *pRskBtn;
    IWidget *pItemTextWdg;
} ShortcutsIconListWndWdgList_t;

/* This data structure is used for temporarily keeping the variable values of the icon list window */
typedef struct
{
    ShortcutsIconListWndWdgList_t tWdgList;
    ArrayClass_t *pGridMenuData;

} ShortcutsIconListWndData_t;
#endif // __3D_UI_SHORTCUTAPP__

typedef struct ShortcutsAppData_t_
{
    APPLET_BASE_ELEMENTS;

	IWidget         *pIMenuWdg;
	VectorClass_t  *pIHistory;
	IWidget     *pIOptMenuWdg;
	IWidget     *pIPopupSelectWdg;
	IImage *apImgCache[SHORTCUTS_IMG_CACHE_TOTAL];
	HistoryInfo_t stHistoryInfo;
	ShortcutsKeyInfo_t *pNaviKeyInfo;
	ShortcutsKeyInfo_t *pSoftKeyInfo;
	ShortcutsKeyInfo_t *pNumKeyInfo;
	ShortcutsKeyInfo_t *pListInfo;
	ShortcutsListInfo_t *pListDetail;
	ShortcutsEntryParamInfo_t stParamInfo;
	u32 nViewTitleId;
	u32 nShortcutsType;
	u16 nListSize;
	HWIN hWin;
	u8 CurrentMode;
	u8 PrevMode;
	MainMenuItem_t  *ptMainMenuApList;

#ifdef __3D_UI_SHORTCUTAPP__
	u8 nFocusItem;
	boolean bDoAnimation ;	
	IWidget *pPanelTransformWdg ;
	IWidget *pBtnTransformWdg;
#endif	
} ShortcutsAppData_t;


MAE_Ret ShortcutsConstructor(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);
MAE_Ret ShortcutsDestructor(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);
boolean ShortcutsStartCB(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);
boolean ShortcutsKeyPressCB(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);
boolean ShortcutsResumeCB(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);
boolean ShortcutsSuspendCB(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);

void _ShortcutsHandleKeyPressShowList(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsHandleKeyPressDelete(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsHandleKeyPressReplaceDialog(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);

void _ShortcutEventBackToList(ShortcutsAppData_t *pThis, u32 nEvt, u32 param1, u32 param2) ;
void _ShortcutEventStopShortcut(ShortcutsAppData_t *pThis, u32 nEvt, u32 param1, u32 param2) ;
void _ShortcutEventMenuSelect(ShortcutsAppData_t *pThis, u32 nEvt, u32 param1, u32 param2) ;

MAE_Ret _ShortcutsWndHdlShowList(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlOption(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlChangeOrderDisplaylist(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlChangeOrderMark(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlAddFunc(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlMainList(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlNavigationKeys(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdNumericKeys(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlFunctionsMenu(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlAvailableShortcuts(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlReplaceDialog(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlReplaceList(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndHdlAssignAsNumericKey(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
#ifdef __UI_STYLE_MMI_IFONE__
MAE_Ret _ShortcutsWndHdlMainMenuSetting(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
#endif
MAE_Ret _ShortcutsInsertListItemAt(ShortcutsAppData_t *pThis, u32 nIdx, ShortcutsListInfo_t *stItemInfo);
MAE_Ret _ShortcutsDeleteListItemAt(ShortcutsAppData_t *pThis, u32 nIdx);
MAE_Ret _ShortcutsMarkListItem(ShortcutsAppData_t *pThis, u32 nIndex, boolean bIsMarked);
MAE_Ret _ShortcutsMoveListItem(ShortcutsAppData_t *pThis, u32 nFromIdx, u32 nToIdx);
MAE_Ret _ShortcutsCreateSCListOptionMenu(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
MAE_Ret _ShortcutsRetrievePhonebookInfo(ShortcutsAppData_t *pThis);
MAE_Ret _ShortcutsLoadImage(ShortcutsAppData_t *pThis, u32 type, IImage **ppImg);
MAE_Ret _ShortcutsCreateMenu(ShortcutsAppData_t *pThis,MAE_WndId nWndId);
MAE_Ret _ShortcutsSetMenu(ShortcutsAppData_t *pThis,MAE_WndId nWndId);
MAE_Ret _ShortcutsLoadAppList(ShortcutsAppData_t *pThis, u8 nStyle);

void _ShortcutsShortcutsListModelListener(void *pApplet, void *pUsrData, WidgetEvtCode_t nEvtCode, HistoryInfo_t *pHistoryInfo, IWidget *pWidget);
void _ShortcutsShortcutsListModelNoItemListener(void *pApplet, void *pUsrData, WidgetEvtCode_t nEvtCode, HistoryInfo_t *pHistoryInfo, void *pReserve) ;
void _ShortcutsFuncMenuModelListener(void *pApplet, void *pUsrData, WidgetEvtCode_t nEvtCode, HistoryInfo_t *pHistoryInfo, IWidget *pWidget);
void _ShortcutsAppListMenuModelListener(void *pApplet, void *pUsrData, WidgetEvtCode_t nEvtCode, HistoryInfo_t *pHistoryInfo, IWidget *pWidget);
void _ShortcutsKeyAssignmentMenuModelListener(void *pApplet, void *pUsrData, WidgetEvtCode_t nEvtCode, HistoryInfo_t *pHistoryInfo, IWidget *pWidget);
void _ShortcutsInfo_Dialog_CallBack(void *data);
void _ShortcutsShowConfirmDialog(ShortcutsAppData_t *pThis, u32 nTextID,void *pWndData,MAE_WndId   nWndId);

void _ShortcutsGetNaviKeysSettingValue(ShortcutsAppData_t *pThis);
void _ShortcutsGetSoftKeysSettingValue(ShortcutsAppData_t *pThis);
void _ShortcutsGetNumKeysSettingValue(ShortcutsAppData_t *pThis, u32 nMenuModelID);

void _ShortcutsFreeRadioListInfo(void *pData, IBase *pOwner);
void _ShortcutsFreeIconListInfo(void *pData, IBase *pOwner);
void _ShortcutsDeleteMenuItem(IWidget *pMenu, MenuItemId_e nMenuId);
void _ShortcutsCreateListMenuModel(ShortcutsAppData_t *pThis);
void _ShortcutsCreateKeyAssignMenuModel(ShortcutsAppData_t *pThis);
void _ShortcutsCreateNumMenuModel(ShortcutsAppData_t *pThis);
void _ShortcutsCreatePopupMenuModel(ShortcutsAppData_t *pThis);
void _ShortcutsFreeHistoryInfo(void *pData, void *pOwner);
void _ShortcutsPopHistory(ShortcutsAppData_t *pThis);
void _ShortcutsPushHistory(ShortcutsAppData_t *pThis, HistoryInfo_t *pstHistory);
void _ShortcutsLaunchPhonebook(ShortcutsAppData_t *pThis, HistoryInfo_t *pHistoryData, u8 nLeafMode);
void _ShortcutsConfigMenuViewLayout(ShortcutsAppData_t *pThis, u32 nFirstIndex, u32 nHighlightedIndex);
void _ShortcutsCreatePopupOptinonMenu(ShortcutsAppData_t* pThis);
void _ShortcutsInitEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsInitAct(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveAct(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveShowListEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
boolean _ShortcutsActiveShowListCndKeySend(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
boolean _ShortcutsActiveShowListCndSoftKey(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveShowListActLaunchList(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveShowListActKeySend(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveShowListActSoftKey(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveShowListActLaunchPhonebook(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveChangeOrderDisplayListEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveChangeOrderMarkEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveDeleteEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
s32  _ShortcutsActiveDeleteCndSkLeft(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
s32  _ShortcutsActiveDeleteCndSkRight(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveDeleteActSkLeft(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveDeleteActSkRight(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveKeyAssignmentMainListEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
boolean _ShortcutsActiveKeyAssignmentMainListCndNavKeys(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
boolean _ShortcutsActiveKeyAssignmentMainListCndNumKeys(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveKeyAssignmentNavigationKeysEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveKeyAssignmentNumericKeysEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveKeyAssignmentFunctionsMenuEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveKeyAssignmentFunctionsMenuActLaunchPhonebook(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveAssignDynamicLinkAvailableShortcutsEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
s32  _ShortcutsActiveAssignDynamicLinkAvailableShortcutsCndMain(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
s32  _ShortcutsActiveAssignDynamicLinkAvailableShortcutsCndNumKeys(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveAssignDynamicLinkReplaceDialogEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
boolean _ShortcutsActiveAssignDynamicLinkReplaceDialogCndSkLeft(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
boolean _ShortcutsActiveAssignDynamicLinkReplaceDialogCndSkRight(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveAssignDynamicLinkReplaceListEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveAssignDynamicLinkAssignAsNumericKeyEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveMainMenuSettingEntry(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveMainMenuSettingActSaveSetting(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsActiveMainMenuSettingActCloseApplet(ShortcutsAppData_t* pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsAddFunctionEntry(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
void _ShortcutsAddFunctionActCloseApplet(ShortcutsAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
#ifdef __UI_STYLE_MMI_IFONE__
void _ShortcutsMainMenuSettingModelListener(void *pUserData, ModelEvent_t *pMdlEvent);
void _ShortcutsFreeMenuModelData_Text(void *pData, IBase *pOwner);
#endif //__UI_STYLE_MMI_IFONE__
#ifdef __3D_UI_SHORTCUTAPP__
MAE_Ret _ShortcutsWndCreateIconList(void *pCusHandle, void *pWndData, u32 nWndInitParam);
MAE_Ret _ShortcutsWndDestroyIconList(void *pCusHandle, void *pWndData);
void _ShortcutsFreeIconListWndData(ShortcutsAppData_t *pThis, ShortcutsIconListWndData_t *pWndData);
void ShortcutsGridMenuAdaptGet(WdgDynamicMenuItemPtr_t *pItemDataPtr, HWIN hWin, WdgMenuItemType_e eItemType, IWidget *pMenuWdg, u32 nIndex);
void ShortcutsGridMenuItemFree(void *pData, void *pOwner);
void ShortcutsGridMenuFocusSelectCb(void *pApplet, void *pUserData, WidgetEvtCode_t nEvtCode, HistoryInfo_t *pFocusInfo, IWidget *pWidget);
void ShortcutsGridMenuFocusChangeCb(void *pApplet, void *pUserData, WidgetEvtCode_t nEvtCode, FocusInfo_t *pFocusInfo, IWidget *pWidget);
void _Shortcuts_Self_CloseCB(ShortcutsAppData_t *pThis);
void _ShortcutsLskRskCb(void *pApplet, void *pUsrData, WidgetEvtCode_t nEvtCode, u32 dwParam, IWidget *pWidget);
void _ShortcutsTransformWdgCb(void *pApplet, void *pUsrData, WidgetEvtCode_t nEvtCode, u32 dwParam, IWidget *pWidget);
#endif
boolean _ShortcutsConfirmDlgCB(void *pApplet, u32 nEvt, u32 param1, u32 param2) ;
boolean _ShortcutsInfoDlgCB(void *pApplet, u32 nEvt, u32 param1, u32 param2) ;
boolean _ShortcutsSetSuccessDlgCB(void *pApplet, u32 nEvt, u32 param1, u32 param2) ;
static void ShortcutsAppStartAPFree(IBase *pIssuer, u32 Param);

void _ShortcutsLaunchPhbInfo(void *pvUserData, MAE_Ret nRspCode, PhoneBookGetContactRecord_t *psRspData, PhoneBookGetContactRspDataFreeCb pfnRspDataFreeCb);
void _ShortcutsGetPhbContactCb(void *pvUserData,MAE_Ret nRspCode,PhoneBookGetContactRecord_t *psRspData,PhoneBookGetContactRspDataFreeCb pfnRspDataFreeCb);

static boolean _ShortcutsAppLaunch(UrlSrvUrlHdl_t pUrl, void *pUserData, void **ppvLaunchObj, CmnAppLaunchRspCbInfo_t *psRspCbInfo);
static boolean _ShortcutsAppEnterNonNumberKeyEntryHandler(UrlSrvUrlHdl_t pUrl, void *pvUserData, void **ppvLaunchObj, CmnAppLaunchRspCbInfo_t *psResponseInfo) ;
static boolean _ShortcutsAppEnterNumberKeyEntryHandler(UrlSrvUrlHdl_t pUrl, void *pvUserData, void **ppvLaunchObj, CmnAppLaunchRspCbInfo_t *psResponseInfo) ;

#endif /* __ShortcutsAppData_t_PRIV_H__ */

