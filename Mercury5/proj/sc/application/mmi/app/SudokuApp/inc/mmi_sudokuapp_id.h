#ifndef __MMI_SUDOKUAP_ID_H__
#define __MMI_SUDOKUAP_ID_H__
typedef enum
{
    SUDOKU_WND_MAIN= WND_ID_APP_BASE,
    SUDOKU_WND_PLAY,
}SudokuWndId_e;

typedef enum
{
	SUDOKU_MAIN_START_BUTTON= APP_WDG_START,
	SUDOKU_MAIN_QUIT_BUTTON,
	SUDOKU_MAIN_NO1,
	SUDOKU_MAIN_NOO,
	SUDOKU_PLAY_CUBE_LIST_ORIG,
	SUDOKU_PLAY_CUBE_LIST,
	SUDOKU_PLAY_CUBE_TEXT,
	SUDOKU_PLAY_SUCESS,
	SUDOKU_PLAY_FAIL,
	SUDOKU_PLAY_TIME,
	SUDOKU_PLAY_OPERAND_LIST,
	SUDOKU_PLAY_OPERAND_BUTTON,
	SUDOKU_PLAY_QUIT_BUTTON,
	SUDOKU_PLAY_FADE_OUT,
} SudokuWdgId_e;
#endif
