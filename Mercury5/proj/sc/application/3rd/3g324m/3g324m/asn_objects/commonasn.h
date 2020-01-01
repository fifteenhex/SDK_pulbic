/* This file was generated by RADVISION ASN.1 Compiler */
/* This is a compilation of : asn_messages\systemConfigH324m.asn */
/* Command line : ..\asn1\compiler\asn.exe asn_messages\systemConfigH324m.asn -o asn_objects\commonasn -p _common  */

/***********************************************************************
Filename   : asn_objects\commonasn.h
Description: ASN.1 Generated definitions file
************************************************************************
        Copyright (c) 2006 RADVISION Ltd.
************************************************************************
NOTICE:
This document contains information that is confidential and proprietary
to RADVISION Ltd.. No part of this document may be reproduced in any
form whatsoever without written prior approval by RADVISION Ltd..

RADVISION Ltd. reserve the right to revise this publication and make
changes changes without obligation to notify any person of such
revisions or changes.
***********************************************************************/

#ifndef _asn_messages_systemConfigH324m3567796_ASN_H
#define _asn_messages_systemConfigH324m3567796_ASN_H

#include "rvconfig.h"

#ifdef __cplusplus
extern "C" {
#endif

unsigned char* commonasnGetSyntax(void);

#ifdef __cplusplus
#define __ENUM enum
#define __NAME1 _common
#define __NAME2 
#else
#define __ENUM typedef enum
#define __NAME1 
#define __NAME2 _common
#endif


/*lint -save -e793      ANSI limits */
__ENUM __NAME1 {
  _common__3G324mConfiguration = 0,
  _common_acpNumOfBuffers = 21,
  _common_al3RetransmissionTimer = 38,
  _common_al3RetransmissionTimer_22 = 62,
  _common_allocations = 89,
  _common_allocations_4 = 102,
  _common_alxmBufferSize = 117,
  _common_alxmInterleavingBufferSize = 133,
  _common_alxmInterleavingNumOfBuffers = 161,
  _common_alxmNumOfBuffers = 191,
  _common_classReference = 209,
  _common_constrainingField = 225,
  _common_containerOfObjectSets = 244,
  _common_containerOfObjects = 267,
  _common_containerOfTypes = 287,
  _common_containerOfValues = 305,
  _common_controlBufferSize = 324,
  _common_controlNumOfBuffers = 343,
  _common_fieldOfClassReference = 364,
  _common_fieldOfEnumerated = 387,
  _common_fieldOfObjectReference = 406,
  _common_fieldReference = 430,
  _common_h223Params = 446,
  _common_h223Params_18 = 458,
  _common_imports = 473,
  _common_importsArray = 482,
  _common_interval = 496,
  _common_interval_17 = 506,
  _common_logicalChannelBufferSize = 519,
  _common_logicalChannelNumOfBuffers = 545,
  _common_maxAsn1BufferSize = 573,
  _common_maxAsn1BufferSize_6 = 592,
  _common_maxCalls = 613,
  _common_maxReceivingChannels = 623,
  _common_maxReceivingChannels_3 = 645,
  _common_maxTransmittingChannels = 669,
  _common_module = 694,
  _common_n400Counter = 702,
  _common_n402Counter = 715,
  _common_n402Counter_25 = 728,
  _common_nsrpTimer = 744,
  _common_nsrpTimer_21 = 755,
  _common_numOfAlSduSaved = 769,
  _common_numOfAlSduSaved_23 = 786,
  _common_objectArray = 806,
  _common_objectReference = 819,
  _common_objectSetArray = 836,
  _common_objectSetElement = 852,
  _common_objectSetReference = 870,
  _common_sendQueueSizePerChannel = 890,
  _common_srpTimer = 915,
  _common_totalPvtNodes = 925,
  _common_typeArray = 940,
  _common_typeFromConstraint = 951,
  _common_typeReference = 971,
  _common_valueNode = 986,
  _common_valueTree = 997,
  _common_values = 1008,
  _common_watchdog = 1016,
  _common_watchdog_16 = 1026,
  _common_withSyntaxElement = 1039} __NAME2;


/*lint -restore */
#undef __NAME1
#undef __NAME2
#undef __ENUM

#define _common(a) ((RvPstFieldId)_common_##a),
#define __common(a) ((RvPstFieldId)_common_##a)

#ifdef __cplusplus
}
#endif

#endif /* _asn_messages_systemConfigH324m3567796_ASN_H */