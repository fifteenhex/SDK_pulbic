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
* @file    mmi_kingmovieapp.h
* @version
* @brief   KingMovie header file
*
*/

#ifndef __MMI_KINGMOVIEAPP_H__
#define __MMI_KINGMOVIEAPP_H__

/*=============================================================*/
// Include files
/*=============================================================*/
#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"

/*=============================================================*/
// Extern definition
/*=============================================================*/

/*=============================================================*/
// Macro definition
/*=============================================================*/

/*=============================================================*/
// Data type definition
/*=============================================================*/

/*=============================================================*/
// Variable definition
/*=============================================================*/

/*=============================================================*/
// Global function definition
/*=============================================================*/
/** KingMovieAppNew
* @brief        New function for create KINGMOVIE Applet
*
* @param[in]    nClsId              KINGMOVIE class id
* @param[in]    ppObj               The pointer of pointer of Applet
*
* @retval       MAE_RET_SUCCESS     Success.
* @retval       other               Fail
*
*/
MAE_Ret KingMovieAppNew
(
    MAE_ClsId   nClsId,
    void        **ppObj
);

#endif /* __MMI_KINGMOVIEAPP_H__ */
