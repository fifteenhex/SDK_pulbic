ApBegin(RS,CLSID_NETWORKCOUNTERAPP)
    WndBegin(NETWORKCOUNTER_WND_COUNTERLIST)
        WndSetTitleRC({IMG_NULL_ID,TXT_LIL_N_NETWORK_COUNTER})
        WdgBegin(CLSID_VTMMENU, CounterListMenuWdg)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NETWORK_COUNTER,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_NONE,2,0,0})
            VtmCreateMenuDataRC(2, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_EXIT}, MNU_NETWORKCOUNTER_CELL_COUNTER}, TXT_LIL_N_CELL_COUNTER},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_EXIT}, MNU_NETWORKCOUNTER_WLAN_COUNTER}, TXT_LIL_N_WLAN_COUNTER}})
        WdgEnd(CLSID_VTMMENU, CounterListMenuWdg)
    WndEnd(NETWORKCOUNTER_WND_COUNTERLIST)
    WndBegin(NETWORKCOUNTER_WND_COUNTER)
        WdgBegin(CLSID_VTMMENU, CounterMenuWdg)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_NONE,5,0,0})
            VtmCreateMenuDataRC(5, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_NETWORKCOUNTER_LAST_SENT}    , TXT_LIL_N_LAST_SENT},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_NETWORKCOUNTER_LAST_RECEIVED}, TXT_LIL_N_LAST_RECEIVED},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_NETWORKCOUNTER_ALL_SENT}     , TXT_LIL_N_ALL_SENT},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_NETWORKCOUNTER_ALL_RECEIVED} , TXT_LIL_N_ALL_RECEIVED},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_NETWORKCOUNTER_RESET_ALL}    , TXT_LIL_N_RESET_ALL}})
        WdgEnd(CLSID_VTMMENU, CounterMenuWdg)
    WndEnd(NETWORKCOUNTER_WND_COUNTER)    
ApEnd(RS,CLSID_NETWORKCOUNTERAPP)

