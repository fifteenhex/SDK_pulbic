/* ut_battery_req.h */
#ifndef __UT_BATTERY_REQ_H__
#define __UT_BATTERY_REQ_H__

#include "ut_def.h"

#ifndef __ENABLE_DLM_SRVUT__
UT_t *getBATTERY_UT(void);
int   noBATTERY_UT(void);
void  releaseBATTERY_UT(FILE *fn);
#endif    /* __ENABLE_DLM_SRVUT__ */

#endif    /* __UT_BATTERY_REQ_H__ */