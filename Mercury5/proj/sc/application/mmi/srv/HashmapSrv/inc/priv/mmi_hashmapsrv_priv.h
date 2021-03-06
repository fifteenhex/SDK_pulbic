/**
* @file mmi_hashmapsrv_priv.h
*
* Service without using State Machine - HASHMAPSRV
* Generated by XFSM v1.0, CodeVer=v0.24 
*
* Class Id: CLSID_HASHMAPSRV
* Interface Id: IID_HASHMAPSRV
*
* @version $Id$
*/
#ifndef __MMI_HASHMAPSRV_PRIV_H__
#define __MMI_HASHMAPSRV_PRIV_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"
#include "mmi_hashmapsrv.h"

/*-------------------------------------------------------------------------*/

#define HASHMAP_TAB_SIZE    (HASHMAP_USERDEFINED_MAX)

#define HASHMAP_TAB_ITME_EMPTY          (0x00)

/*-------------------------------------------------------------------------*/

/**
 * Application structure
 */
typedef struct MMI_HASHMAPSRV_TAG
{
    DECLARE_FUNCTBL(IHASHMAPSRV);   // function table pointer
    u32 refCnt;     // reference count
    /* Add custom fields below */
} MMI_HASHMAPSRV;

/*-------------------------------------------------------------------------*/
#endif /* __MMI_HASHMAPSRV_PRIV_H__ */
