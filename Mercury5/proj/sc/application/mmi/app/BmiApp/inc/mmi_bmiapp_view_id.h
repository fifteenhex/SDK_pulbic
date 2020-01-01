#ifndef __MMI_BMIAPP_VIEW_ID_H__
#define __MMI_BMIAPP_VIEW_ID_H__

#include "mmi_view_id_range.h"
#include "mmi_common_thmid.h"

enum
{
/* View ID start */
    BMI_CALCULATOR_VIEW = MMI_VIEW_ID_AP_BEGIN,
    BMI_RECORD_LIST_VIEW
/* View ID end */
};

enum
{
/* Widget ID start */
    BMI_CALCULATOR_ROOT_CONTAINER = 1,
    BMI_CALCULATOR_TOP_CONTAINER,
    BMI_CALCULATOR_TOP_TOP_CONTAINER,
    BMI_HEIGHT_TEXT,
    BMI_HEIGHT_VALUE_TEXT,
    BMI_INPUT_WEIGHT,
    BMI_CALCULATOR_TOP_CENTER_CONTAINER,
    BMI_WEIGHT_TEXT,
    BMI_BMI_LIMIT_TEXT,
    BMI_BMI_JUDGEMENT_TEXT,
    BMI_WEIGHT_VALUE_TEXT,
    BMI_INPUT_HEIGHT,
    BMI_CALCULATOR_TOP_BUTTOM_CONTAINER,
    BMI_BMI_VALUE_TEXT,
    BMI_CALCULATOR_BOTTOM_CONTAINER,
    BMI_VALUE_BG_IMAGE,
    BMI_VALUE_IMAGE,
    BMI_TITLE,
    BMI_RECORD_LIST_TITLE,
    BMI_RECORD_LIST_SCROLL_BAR,
    BMI_RECORD_LIST,
    BMI_RECORD_ITEM,
    BMI_RECORD_OPTION_MENUMODEL,
    BMI_LISTEMPTY_TEXT,
    BMI_LIST_CONTAINER
/* Widget ID end */
};


#endif