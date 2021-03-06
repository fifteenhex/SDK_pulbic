#ifndef __PUZZLEAPP_ID_H__
#define __PUZZLEAPP_ID_H__

typedef enum
{
	PUZZLE_STARTWND_WDG_IMG_BG = APP_WDG_START,
	PUZZLE_STARTWND_WDG_BTN_PLAY,
	PUZZLE_STARTWND_WDG_BTN_SETTING,
	PUZZLE_STARTWND_WDG_BTN_HELP,
	PUZZLE_PLAYWND_WDG_IMG_BG,
	PUZZLE_PLAYWND_WDG_IMG_ICON,
	PUZZLE_PLAYWND_WDG_BTN_SHOWPIC,
	PUZZLE_PLAYWND_WDG_BTN_SETTING,
	PUZZLE_PLAYWND_WDG_BTN_NEXT,
	PUZZLE_PLAYWND_WDG_BTN_PREV,
	PUZZLE_PLAYWND_WDG_BTN_BACK,
	PUZZLE_SHOWWND_WDG_BTN_BACK,
	PUZZLE_PLAYWND_WDG_BTN_SOUNDSET,
	PUZZLE_PLAYWND_WDG_TEXT_GATE,
	PUZZLE_PLAYWND_WDG_TEXT_STEP,
	PUZZLE_PLAYWND_WDG_TEXT_SUCCEED,
	PUZZLE_PLAYWND_WDG_IMG_0,
	PUZZLE_SETTINGWND_WDG_IMG_BG,
	PUZZLE_SETTINGWND_WDG_BTN_EASY,
	PUZZLE_SETTINGWND_WDG_BTN_MIDDLE,
	PUZZLE_SETTINGWND_WDG_BTN_HARD,
	PUZZLE_SETTINGWND_WDG_BTN_EXIT,
	PUZZLE_SHOWPICWND_WDG_IMG_BG,
	PUZZLE_SHOWPICWND_WDG_IMG_PIC,
	PUZZLE_SHOWPICWND_WDG_TEXT_HINT,	
}PuzzleWdgID_e;

typedef enum
{
    PUZZLE_WND_START = WND_ID_APP_BASE,
    PUZZLE_WND_PLAY,
    PUZZLE_WND_SETTING,
    PUZZLE_WND_SHOWPIC,
}PuzzleWndID_e;


#endif /* __PUZZLEAPP_ID_H__ */
