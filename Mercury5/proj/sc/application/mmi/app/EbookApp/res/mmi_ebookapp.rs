ApBegin(RS,CLSID_E_BOOK)
    WndBegin(E_BOOK_WND_FILELIST)
        WndSetTitleRC({IMG_NULL_ID,TXT_LIL_N_E_BOOK})
        WdgBegin(CLSID_MENUWIDGET,IMenuWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,E_BOOK_FILE_LIST_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
        WdgEnd(CLSID_MENUWIDGET,IMenuWdg)
        WdgBegin(CLSID_TEXTWIDGET,IThmTextWdg)
            WdgTextCreateForWndRC({{0,MAIN_LCD_HEIGHT-MAIN_SK_HEIGHT-MAIN_LCD_ONELINE_HEIGHT},{MAIN_LCD_WIDTH,MAIN_LCD_ONELINE_HEIGHT},TEXT_STYLE_COMMON})
        WdgEnd(CLSID_TEXTWIDGET,IThmTextWdg)
    WndEnd(E_BOOK_WND_FILELIST)
    WndBegin(E_BOOK_WND_TEXTBROWSE)
        WndSetAllSoftkeyRC({SK_OPTION, SK_OK, SK_BACK})
        WdgBegin(CLSID_TEXTWIDGET,BrowserTxt)
            WdgTextCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,MAIN_DEFVIEW_HEIGHT-MAIN_TITLE_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgCommonSetFontTypeRC(FONT_TYPE_NORMAL)
            WdgCommonSetAlignmentRC((ALIGN_H_START|ALIGN_V_TOP))
            WdgTextSetLayoutFlagRC(LAYOUT_MULTILINE)
            WdgTextSetFontHeightRC(E_BOOK_TEXTBROWSE_LINE_HEIGHT)
        WdgEnd(CLSID_TEXTWIDGET,BrowserTxt)
        WdgBegin(CLSID_TEXTWIDGET,FullText)
            WdgTextCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgCommonSetFontTypeRC(FONT_TYPE_NORMAL)
            WdgCommonSetAlignmentRC((ALIGN_H_START|ALIGN_V_TOP))
            WdgTextSetLayoutFlagRC(LAYOUT_MULTILINE)
            WdgTextSetFontHeightRC(E_BOOK_TEXTBROWSE_LINE_HEIGHT)
        WdgEnd(CLSID_TEXTWIDGET,FullText)
    WndEnd(E_BOOK_WND_TEXTBROWSE)
    WndBegin(E_BOOK_WND_BOOKMARKLIST)
        WdgBegin(CLSID_VTMMENU,BookMarkMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_E_BOOK_BOOKMARK_LIST,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
        WdgEnd(CLSID_VTMMENU,BookMarkMenu)
    WndEnd(E_BOOK_WND_BOOKMARKLIST)
    WndBegin(E_BOOK_WND_BOOKMARKEDIT)
        WdgBegin(CLSID_VTMINPUT,BookMarkEdit)
            VtmCreateInputRC({IMG_NULL_ID,TXT_LIL_N_E_BOOK_BOOKMARK_RENAME,	BOOKMARK_INPUT_MAX_SIZE,FALSE})
        WdgEnd(CLSID_VTMINPUT,BookMarkEdit)
    WndEnd(E_BOOK_WND_BOOKMARKEDIT)
    WndBegin(E_BOOK_WND_OPTION_FILELIST)
        WdgBegin(CLSID_VTMOPTIONMENU,FileListOptionWdg)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,6})
            VtmCreateOptionMenuDataRC(6,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_VIEW},TXT_OIL1_N_E_BOOK_VIEW},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_DELETE},TXT_OIL1_N_E_BOOK_DELETE},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_DELETE_ALL},TXT_OIL1_N_E_BOOK_DELETE_ALL},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_SCROLL_STYLE},TXT_OIL1_N_E_BOOK_SCROLL_STYLE},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL}, MNU_E_BOOK_OPT_LANG_CODE}, TXT_OIL1_N_E_BOOK_LANG_CODE}, {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_CANCEL}, MNU_E_BOOK_OPT_FILE_INFO}, TXT_OIL1_N_E_BOOK_FILE_INFO} } )
        WdgEnd(CLSID_VTMOPTIONMENU,FileListOptionWdg)
    WndEnd(E_BOOK_WND_OPTION_FILELIST)
    WndBegin(E_BOOK_WND_OPTION_FILELISTZERO)
        WdgBegin(CLSID_VTMOPTIONMENU,FileListZeroOptionWdg)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,2})
            VtmCreateOptionMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_SCROLL_STYLE},TXT_OIL1_N_E_BOOK_SCROLL_STYLE},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_LANG_CODE},TXT_OIL1_N_E_BOOK_LANG_CODE}})
        WdgEnd(CLSID_VTMOPTIONMENU,FileListZeroOptionWdg)
    WndEnd(E_BOOK_WND_OPTION_FILELISTZERO)
    WndBegin(E_BOOK_WND_OPTION_TEXTBROWSE)
        WdgBegin(CLSID_VTMOPTIONMENU,TextBrowseOptionWdg)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,6})
            VtmCreateOptionMenuDataRC(6,{
            {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_FULL_SCRN},TXT_OIL1_N_E_BOOK_FULL_SCRN},
            {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_GOTO_BOOKMARK},TXT_OIL1_N_E_BOOK_GOTO_BOOKMARK},
            {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_SCROLL_STYLE},TXT_OIL1_N_E_BOOK_SCROLL_STYLE},
            {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_LANG_CODE},TXT_OIL1_N_E_BOOK_LANG_CODE}, 
            {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_CANCEL}, MNU_E_BOOK_OPT_FILE_INFO}, TXT_OIL1_N_E_BOOK_FILE_INFO},
            {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_CANCEL}, MNU_E_BOOK_OPT_GOTO_LINE}, TXT_LIL_N_E_BOOK_GOTO_LINE}
            })
        WdgEnd(CLSID_VTMOPTIONMENU,TextBrowseOptionWdg)
    WndEnd(E_BOOK_WND_OPTION_TEXTBROWSE)

    WndBegin(E_BOOK_WND_OPTION_GOTOLINE)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
        WdgBegin(CLSID_VTMPOPUPPROMPT, VtmManualInput)
            VtmCreatePopUpPromptRC({IMG_NULL_ID, IMG_NULL_ID, TXT_LIL_N_E_BOOK_GOTO_LINE, TXT_NULL_ID})
				VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_PROMPT_INPUT_WDG, VtmInputWdgManual)
					WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_RATE)
					WdgInputSetDecimalPointEnableRC(FALSE)										
					WdgCommonSetFontCategoryRC(FONT_CAT_SUPERSMALL)
				VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_PROMPT_INPUT_WDG, VtmInputWdgManual)
        WdgEnd(CLSID_VTMPOPUPPROMPT, VtmManualInput)
    WndEnd(E_BOOK_WND_OPTION_GOTOLINE)

    WndBegin(E_BOOK_WND_OPTION_BOOKMARK)
        WdgBegin(CLSID_VTMOPTIONMENU,BookMarkOptionWdg)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,5})
            VtmCreateOptionMenuDataRC(5,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_SELECT},TXT_OIL1_N_E_BOOK_SELECT},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_RENAME},TXT_OIL1_N_E_BOOK_RENAME},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_OVERWRITE},TXT_OIL1_N_E_BOOK_OVERWRITE},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_DELETE},TXT_OIL1_N_E_BOOK_DELETE},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_E_BOOK_OPT_DELETE_ALL}, TXT_OIL1_N_E_BOOK_DELETE_ALL} } )
        WdgEnd(CLSID_VTMOPTIONMENU,BookMarkOptionWdg)
    WndEnd(E_BOOK_WND_OPTION_BOOKMARK)
    WndBegin(E_BOOK_WND_OPTION_BOOKMARKEDIT)
        WdgBegin(CLSID_VTMOPTIONMENU,BookMarkEditOptionWdg)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,2})
            VtmCreateOptionMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_TEXT_SAVE},TXT_OIL1_N_SAVE},{{MENUMODEL_ITEM_VISABLE|WDG_MENU_ITEM_FLAG_HAS_CHILD,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_TEXT_INPUT_MENU},TXT_OIL1_N_INPUT_MENU}})
        WdgEnd(CLSID_VTMOPTIONMENU,BookMarkEditOptionWdg)
    WndEnd(E_BOOK_WND_OPTION_BOOKMARKEDIT)
    WndBegin(E_BOOK_WND_FILEINFO)
        WdgBegin(CLSID_VTMPOPUPINFO,FileInfo)
            VtmCreatePopUpInfoRC({IMG_NULL_ID,TXT_OIL1_N_E_BOOK_FILE_INFO})
        WdgEnd(CLSID_VTMPOPUPINFO,FileInfo)
    WndEnd(E_BOOK_WND_FILEINFO)
    WndBegin(E_BOOK_WND_TEXTBROWSESETTING_LANG)
        WdgBegin(CLSID_VTMPOPUPSELECT,SettingLang)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,14, 0,  0})
            VtmCreatePopUpSelectDataRC(14,{
#ifdef __CHINESE_S__
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_GB2312},TXT_LIL_N_GB2312},
#else
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_GB2312},TXT_LIL_N_GB2312},
#endif // __CHINESE_S__
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_UCS2},TXT_LIL_N_UCS2},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_UTF8},TXT_LIL_N_UTF8},
#ifdef __CHINESE_T__
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_BIG5},TXT_LIL_N_ENCODING_BIG5},
#else
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_BIG5},TXT_LIL_N_ENCODING_BIG5},
#endif // __CHINESE_T__
#ifdef __CODEPAGE_TO_UNICODE__
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1250},TXT_LIL_N_ENCODING_WIN1250},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN874},TXT_LIL_N_ENCODING_WIN874},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1251},TXT_LIL_N_ENCODING_WIN1251},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1252},TXT_LIL_N_ENCODING_WIN1252},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1253},TXT_LIL_N_ENCODING_WIN1253},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1254},TXT_LIL_N_ENCODING_WIN1254},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1255},TXT_LIL_N_ENCODING_WIN1255},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1256},TXT_LIL_N_ENCODING_WIN1256},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1257},TXT_LIL_N_ENCODING_WIN1257},
            {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1258},TXT_LIL_N_ENCODING_WIN1258}
#else
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1250},TXT_LIL_N_ENCODING_WIN1250},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN874},TXT_LIL_N_ENCODING_WIN874},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1251},TXT_LIL_N_ENCODING_WIN1251},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1252},TXT_LIL_N_ENCODING_WIN1252},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1253},TXT_LIL_N_ENCODING_WIN1253},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1254},TXT_LIL_N_ENCODING_WIN1254},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1255},TXT_LIL_N_ENCODING_WIN1255},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1256},TXT_LIL_N_ENCODING_WIN1256},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1257},TXT_LIL_N_ENCODING_WIN1257},
            {{MENUMODEL_ITEM_HIDE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_WIN1258},TXT_LIL_N_ENCODING_WIN1258}
#endif // __CODEPAGE_TO_UNICODE__
            })
        WdgEnd(CLSID_VTMPOPUPSELECT,SettingLang)
    WndEnd(E_BOOK_WND_TEXTBROWSESETTING_LANG)
    WndBegin(E_BOOK_WND_TEXTBROWSESETTING_SCROLL)
        WdgBegin(CLSID_VTMPOPUPSELECT,SettingScroll)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,4,	0,	0})
            VtmCreatePopUpSelectDataRC(4,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_SCROLLBY1LINE},TXT_LIL_N_SCROLLBY1LINE},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_SCROLLBY3LINES},TXT_LIL_N_SCROLLBY3LINES},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_SCROLLBY6LINES},TXT_LIL_N_SCROLLBY6LINES},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_E_BOOK_SCROLLBYAPAGE},TXT_LIL_N_SCROLLBYAPAGE}})
        WdgEnd(CLSID_VTMPOPUPSELECT,SettingScroll)
    WndEnd(E_BOOK_WND_TEXTBROWSESETTING_SCROLL)
ApEnd(RS,CLSID_E_BOOK)

