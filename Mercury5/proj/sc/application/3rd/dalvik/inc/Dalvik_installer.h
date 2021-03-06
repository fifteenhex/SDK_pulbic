
typedef enum
{
    NM_ERROR_START = 6000,
	NM_ERROR_OUT_OF_MEMORY = NM_ERROR_START,
	NM_ERROR_CLASS_NOT_FOUND = 6001,
	NM_ERROR_CLASS_NOT_FOUND_BEFORE_LAUNCH = 6002,
    NM_ERROR_INSUFFICIENT_STORAGE_NAND = 6003,
    NM_ERROR_INSUFFICIENT_DALVIK_LAUNCH_REQUIRED_NAND_SIZE = 6004,
	NM_ERROR_UNDEFINED_FAILURE = 6999,

} nm_vm_error_code_enum;

enum
{
    LANG_ENG = 0,
    LANG_CHT,
    LANG_CHS,
    LANG_NUM
};
