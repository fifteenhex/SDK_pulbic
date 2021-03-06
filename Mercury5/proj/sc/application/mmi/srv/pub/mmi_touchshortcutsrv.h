/**
* @file mmi_touchshortcutsrv.h
*
* Service without using State Machine - TOUCHSHORTCUTSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_TOUCHSHORTCUTSRV
* Interface Id: IID_TOUCHSHORTCUTSRV
*
* @version $Id$
*/
#ifndef __MMI_TOUCHSHORTCUTSRV_H__
#define __MMI_TOUCHSHORTCUTSRV_H__

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"

//Use these bits to enable or disable Touchshortcuts 1~8 from Left to Right
//To disable or enable all, please OR all these Masks
typedef enum
{
    TOUCHSHORTCUTSRV_NOMASK = 0
   ,TOUCHSHORTCUT_SHORTCUT_MASK_1 = 1 << 0
   ,TOUCHSHORTCUT_SHORTCUT_MASK_2 = 1 << 1
   ,TOUCHSHORTCUT_SHORTCUT_MASK_3 = 1 << 2
   ,TOUCHSHORTCUT_SHORTCUT_MASK_4 = 1 << 3
   ,TOUCHSHORTCUT_SHORTCUT_MASK_5 = 1 << 4
   ,TOUCHSHORTCUT_SHORTCUT_MASK_6 = 1 << 5
   ,TOUCHSHORTCUTSRV_ALLMASK = 0xFFFF
} TOUCHSHORTCUTSRV_NOTIFY_MASK_e;

/**
 * External Events
 */
#define TOUCHSHORTCUTSRV_EVT_SHORTCUT1              (CLSID_TOUCHSHORTCUTSRV << 16 | 1)
#define TOUCHSHORTCUTSRV_EVT_SHORTCUT2              (CLSID_TOUCHSHORTCUTSRV << 16 | 2)
#define TOUCHSHORTCUTSRV_EVT_SHORTCUT3              (CLSID_TOUCHSHORTCUTSRV << 16 | 3)
#define TOUCHSHORTCUTSRV_EVT_SHORTCUT4              (CLSID_TOUCHSHORTCUTSRV << 16 | 4)
#define TOUCHSHORTCUTSRV_EVT_SHORTCUT5              (CLSID_TOUCHSHORTCUTSRV << 16 | 5)
#define TOUCHSHORTCUTSRV_EVT_SHORTCUT6              (CLSID_TOUCHSHORTCUTSRV << 16 | 6)


#ifdef __TOUCH_HOTKEY__
/**
 * ITOUCHSHORTCUTSRV Interfaces
 */
#define INHERIT_ITOUCHSHORTCUTSRV(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*DisableShortcut)      ( IName * , u16 ShortcutMask);  \
    MAE_Ret     (*EnableShortcut)       ( IName * , u16 ShortcutMask);  \
    MAE_Ret     (*RegisterListener)     ( IName * , void *pCallerID, u32 nMask);  \
    MAE_Ret     (*DeRegisterListener)       ( IName * , void *pCallerID, u32 nMask)

DEFINE_INTERFACE(ITOUCHSHORTCUTSRV);


#define ITOUCHSHORTCUTSRV_QueryInterface(pICntlr, id, pp, po)           GET_FUNCTBL((pICntlr), ITOUCHSHORTCUTSRV)->QueryInterface(pICntlr, id, pp, po)
#define ITOUCHSHORTCUTSRV_HandleEvent(pICntlr, e, p1, p2)               GET_FUNCTBL((pICntlr), ITOUCHSHORTCUTSRV)->HandleEvent(pICntlr, e, p1, p2)
#define ITOUCHSHORTCUTSRV_DisableShortcut(pICntlr, p1)  GET_FUNCTBL((pICntlr), ITOUCHSHORTCUTSRV)->DisableShortcut( pICntlr, p1)
#define ITOUCHSHORTCUTSRV_EnableShortcut(pICntlr, p1)   GET_FUNCTBL((pICntlr), ITOUCHSHORTCUTSRV)->EnableShortcut( pICntlr, p1)
#define ITOUCHSHORTCUTSRV_RegisterListener(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), ITOUCHSHORTCUTSRV)->RegisterListener( pICntlr, p1, p2)
#define ITOUCHSHORTCUTSRV_DeRegisterListener(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), ITOUCHSHORTCUTSRV)->DeRegisterListener( pICntlr, p1, p2)



/**
 * Functions
 */

void TOUCHSHORTCUTSRV_Init(void);

MAE_Ret TOUCHSHORTCUTSRV_New(MAE_ClsId id, void **ppObj);

#endif //__TOUCH_HOTKEY__
#endif /* __MMI_TOUCHSHORTCUTSRV_H__ */
