#ifndef __MMI_BMIAPP_ID_H__
#define __MMI_BMIAPP_ID_H__

typedef enum
{
    BMI_WND_CALCULATOR = WND_ID_APP_BASE,
    BMI_WND_HISTORY,
    BMI_WND_VIEWER,
    BMI_WND_OPTION,
    BMI_WND_CUS
}BmiId_e;

enum
{
    CALC_CALC_VIEW_BEGIN = APP_WDG_START,
    CALC_TITLE,
    CALC_HEIGHT_TEXT,
    CALC_HEIGHT_VALUE_TEXT,
    CALC_INPUT_HEIGHT,
    CALC_WEIGHT_TEXT,
    CALC_WEIGHT_VALUE_TEXT,
    CALC_INPUT_WEIGHT,
    CALC_BMI_LIMIT_TEXT,
    CALC_BMI_JUDGEMENT_TEXT,
    CALC_BMI_VALUE_TEXT,
    CALC_VALUE_BG_IMAGE,
    CALC_VALUE_IMAGE,
    CALC_CALC_VIEW_END
}BmiCalculatorView_e;

#endif //__MMI_BMIAPP_ID_H__

