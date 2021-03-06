/**
 * @file    mmi_cbsettingapp_view_id.h
 *
 * @brief   This file defines the view IDs for CB setting AP.
 * @author	allan.hsu@mstarsemi.com
 *
 * @version $Id: mmi_cbsapp_view_id.h 32623 2009-06-04 14:32:32Z jason.su $
 */
#ifndef __MMI_CBSETTINGAPP_VIEW_ID_H__
#define __MMI_CBSETTINGAPP_VIEW_ID_H__

#include "mae_menulabel.h"
#include "mmi_mae_menumodel.h"
//#include "mae_checkradioitemwidget.h"
#include "mmi_wdg_menu.h"
#include "mmi_wdg_list.h"
#include "mmi_wdg_text.h"
#include "mmi_wdg_image_text_image.h"
#include "mmi_view_id_range.h"
#include "mmi_mae_inputcontroller.h"
#include "mmi_wdg_title.h"
#include "mmi_wdg_scrollbar.h"
#include "mmi_cbsettingapp.h"

enum
{
/* View ID start */
	ID_VIEW_CSA_MAIN = MMI_VIEW_ID_AP_BEGIN,
	ID_VIEW_CSA_RECEPTION,
	ID_VIEW_CSA_TOPIC_LIST,
	ID_VIEW_CSA_TOPIC_EDIT_WITH_CHANNEL,
	ID_VIEW_CSA_TOPIC_EDIT_WITH_RNG_CHANNEL,
	ID_OPTION_VIEW_CSA_TOPIC_LIST,
	ID_OPTION_VIEW_CSA_TOPIC_LIST1,
	ID_OPTION_VIEW_CSA_TOPIC_LIST0,
	ID_OPTION_VIEW_CSA_TOPIC_LIST_MAX,
	ID_OPTION_VIEW_CSA_TOPIC_LIST_MAX1,
	ID_OPTION_L2_VIEW_CSA_TOPIC_LIST,
	ID_VIEW_CSA_LANGUAGE,
	ID_VIEW_CSA_CELL_INFO,

	ID_VIEW_CSA_TOPIC_EDIT_VIEW,
	ID_VIEW_CSA_DUO_SELECTION_VIEW,
	ID_VIEW_CSA_EDITOR,

	CBS_RECEPTION_VIEW,
	CBS_CELLINFO_VIEW,
	CBS_INPUT_TOPIC_LIST_VIEW,

/* View ID end */
};

enum
{
/* Widget ID start */
	ID_TITLE_CSA_MAIN = 0,

	ID_MENU_WIDGET_MAIN,
	ID_MFLCONTAINER_MAIN,

	ID_TITLE_CSA_RECEPTION,
	ID_MENU_WIDGET_RECEPTION,

	ID_TITLE_CSA_TOPIC_LIST,
	ID_MENU_WIDGET_TOPIC_LIST,
	ID_OPTION_MENU_TOPIC_LIST,

	ID_TEXTPICK_THMTEXTWIDGET_CSA_RECEPTION,
	ID_DOUBLE_TEXTWIDGET_CSA_TOPIC_LIST,
	ID_TEXTPICK_THMTEXTWIDGET_CSA_CELL_INFORMATION,


	ID_MFLCONTAINER_CSA_TOPIC_WITH_CHANNEL,
	ID_MENU_WIDGET_TOPIC,
	ID_TITLE_CSA_TOPIC_WITH_CHANNEL,
	ID_TEXTINPUTWIDGET_CSA_TOPIC_DESCRIPTION,
	ID_TEXTINPUTWIDGET_CSA_TOPIC_CHANNEL,

	ID_MFLCONTAINER_CSA_TOPIC_WITH_RNG_CHANNEL,
	ID_TITLE_CSA_TOPIC_WITH_RNG_CHANNEL,
	ID_TEXTINPUTWIDGET_CSA_TOPIC_CHANNEL_FROM,
	ID_TEXTINPUTWIDGET_CSA_TOPIC_CHANNEL_TO,
	ID_INPUTWIDGET_CSA_TOPIC,


	ID_TITLE_CSA_LANGUAGE,
	ID_MENU_WIDGET_LANGUAGE,

	ID_TITLE_CSA_CELL_INFO,
	ID_MENU_WIDGET_CELL_INFO,

	ID_TITLE_CSA_TOPIC_EDIT_VIEW,
	ID_INPUTWIDGET_CSA_TOPIC_EDIT_VIEW,
	ID_SCROLLBARWIDGET_CSA,

	ID_TITLE_CSA_DUO_SELECTION,
	ID_MENU_WIDGET_CSA_DUO_SELECTION,

    ID_TITLE_CSA_EDITOR,

    CBS_RECEPTION_TITLEWIDGET,
	CBS_RECEPTION_MENU,

	CBS_CELLINFO_TITLEWIDGET,
	CBS_CELLINFO_MENU

/* Widget ID end */
};

enum e_TOPIC_LIST_OPTION
{
/* Binary ID start */
    /*e_TOPIC_LIST_OPTION*/
    CSA_TOPIC_LIST_OPTION_ENABLE=0,
    CSA_TOPIC_LIST_OPTION_DISABLE,
    CSA_TOPIC_LIST_OPTION_ADD_TOPIC,
	CSA_TOPIC_LIST_OPTION_EDIT,
    CSA_TOPIC_LIST_OPTION_DELETE,
    CSA_TOPIC_LIST_OPTION_DELETE_ALL,
	CSA_TOPIC_LIST_OPTION_WITH_CHANNEL,
	CSA_TOPIC_LIST_OPTION_WITH_RANGE

/* Binary ID end */
};

enum
{
    /* Binary ID start */
    MNU_CSA_DUO_MASTER,
    MNU_CSA_DUO_SLAVE,
};


/* Model ID */
enum
{
	MID_CBSAPP_INPUT_OPTION_L1_MENU = 0,
};



#endif /* __MMI_CBSETTINGAPP_VIEW_ID_H__ */
