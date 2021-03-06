
ApBegin(RS,CLSID_PACMAN)
    
    WndBegin(PACMAN_WND_MAIN_OPTIONMENU)
        WdgBegin(CLSID_VTMOPTIONMENU, VtmOptionMenu)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT, 1})
            VtmCreateOptionMenuDataRC(1, {
            {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_SELECT, SK_BACK}, PACMAN_OPTION_MENU_ITEM_SETTINGS}, TXT_OIL1_N_SETTINGS}
            })
        WdgEnd(CLSID_VTMOPTIONMENU,VtmOptionMenu)
    WndEnd(PACMAN_WND_MAIN_OPTIONMENU)
    
    WndBegin(PACMAN_WND_SETTINGS) 
    	WdgBegin(CLSID_VTMMENU,tSettings) 
    		VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_GAME_SETTINGS,WDG_MENU_TYPE_NUMERIC,WDG_MENU_ITEM_TYPE_IMAGE_TEXT,WDG_MENU_CHECK_STYLE_NONE,2,1,1}) 
    		VtmCreateMenuDataRC(2, { 
    																{{MENUMODEL_ITEM_VISABLE,{SK_SELECT, SK_OK, SK_BACK},PACMAN_SETTINGS_SOUND},{IMG_NULL_ID, TXT_LIL_N_SOUND}}, 
    																{{MENUMODEL_ITEM_VISABLE,{SK_SELECT, SK_OK, SK_BACK},PACMAN_SETTINGS_VOLUME },{IMG_NULL_ID, TXT_LIL_N_VOLUME}} })
      WdgEnd(CLSID_VTMMENU,tSettings) 
    WndEnd(PACMAN_WND_SETTINGS)
	
    
		WndBegin(PACMAN_WND_VOLUME)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
        WndSetTitleRC({IMG_NULL_ID, TXT_LIL_N_VOLUME})
    WndEnd(PACMAN_WND_VOLUME)
  
  	WndBegin(PACMAN_WND_SOUND)
			WdgBegin(CLSID_VTMMENU,tSound)
				VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_SOUND,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0})
				VtmCreateMenuDataRC(2, { 
                                     {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},PACMAN_SOUND_ON},TXT_LIL_N_ON},
                                     {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},PACMAN_SOUND_OFF },TXT_LIL_N_OFF} })
		WdgEnd(CLSID_VTMMENU,tSound)
	WndEnd(PACMAN_WND_SOUND)  
ApEnd(RS,CLSID_PACMAN)

