////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (��MStar Confidential Information��) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

/**
* @file mmi_btnotifyapp.h
*
* Class Id: CLSID_BTNOTIFYAPP
*
* @version $Id: mmi_btnotifyapp.h 21476 2009-02-02 11:17:43Z cosmo.sung $
*/
#ifndef __MMI_BTNOTIFYAPP_H__
#define __MMI_BTNOTIFYAPP_H__

/*=============================================================*/
// Include files
/*=============================================================*/
#include "mmi_mae_common_def.h"
#include "mmi_srv_header.h"
#include "mmi_launcher_btnotify.h"

/*=============================================================*/
// Global function definition
/*=============================================================*/
void BtNotifyPreNew(void);
void BtNotifyAppFreeStartData(IBase *pOwner, u32 nParam);
MAE_Ret BtNotifyAppNew(MAE_ClsId id, void **ppObj);

#endif /* __MMI_BTNOTIFYAPP_H__ */
