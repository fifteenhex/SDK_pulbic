ApBegin(RS,CLSID_OFFAPP)
    WndBegin(OFF_WND_ANIM)
        WdgBegin(CLSID_IMAGEWIDGET,tOffAnimImage)
#ifdef __USER_DEFINE_POWERONOFF_ANIM__
          WdgImageCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID}})
          WdgImageSetDataByIDRC(IMG_NULL_ID)
#else //__USER_DEFINE_POWERONOFF_ANIM__
#ifndef  __APP_MMI_SMALLROM__
            WdgImageCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,COMMON_IMG_POWERON_ANIM09}})
            WdgImageSetDataByIDRC(COMMON_IMG_POWERON_ANIM09)
#else
             WdgImageCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,COMMON_IMG_POWERON_ANIM04}})
            WdgImageSetDataByIDRC(COMMON_IMG_POWERON_ANIM04)
#endif
#endif //__USER_DEFINE_POWERONOFF_ANIM__
        WdgEnd(CLSID_IMAGEWIDGET,tOffAnimImage)
    WndEnd(OFF_WND_ANIM)

	WndBegin(OFF_WND_VIDEO)
        WdgBegin(CLSID_OSDWIDGET,tVideoOsdWdg)
            WdgOsdCreateForWndRC({{0, 0}, {MAIN_LCD_WIDTH, MAIN_LCD_HEIGHT}})
        WdgEnd(CLSID_OSDWIDGET,tVideoOsdWdg)
	WndEnd(OFF_WND_VIDEO)
#ifdef __DUAL_LCD__
    WndBegin(OFF_SUB_WND_ANIM)
        WdgBegin(CLSID_IMAGEWIDGET,tSubOffAnimImage)
            WdgImageCreateForWndRC({{0,0},{SUB_LCD_WIDTH,SUB_LCD_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,SUB_COMMON_IMG_POWERON_ANIM09}})
            WdgImageSetDataByIDRC(SUB_COMMON_IMG_POWERON_ANIM09)
        WdgEnd(CLSID_IMAGEWIDGET,tSubOffAnimImage)
    WndEnd(OFF_SUB_WND_ANIM)
#endif

    WndBegin(OFF_WND_IFONE)
        WndSetSoftkeyVisibleRC(FALSE)
        WndSetStatusBarVisibleRC(FALSE)

        WdgBegin(CLSID_IMAGEWIDGET,tIfnBgImage)
#ifdef __APP_MMI_SMALLROM__
            WdgImageCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,WALLPAPER_IMG_04}})
#else     // !__APP_MMI_SMALLROM__
            WdgImageCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,WALLPAPER_IMG_05}})
#endif   // !__APP_MMI_SMALLROM__
        WdgEnd(CLSID_IMAGEWIDGET,tIfnBgImage)

        WdgBegin(CLSID_FADEOUTWIDGET,tIfnFade)
            WdgFadeoutCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},0})
        WdgEnd(CLSID_FADEOUTWIDGET,tIfnFade)

        WdgBegin(CLSID_IMAGEWIDGET,tIfnBtnImage)
            WdgImageCreateForWndRC({{OFFAPP_BOTTOMBGWIDGET_POS_X,OFFAPP_BOTTOMBGWIDGET_POS_Y},{MAIN_LCD_WIDTH,OFFAPP_BOTTOMBGWIDGET_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,COMMON_IMG_POWEROFF_BG}})
            WdgImageSetDataByIDRC(COMMON_IMG_POWEROFF_BG)
        WdgEnd(CLSID_IMAGEWIDGET,tIfnBtnImage)

        WdgBegin(CLSID_BUTTONWIDGET,tIfnBtn)
            WdgButtonCreateForWndRC({{OFFAPP_BUTTONWIDGET_POS_X,OFFAPP_BUTTONWIDGET_POS_Y},{OFFAPP_BUTTONWIDGET_WIDTH,OFFAPP_BUTTONWIDGET_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_OIL1_N_CANCEL,COMMON_IMG_BUTTON_GREY_BIG_UNPRESSED,COMMON_IMG_BUTTON_GREY_BIG_PRESSED})
            WdgButtonSetUnpressedTextColorRC(DEF_THM_OFFAPP_BUTTON_TEXT)
            WdgButtonSetPressedTextColorRC(DEF_THM_OFFAPP_BUTTON_TEXT)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
        WdgEnd(CLSID_BUTTONWIDGET,tIfnBtn)
    WndEnd(OFF_WND_IFONE)

    WndBegin(OFF_WND_OPTION)
        WdgBegin(CLSID_VTMOPTIONMENU,vtmOption)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,2})
            VtmCreateOptionMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_OFFAPP_SWITCHOFF},TXT_OIL1_N_SWITCH_OFF},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_OFFAPP_WITHOUTALARM},TXT_OIL1_N_OFF_WITHOUT_ALARM}} )
        WdgEnd(CLSID_VTMOPTIONMENU,vtmOption)
    WndEnd(OFF_WND_OPTION)
    WndBegin(SM_WND_MAIN)
        WndSetTitleRC({IMG_NULL_ID,TXT_LIL_N_SWITCH_MODE})

        WdgBegin(CLSID_MENUWIDGET,tSmMenu)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT-MAIN_TITLE_HEIGHT-MAIN_SK_HEIGHT},WDG_MENU_TYPE_NORMAL})
            WdgMenuSetCheckStyleRC(WDG_MENU_CHECK_STYLE_RADIO)
        WdgEnd(CLSID_MENUWIDGET,tSmMenu)
    WndEnd(SM_WND_MAIN)    
ApEnd(RS,CLSID_OFFAPP)

