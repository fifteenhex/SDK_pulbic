#ifndef __MMI_MAPAPP_ID_H__
#define __MMI_MAPAPP_ID_H__

typedef enum MapWndId_e_
{
    MAP_WND_LOGO = WND_ID_APP_BASE,
    MAP_WND_MAPVIEW,
    MAP_WND_DATALIST,
    MAP_WND_MULTI_FIELD_INPUT,
    MAP_WND_THUMB_POI,
    MAP_WND_KEYWORD_INPUT,
    MAP_WND_SELECT_CARD,
    MAP_WND_OPTION_MY_FAVORITE,
    MAP_WND_OPTION_HISTORY,
    MAP_WND_OPTION_MAPVIEW,
    MAP_WND_OPTION_KEYWORD_INPUT,
    MAP_WND_OPTION_SETTINGS
} MapWndId_e;

enum //ID_MAPAPP_VIEW_enum
{
    eMAP_MAP_CONTAINER=APP_WDG_START,
    eMAP_MAP_BITMAP,
    eMAP_MAP_IMG_TITLE_BAR,
    eMAP_MAP_TEXT_TITLE_BAR,
    eMAP_MAP_IMG_ZOOM,
    eMAP_MAP_IMG_ZOOM_STATUS,
    eMAP_MAP_ZOOM_IN,
    eMAP_MAP_ZOOM_OUT,
    eMAP_MAP_SETTINGS,
    eMAP_MAP_IMG_NOTICE,
    eMAP_MAP_FOCUS_MODE,
    eMAP_MAP_PREV_MODE,
    eMAP_MAP_NEXT_MODE,
    eMAP_MAP_LEFT_ARROW,
    eMAP_MAP_RIGHT_ARROW,
}; //ID_MAPAPP_VIEW_enum

typedef enum
{
	MNU_MAPAPP_STATE = 0,
	MNU_MAPAPP_BEIJING,
	MNU_MAPAPP_TIANJIN,
	MNU_MAPAPP_HEBEI,
	MNU_MAPAPP_SHANXI,
	MNU_MAPAPP_NEIMONGOL,
	MNU_MAPAPP_LIAONING,
	MNU_MAPAPP_JILIN,
	MNU_MAPAPP_HEILONGJIANG,
	MNU_MAPAPP_SHANGHAI,
	MNU_MAPAPP_JIANGSU,
	MNU_MAPAPP_ZHEJIANG,
	MNU_MAPAPP_ANHUI,
	MNU_MAPAPP_FUJIAN,
	MNU_MAPAPP_JIANGXI,
	MNU_MAPAPP_SHANDONG,
	MNU_MAPAPP_HENAN,
	MNU_MAPAPP_HUBEI,
	MNU_MAPAPP_HUNAN,
	MNU_MAPAPP_GUANGDONG,
	MNU_MAPAPP_GUANGXI,
	MNU_MAPAPP_HAINAN,
	MNU_MAPAPP_CHONGQING,
	MNU_MAPAPP_SICHUAN,
	MNU_MAPAPP_GUIZHOU,
	MNU_MAPAPP_YUNNAN,
	MNU_MAPAPP_TIBET,
	MNU_MAPAPP_SHAANXI,
	MNU_MAPAPP_GANSU,
	MNU_MAPAPP_QINGHAI,
	MNU_MAPAPP_NINGXIA,
	MNU_MAPAPP_XINJIANG,
	MNU_MAPAPP_HONGKONG,
	MNU_MAPAPP_MACAU,
	MNU_MAPAPP_SETTING_MENU,
	MNU_MAPAPP_ABOUT,
	MNU_MAPAPP_SEARCH_POI,
	MNU_MAPAPP_POI_NEARBY,
	MNU_MAPAPP_ADDTOFAVORITE,
	MNU_MAPAPP_SEND,
	MNU_MAPAPP_SEARCH_LIST,
	MNU_MAPAPP_HISTORY,
	MNU_MAPAPP_MY_FAVORITE,
	MNU_MAPAPP_WHERE_AM_I,
	MNU_MAPAPP_SETTINGS,
	MNU_MAPAPP_CALL,
	MNU_MAPAPP_VIEW,
	MNU_MAPAPP_LBS,
	MNU_MAPAPP_IP_CALL,
	MNU_MAPAPP_OPTION_MENU_MARK,
	MNU_MAPAPP_OPT_VIEWONMAP,
	MNU_MAPAPP_OPT_EDIT,
	MNU_MAPAPP_OPT_MARK,
	MNU_MAPAPP_OPT_MARKALL,
	MNU_MAPAPP_OPT_UNMARK,
	MNU_MAPAPP_OPT_UNMARKALL,
	MNU_MAPAPP_OPT_DELETE,
	MNU_MAPAPP_OPT_POI,
	MNU_MAPAPP_OPT_MYLOCATION,
}MapMenuId_e;

#endif //__MMI_MAPAPP_ID_H__
