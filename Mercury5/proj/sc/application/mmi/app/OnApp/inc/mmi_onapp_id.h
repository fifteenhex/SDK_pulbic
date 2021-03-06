#ifndef __MMI_ONAPP_ID_H__
#define __MMI_ONAPP_ID_H__

#ifdef __APP_MMI_SMALLROM__
#define __ONAPP_SMALLROM__
#endif

typedef enum OnAppWndId_e_
{
    // Main LCD
    ONAPP_WND_LOGO = WND_ID_APP_BASE,
    ONAPP_WND_STANDBY,
    ONAPP_WND_POWER_ON_ANIMATION,
    ONAPP_WND_POWER_ON_VIDEO,
    ONAPP_WND_SEARCH_NETWORK,
    ONAPP_WND_CHARGING,
    ONAPP_WND_CHARGER_FULL,
    ONAPP_WND_DUALBATTERY_CHARGER,
    ONAPP_WND_DUALBATTERY_SINGLE_CHARGER,

    // Sub LCD
    ONAPP_SUB_WND_LOGO = WND_ID_APP_SUB_BASE,
    ONAPP_SUB_WND_STANDBY,
    ONAPP_SUB_WND_POWER_ON_ANIMATION,
    ONAPP_SUB_WND_SEARCH_NETWORK,
    ONAPP_SUB_WND_CHARGING,
    ONAPP_SUB_WND_CHARGER_FULL,
} OnAppWndId_e;

typedef enum OnAppWdgId_e_
{
    ONAPP_VIDEO_OSDWIDGET = 0,
	ONAPP_VIDEO_VIDEO_ABSCONTAINER,
    ONAPP_VIDEO_WAITING_IMAGE,
} OnAppWdgId_e;

typedef enum
{
    MNU_ONAPP_STANDBY_MENU = 0,
    MNU_ONAPP_ITEM_STANDBY_DUAL_MODE,
    MNU_ONAPP_ITEM_STANDBY_DUAL_MASTER,
    MNU_ONAPP_ITEM_STANDBY_DUAL_SLAVE,
    MNU_ONAPP_ITEM_STANDBY_AIRPLANE_MODE,
    MNU_ONAPP_ITEM_STANDBY_CLOSE_AIRPLANE_MODE,
    MNU_ONAPP_ITEM_STANDBY_SINGLE_ENABLE,
}OnMenuId_e;

#endif //__MMI_ONAPP_ID_H__


