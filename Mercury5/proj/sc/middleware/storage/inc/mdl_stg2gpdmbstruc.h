///////////////////////////////////////////////////////////////////////////////////////////////////
// mdl_stg2gpdmbstuc.h storage monitor to notify gpd task mail box stucture
// create by jeffrey.chen@mstarsemi.com on 2010.03.24
// to define notify mail box structure
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "mdl_stg2gpd.h"

typedef union
{
    MdlStgMsgBody_t tStgMsgBody;

} vm_msgBody_t;

#include "vm_msgt.ht"

typedef enum
{
    L_ERROR = 0,
    L_MSG   = 1,

} E_LOG_LEVEL;

void LOG_SM(E_LOG_LEVEL LogLevel, char *fmt, ...);

///////////////////////////////////////////////////////////////////////////////////////////////////
