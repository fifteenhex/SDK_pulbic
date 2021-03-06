#ifndef __MMI_STOPWATCHAPP_ID_H__
#define __MMI_STOPWATCHAPP_ID_H__

typedef enum
{
    STOPWATCH_WND_MAIN = WND_ID_APP_BASE,

} StopwatchWndId_e;

typedef enum
{
    STOPWATCH_VIEW_BEGIN =APP_WDG_START,
    STOPWATCH_LIST_INFO,
    STOPWATCH_COUNT,
    STOPWATCH_TIMER,
    STOPWATCH_MENU,
    STOPWATCH_MENU_ITEM_TEXT,
    STOPWATCH_MENU_ITEM_TIMER,
    STOPWATCH_FUNCTION_BUTTON,
    STOPWATCH_ACTION_BUTTON,
    STOPWATCH_VIEW_END
}StopwatchView_e;

#endif //__MMI_STOPWATCHAPP_ID_H__

