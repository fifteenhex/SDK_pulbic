DBG_ITEM_ATT(DBG_ISP_OP_VERSION,	eDBG_ITEM_TYPE_U32,	1,	4,	1, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_CONFIGTABLE_START,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_CONFIGTABLE_TRANS,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_CONFIGTABLE_TRANS_END,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_DBGBUFFER_TRANS_START,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_DBGBUFFER_TRANS,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_DBGBUFFER_TRANS_END,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_DBGBUFFER_FLUSH,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_EXPOSURE_MODE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_WHITEBALANCE_MODE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_FOCUS_MODE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_EXPOSURE_ENABLE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_WHITEBALANCE_ENABLE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_FOCUS_ENABLE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_EXPOSURE_CURRENT,	eDBG_ITEM_TYPE_U32_ARRAY,	3,	12,	1, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_WHITEBALANCE_CURRENT,	eDBG_ITEM_TYPE_U32_ARRAY,	3,	12,	1, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_FOCUS_CURRENT,	eDBG_ITEM_TYPE_U32_ARRAY,	2,	8,	1, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_I2C_SETATTRIBUTE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_I2C_SENSOR_REGISTER,	eDBG_ITEM_TYPE_U32,	1,	4,	8, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_ISP_REGISTER,	eDBG_ITEM_TYPE_U32,	1,	4,	1, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_ISP_COLLECT_INIT,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_COMMAND,	1,	4,	1, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_ISP_SET_COLLECT_EV,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_COMMAND,	1,	4,	1, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_APPLY_API,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_COMMAND,	1,	4,	1, 0, 0),
DBG_ITEM_ATT(DBG_ISP_OP_END,	eDBG_ITEM_TYPE_U8,	1,	1,	1, 0, 0),
