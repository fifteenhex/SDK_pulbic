#ifndef __MMI_COMMON_VTM_RS__
#define __MMI_COMMON_VTM_RS__

#endif /*__MMI_COMMON_VTM_RS__*/

ApBegin(RS,CLSID_VTMAPP)
    WndBegin(CLSID_VTMDATEINPUT)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
#ifndef __WIDGET_DISABLE_FINGERCOMMAND__
        WdgBegin(CLSID_FCDATE_WIDGET,FcDateWdg)
            WdgFcDateCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_DEFVIEW_WIDTH,MAINVIEW_HEIGHT},{0,1,1,1,0,0,0,0}})
        WdgEnd(CLSID_FCDATE_WIDGET,FcDateWdg)
#else
    WdgBegin(CLSID_DATE_WIDGET,DateWdg)
            WdgDateCreateForWndRC({{DATEINPUT_WIDGET_POS_X,MAIN_LCD_ONELINE_HEIGHT*4},{DATEINPUT_WIDGET_WIDTH,MAIN_LCD_ONELINE_HEIGHT},{0,0,0,0,0,0,0,0}})
        WdgEnd(CLSID_DATE_WIDGET,DateWdg)

        WdgBegin(CLSID_TEXT_WIDGET,DateTextWdg)
            WdgTextCreateForWndRC({{DATEINPUT_WIDGET_POS_X,MAIN_LCD_ONELINE_HEIGHT*3},{DATEINPUT_WIDGET_WIDTH,MAIN_LCD_ONELINE_HEIGHT},TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_LIL_N_DATE)
        WdgEnd(CLSID_TEXT_WIDGET,DateTextWdg)
#endif
    WndEnd(CLSID_VTMDATEINPUT)

    WndBegin(CLSID_VTMIMG)
        WndSetStatusBarVisibleRC(VIEWSB_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_INVISIABLE)
        WdgBegin(CLSID_IMAGEWIDGET,ImgWdg)
            WdgImageCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID}})
            WdgCommonSetBGColorRC(DEF_THM_COMMON_VTM_IMG_BG)
        WdgEnd(CLSID_IMAGEWIDGET,ImgWdg)
    WndEnd(CLSID_VTMIMG)

    WndBegin(CLSID_VTMINPUT)
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WndSetAllSoftkeyRC({SK_OPTION, SK_OK, SK_CANCEL})
        WdgBegin(CLSID_INPUTWIDGET,InputWdg)
            WdgInputCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_DEFVIEW_WIDTH,MAINVIEW_HEIGHT},{0,0}})
            WdgInputSetMultilineRC(TRUE)
            WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE)
            WdgCommonEnableScrollBarRC(SCROLL_STYLE_V_RIGHT)
        WdgEnd(CLSID_INPUTWIDGET,InputWdg)
    WndEnd(CLSID_VTMINPUT)
    WndBegin(CLSID_VTMPROMPTINPUT)
        WndSetAllSoftkeyRC({SK_OPTION, SK_OK, SK_CANCEL})
        WdgBegin(CLSID_TEXTWIDGET,TxtWdg)
            WdgTextCreateForWndRC({{4,MAIN_TITLE_HEIGHT*3},{MAINVIEW_WIDTH-8,MAIN_TITLE_HEIGHT},TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_PML_N_PAIR_PASSCODE)
        WdgEnd(CLSID_TEXTWIDGET,TxtWdg)
        WdgBegin(CLSID_INPUTWIDGET,PromptInput)
            WdgInputCreateForWndRC({{4,MAIN_TITLE_HEIGHT*4},{MAINVIEW_WIDTH-8,MAIN_TITLE_HEIGHT},{0,0}})
            WdgInputSetPasswordStyleRC(TRUE)
            WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_NUMERIC)
            WdgInputSetDisableSwitchInputModeRC(TRUE)
            WdgInputSetDisableSymbolTableRC(TRUE)
            WdgInputSetMultilineRC(FALSE)
            WdgInputSetHandWritingEnableRC(FALSE)
        WdgEnd(CLSID_INPUTWIDGET,PromptInput)
    WndEnd(CLSID_VTMPROMPTINPUT)
    WndBegin(CLSID_VTMTIMEINPUT)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
#ifndef __WIDGET_DISABLE_FINGERCOMMAND__
        WdgBegin(CLSID_FCTIME_WIDGET,FcTimeWdg)
            WdgFcTimeCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_DEFVIEW_WIDTH,MAINVIEW_HEIGHT},FCTIME_STYLE_FCTIME,{0,1,1,1,0,0,0,0}})
        WdgEnd(CLSID_FCTIME_WIDGET,FcTimeWdg)
#else
            WdgBegin(CLSID_TIME_WIDGET,TimeWdg)
            WdgTimeCreateForWndRC({{TIMEINPUT_WIDGET_POS_X,MAIN_LCD_ONELINE_HEIGHT*4},{TIMEINPUT_WIDGET_WIDTH,MAIN_LCD_ONELINE_HEIGHT}})
        WdgEnd(CLSID_TIME_WIDGET,TimeWdg)

        WdgBegin(CLSID_TEXT_WIDGET,TimeTextWdg)
            WdgTextCreateForWndRC({{TIMEINPUT_WIDGET_POS_X,MAIN_LCD_ONELINE_HEIGHT*3},{TIMEINPUT_WIDGET_WIDTH,MAIN_LCD_ONELINE_HEIGHT},TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_LIL_N_TIME)
        WdgEnd(CLSID_TEXT_WIDGET,TimeTextWdg)
#endif
    WndEnd(CLSID_VTMTIMEINPUT)
    WndBegin(CLSID_VTMIMGGRID)
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_BACK})
        WdgBegin(CLSID_IMGGRID_MENUWIDGET,ImgGridWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAINVIEW_WIDTH,MAINVIEW_HEIGHT},WDG_MENU_TYPE_IMG_GRID})
        WdgEnd(CLSID_IMGGRID_MENUWIDGET,ImgGridWdg)
    WndEnd(CLSID_VTMIMGGRID)
    WndBegin(CLSID_VTMIMGTHUMB)
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WndSetAllSoftkeyRC({SK_OPTION, SK_OK, SK_BACK})
        WdgBegin(CLSID_IMGGRID_MENUWIDGET,ImgThumbWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_DEFVIEW_WIDTH,MAIN_LCD_HEIGHT-MAIN_TITLE_HEIGHT*2},WDG_MENU_TYPE_IMG_GRID})
            WdgCommonSetBGColorRC(DEF_THM_COMMON_VTM_IMG_THUMB_BG)
        WdgEnd(CLSID_IMGGRID_MENUWIDGET,ImgThumbWdg)
    WndEnd(CLSID_VTMIMGTHUMB)
    WndBegin(CLSID_VTMMENU)
        WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_BACK})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_NUMERIC_MENUWIDGET,NumericWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAINVIEW_WIDTH,MAINVIEW_HEIGHT},WDG_MENU_TYPE_NUMERIC})
        WdgEnd(CLSID_NUMERIC_MENUWIDGET,NumericWdg)
    WndEnd(CLSID_VTMMENU)
    WndBegin(CLSID_VTMSIMSELECTION)
        WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_BACK})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_MENUWIDGET,MenuWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAINVIEW_WIDTH,MAINVIEW_HEIGHT},WDG_MENU_TYPE_NORMAL})
        WdgEnd(CLSID_MENUWIDGET,MenuWdg)
    WndEnd(CLSID_VTMSIMSELECTION)
    WndBegin(CLSID_VTMTABMENU)
        WndSetAllSoftkeyRC({SK_OPTION, SK_OK, SK_CANCEL})
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_TAB_WIDGET,TabWdg)
            WdgTabCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_DEFVIEW_WIDTH,MAIN_DEFVIEW_HEIGHT-MAIN_TITLE_HEIGHT},0})
            WdgTabSetModeRC(TAB_WDG_MODE_TOP_IMAGE_ONLY)
        WdgEnd(CLSID_TAB_WIDGET,TabWdg)
        WdgBegin(CLSID_MENUWIDGET,TabMenu)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT*2},{MAIN_DEFVIEW_WIDTH,MAIN_DEFVIEW_HEIGHT-MAIN_TITLE_HEIGHT*2},WDG_MENU_TYPE_NORMAL})
        WdgEnd(CLSID_MENUWIDGET,TabMenu)
    WndEnd(CLSID_VTMTABMENU)
    WndBegin(CLSID_VTMTXTGRID)
        WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_BACK})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_TXTGRID_MENUWIDGET,TxtGridWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAINVIEW_WIDTH,MAINVIEW_HEIGHT},WDG_MENU_TYPE_TXT_GRID})
            WdgMenuSetCheckStyleRC(WDG_MENU_CHECK_STYLE_NONE)
        WdgEnd(CLSID_TXTGRID_MENUWIDGET,TxtGridWdg)
    WndEnd(CLSID_VTMTXTGRID)

    WndBegin(CLSID_VTMPOPUPSELECT)
        WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_CANCEL})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_MENUWIDGET,SelectWdg)
            WdgMenuCreateForWndRC({{0,0},{MAIN_DEFVIEW_WIDTH,MAIN_DEFVIEW_HEIGHT},WDG_MENU_TYPE_POPUPSELECT_MENU})
        WdgEnd(CLSID_MENUWIDGET,SelectWdg)
    WndEnd(CLSID_VTMPOPUPSELECT)

    WndBegin(CLSID_VTMPOPUPPROMPT)
        RSCustomize(WPos_t,TitlePos,{TRUE, 0,VTMPOPUPPROMPT_RS_POS_Y})
        WndSetAllSoftkeyRC({DEFAULT_SK, DEFAULT_SK, SK_EXIT})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_IMAGEWIDGET,BgImgWdg)
            WdgImageCreateForWndRC({{0,VTMPOPUPPROMPT_RS_BG_IMG_POS_Y},{MAIN_LCD_WIDTH,VTMPOPUPPROMPT_RS_BG_IMG_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,COMMON_IMG_LIST_INFO_BG}})
            WdgCommonSetBGColorRC(DEF_THM_COMMON_COLOR_POPUP_INPUT_BG)
        WdgEnd(CLSID_IMAGEWIDGET,BgImgWdg)
        WdgBegin(CLSID_TEXTWIDGET,PromptTxt)
            WdgTextCreateForWndRC({{POPUPINPUT_INFO_POS_X,VTMPOPUPPROMPT_RS_TXT_POS_Y},{MAIN_LCD_WIDTH,VTMPOPUPPROMPT_RS_TXT_HEIGHT},TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_LIL_N_DETAIL_NAME)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgCommonSetTextColorRC(DEF_THM_COMMON_COLOR_LIST_INFO_TEXT)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER | ALIGN_V_MIDDLE)
        WdgEnd(CLSID_TEXTWIDGET,PromptTxt)
        WdgBegin(CLSID_INPUTWIDGET,PromptWdg)
            WdgInputCreateForWndRC({{VTMPOPUPPROMPT_RS_PROMPT_POS_X,VTMPOPUPPROMPT_RS_PROMPT_POS_Y},{VTMPOPUPPROMPT_RS_PROMPT_WIDTH,VTMPOPUPPROMPT_RS_PROMPT_HEIGHT},{0,0}})
            WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_NUMERIC)
            WdgInputSetDisableSwitchInputModeRC(TRUE)
            WdgInputSetSoftKeyBoardEnableRC(TRUE)
            WdgInputSetHandWritingEnableRC(FALSE)
            WdgCommonSetBorderDataRC({1,1,1,1,DEF_THM_COMMON_VTM_PROMPT_BORDER})
        WdgEnd(CLSID_INPUTWIDGET,PromptWdg)
    WndEnd(CLSID_VTMPOPUPPROMPT)

    WndBegin(CLSID_VTMPOPUPINPUT)
        WndSetAllSoftkeyRC({DEFAULT_SK, DEFAULT_SK, SK_EXIT})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_IMAGEWIDGET,InputBgWdg)
            WdgImageCreateForWndRC({{0,MAIN_TITLE_HEIGHT*7},{MAIN_LCD_WIDTH,VTMPOPUPINPUT_RS_INPUT_BG_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,COMMON_IMG_LIST_INFO_BG}})
            WdgCommonSetBGColorRC(DEF_THM_COMMON_COLOR_POPUP_INPUT_BG)
        WdgEnd(CLSID_IMAGEWIDGET,InputBgWdg)
        WdgBegin(CLSID_INPUTWIDGET,PopInputWdg)
           WdgInputCreateForWndRC({{VTMPOPUPINPUT_RS_POP_INPUT_POS_X,MAIN_TITLE_HEIGHT*7},{VTMPOPUPINPUT_RS_POP_INPUT_WIDTH,VTMPOPUPINPUT_RS_POP_INPUT_HEIGHT},{0,0}})
            WdgInputSetDisableSwitchInputModeRC(TRUE)
            WdgInputSetSoftKeyBoardEnableRC(TRUE)
            WdgInputSetHandWritingEnableRC(FALSE)
            WdgCommonSetBorderDataRC({1,1,1,1,DEF_THM_COMMON_VTM_POP_INPUT_BORDER})
        WdgEnd(CLSID_INPUTWIDGET,PopInputWdg)
    WndEnd(CLSID_VTMPOPUPINPUT)

    WndBegin(CLSID_VTMPOPUPINFO)
        WndSetAllSoftkeyRC({SK_NONE, SK_NONE, SK_CLOSE})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_IMAGEWIDGET,InfoBgWdg)
            WdgImageCreateForWndRC({{POPUPINFO_START_POS_X,POPUPINFO_START_POS_Y+MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,POPUPINFO_MAIN_TEXT_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID}})
        WdgEnd(CLSID_IMAGEWIDGET,InfoBgWdg)
        WdgBegin(CLSID_TEXTWIDGET,ThmTxtWdg)
            WdgTextCreateForWndRC({{POPUPINFO_START_POS_X,POPUPINFO_START_POS_Y+MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,POPUPINFO_MAIN_TEXT_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetPaddingDataRC({POPUPINFO_PADDING, 0, 0, 0})
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgCommonSetTextColorRC(DEF_THM_COMMON_COLOR_LIST_TEXT)
            WdgTextSetLayoutFlagRC(LAYOUT_MULTILINE)
            WdgCommonSetAlignmentRC(ALIGN_H_START | ALIGN_V_TOP)
            WdgTextSetFontHeightRC(MAIN_SINGLE_LINE_MENU_ITEM_HEIGHT)
        WdgEnd(CLSID_TEXTWIDGET,ThmTxtWdg)
        WdgBegin(CLSID_VIEWPORTWIDGET,ViewportWdg)
            WdgViewportCreateForWndRC({{POPUPINFO_START_POS_X,POPUPINFO_START_POS_Y+MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,POPUPINFO_MAIN_TEXT_HEIGHT},MAIN_LCD_ONELINE_HEIGHT,ALIGN_H_START|ALIGN_V_TOP})
            WdgCommonEnableScrollBarRC(SCROLL_STYLE_V_RIGHT)
            WdgCommonSetBGColorRC(DEF_THM_COMMON_VTM_VIEWPORT_BG)
        WdgEnd(CLSID_VIEWPORTWIDGET,ViewportWdg)
    WndEnd(CLSID_VTMPOPUPINFO)

    WndBegin(CLSID_VTMOPTIONMENU)
        WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_CANCEL})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_MENUWIDGET,OptWdg)
            WdgMenuCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_OPTION_MENU})
        WdgEnd(CLSID_MENUWIDGET,OptWdg)
    WndEnd(CLSID_VTMOPTIONMENU)

    WndBegin(CLSID_VTMIPINPUT)
        RSCustomize(WPos_t,TitlePos,{ TRUE, 0, VTMIPINPUT_RS_POS_Y})
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
        WndSetStatusBarVisibleRC(VIEWSK_INVISIABLE)
        WndSetSoftkeyVisibleRC(VIEWSK_VISIABLE)
        WdgBegin(CLSID_IMAGEWIDGET,IpBgWdg)
        WdgImageCreateForWndRC({{0,VTMIPINPUT_RS_IPBG_POS_Y},{MAIN_LCD_WIDTH,VTMIPINPUT_RS_IPBG_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,COMMON_IMG_LIST_INFO_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,IpBgWdg)
        WdgBegin(CLSID_IPWIDGET,IpWdg)
            WdgIPCreateForWndRC({{VTMIPINPUT_RS_IP_POS_X,VTMIPINPUT_RS_IP_POS_Y},{VTMIPINPUT_RS_IP_WIDTH,VTMIPINPUT_RS_IP_HEIGHT},0})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_IPWIDGET,IpWdg)
    WndEnd(CLSID_VTMIPINPUT)
ApEnd(RS,CLSID_VTMAPP)

