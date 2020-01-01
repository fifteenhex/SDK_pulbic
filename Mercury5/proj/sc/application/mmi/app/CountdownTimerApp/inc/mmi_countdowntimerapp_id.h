#ifndef __MMI_COUNTDOWNTIMERAPP_ID_H__
#define __MMI_COUNTDOWNTIMERAPP_ID_H__

#ifdef __APP_MMI_SMALLROM__
#define __COUNTDOWNTIMERAPP_SMALLROM__
#endif

typedef enum
{
    COUNTDOWNTIMER_WND_SETTIME = WND_ID_APP_BASE,
    COUNTDOWNTIMER_WND_COUNTDOWN,
#ifdef __IFONE_STYLE_MMI_COUNTDOWN_TIMER__
    COUNTDOWNTIMER_WND_SETRINGTONE,
#endif
} CountdownTimerWndId_e;

typedef enum
{
    SETTIME_WDG=APP_WDG_START,
#ifndef __COUNTDOWNTIMERAPP_SMALLROM__
    SETTIME_HOUR_TEXT,
    SETTIME_MIN_TEXT,
    SETTIME_SEC_TEXT,
#ifdef __IFONE_STYLE_MMI_COUNTDOWN_TIMER__
    SETTIME_STARTRING_TEXT,
    SETTIME_START_BUTTON,
    SETTIME_STOP_BUTTON,
    SETTIME_START_RING,
    SETTIME_RINGNAME_TEXT,
#endif
#else
    SETTIME_TIMETEXT,
#endif
} CountdownTimerSetTimeView_e;

typedef enum
{
    COUNTDOWN_TEXT=APP_WDG_START,
} CountdownTimerCountdownView_e;

#endif //__MMI_COUNTDOWNTIMERAPP_ID_H__
