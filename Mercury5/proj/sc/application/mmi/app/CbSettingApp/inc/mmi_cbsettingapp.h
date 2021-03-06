/**
* @file mmi_cbsettingapp.h
*
* State Machine Application - CBSAPP
* Generated by XFSM v1.0, CodeVer=v0.24 
*
* Class Id: CLSID_CBSAPP
* 
*
* @version $Id: mmi_cbsapp.h 24721 2009-03-04 08:56:01Z joe.hsu $
*/
#ifndef __MMI_CBSETTINGAPP_H__
#define __MMI_CBSETTINGAPP_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"

#define MAX_CBSAPP_EDITOR_BYTE 40

/**
 * External Events
 */
#define CBSAPP_EVT_EXT_CONFIRM				(CLSID_CBSAPP << 16 | 1)
#define CBSAPP_EVT_MCA_EVT_MENU_DELETE				(CLSID_CBSAPP << 16 | 2)
#define CBSAPP_EVT_MENU_DELETE_ALL				(CLSID_CBSAPP << 16 | 3)
#define CBSAPP_EVT_MENU_OPTION				(CLSID_CBSAPP << 16 | 4)
#define CBSAPP_EVT_MENU_SELECT				(CLSID_CBSAPP << 16 | 5)
#define CBSAPP_EVT_MENU_BACK				(CLSID_CBSAPP << 16 | 6)
#define CBSAPP_EVT_MENU_CB_SETTING				(CLSID_CBSAPP << 16 | 7)
#define CBSAPP_EVT_MENU_RECEPTION				(CLSID_CBSAPP << 16 | 8)
#define CBSAPP_EVT_MENU_CB_TOPIC				(CLSID_CBSAPP << 16 | 9)
#define CBSAPP_EVT_MENU_CB_LANGUAGE				(CLSID_CBSAPP << 16 | 10)
#define CBSAPP_EVT_MENU_CB_CELL_INFO				(CLSID_CBSAPP << 16 | 11)
#define CBSAPP_EVT_MENU_ENABLE_DISABLE_TOPIC				(CLSID_CBSAPP << 16 | 12)
#define CBSAPP_EVT_MENU_EDIT_TOPIC				(CLSID_CBSAPP << 16 | 13)
#define CBSAPP_EVT_MENU_DELETE_TOPIC				(CLSID_CBSAPP << 16 | 14)
#define CBSAPP_EVT_MENU_DELETE_ALL_TOPIC				(CLSID_CBSAPP << 16 | 15)
#define CBSAPP_EVT_RELOAD				(CLSID_CBSAPP << 16 | 16)
#define CBSAPP_EVT_BACK_TO_MENU				(CLSID_CBSAPP << 16 | 17)
#define CBSAPP_EVT_PROCESSING_DONE				(CLSID_CBSAPP << 16 | 18)
#define CBSAPP_EVT_PROCESSING_FAIL				(CLSID_CBSAPP << 16 | 19)
#define CBSAPP_EVT_MENU_MAIN				(CLSID_CBSAPP << 16 | 20)



/**
 * Functions
 */
void CBSAPP_Init(void);

MAE_Ret CBSAPP_New(MAE_ClsId id, void **ppObj);

#endif /* __MMI_CBSETTINGAPP_H__ */
