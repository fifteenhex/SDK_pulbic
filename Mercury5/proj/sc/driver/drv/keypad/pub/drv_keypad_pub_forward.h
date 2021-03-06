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
* @file    drv_keypad_pub_forward.h
* @version
* @brief   Keypad driver interface
*
*/

#ifndef __DRV_KEYPAD_PUB_FORWARD_H__
#define __DRV_KEYPAD_PUB_FORWARD_H__

/*=============================================================*/
// Include files
/*=============================================================*/
#include "vm_types.ht"

/*=============================================================*/
// Macro definition
/*=============================================================*/

/*=============================================================*/
// Data type definition
/*=============================================================*/
opaque_enum(DrvKeyPadErrCode_e_);
typedef enum DrvKeyPadErrCode_e_ DrvKeyPadErrCode_e;

opaque_enum(CusOfnSensitivityLevel_e_);
typedef enum CusOfnSensitivityLevel_e_ CusOfnSensitivityLevel_e;

typedef struct Cust_KeyTbl_t_ Cust_KeyTbl_t;

/*=============================================================*/
// Global function definition
/*=============================================================*/

#endif /* __DRV_KEYPAD_PUB_FORWARD_H__ */




