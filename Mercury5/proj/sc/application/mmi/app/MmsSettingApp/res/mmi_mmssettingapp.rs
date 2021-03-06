ApBegin(RS,CLSID_MMSA)
 	WndBegin(MMSA_WND_MAIN_MENU_VIEW)
        WdgBegin(CLSID_VTMMENU,MainMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_MMS_SETTING,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
        WdgEnd(CLSID_VTMMENU,MainMenu)
	WndEnd(MMSA_WND_MAIN_MENU_VIEW)

 	WndBegin(MMSA_WND_SENDOPTION_MENU_VIEW)
        WdgBegin(CLSID_VTMMENU,OptionMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_OIL1_N_SEND_OPTIONS,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
        WdgEnd(CLSID_VTMMENU,OptionMenu)
	WndEnd(MMSA_WND_SENDOPTION_MENU_VIEW)
	
    WndBegin(MMSA_WND_SENDOPTION_RADIOLIST_VIEW)
        WdgBegin(CLSID_VTMMENU,SendOptionList)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,0,0,0})
        WdgEnd(CLSID_VTMMENU,SendOptionList)
    WndEnd(MMSA_WND_SENDOPTION_RADIOLIST_VIEW)	
    
 	WndBegin(MMSA_WND_PAGESETTING_MENU_VIEW)
        WdgBegin(CLSID_VTMMENU,PageSettingMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_OIL1_N_PAGE_SETTINGS,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
        WdgEnd(CLSID_VTMMENU,PageSettingMenu)
	WndEnd(MMSA_WND_PAGESETTING_MENU_VIEW)

    WndBegin(MMSA_WND_PAGESETTING_RADIOLIST_VIEW)
        WdgBegin(CLSID_VTMMENU,PageSettingPopupList)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,0,0,0})
        WdgEnd(CLSID_VTMMENU,PageSettingPopupList)
    WndEnd(MMSA_WND_PAGESETTING_RADIOLIST_VIEW)	

	WndBegin(MMSA_WND_PAGESETTING_EDITOR_VIEW)
		WdgBegin(CLSID_VTMPOPUPINPUT,PageSettingInput)
			VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_NULL_ID,MAE_INPUTMODE_NUMERIC})
		WdgEnd(CLSID_VTMPOPUPINPUT,PageSettingInput)        
	WndEnd(MMSA_WND_PAGESETTING_EDITOR_VIEW)

	WndBegin(MMSA_WND_DUALSIMSELECT_MENU_VIEW)    
	   WdgBegin(CLSID_VTMSIMSELECTION,DualSimSelect)
	        VtmCreateSimSelectionRC({IMG_NULL_ID,TXT_LIL_N_MMS_SETTING})
	    WdgEnd(CLSID_VTMSIMSELECTION,DualSimSelect)    
	WndEnd(MMSA_WND_DUALSIMSELECT_MENU_VIEW)
ApEnd(RS,CLSID_MMSA)



