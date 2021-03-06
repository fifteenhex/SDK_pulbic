////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2017 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// ("MStar Confidential Information") by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

/**
* @file    drv_audio_pub_types.h
* @version
* @brief   Driver audio header file
*
*/

#ifndef __DRV_AUDIO_PUB_TYPES_H__
#define __DRV_AUDIO_PUB_TYPES_H__


//=============================================================================
// Include files
//=============================================================================


//=============================================================================
// Extern definition
//=============================================================================

//=============================================================================
// Macro definition
//=============================================================================

//=============================================================================
// Data type definition
//=============================================================================
/**
 * \brief Audio open type
 */
 // maybe refine this type
typedef enum
{
    DRV_AUDIO_RET_OK = 0,
    DRV_AUDIO_RET_NO_SUPPORT,
    DRV_AUDIO_RET_PARAM_ERROR,
    DRV_AUDIO_RET_FAIL
}DrvAudioRet_e;

//=============================================================================
// Variable definition
//=============================================================================

//=============================================================================
// Global function definition
//=============================================================================


#endif //__DRV_AUDIO_PUB_TYPES_H__

