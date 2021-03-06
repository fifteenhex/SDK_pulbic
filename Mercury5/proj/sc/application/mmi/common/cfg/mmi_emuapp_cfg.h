#ifndef __MMI_EMUAPP_CFG__H__
#define __MMI_EMUAPP_CFG__H__
// Allow Mater Reset
//#define CONFIG_DEFINE(cfgId, type, name, value)
//EMU AP

#define EMU_VIRTUAL_KEYPAD_LAYOUT_STYLE_DEFAULT     (EMU_KEYPAD_LAYOUT_STYLE_LEFT_DOWN_RIGHT_DOWN)

/**
 * Virtual keypads layout style enumeration
 */
typedef enum
{
    EMU_KEYPAD_LAYOUT_STYLE_LEFT_DOWN_RIGHT_DOWN,
    EMU_KEYPAD_LAYOUT_STYLE_LEFT_UP_RIGHT_DOWN,
    EMU_KEYPAD_LAYOUT_STYLE_LEFT_UP_RIGHT_UP,
    EMU_KEYPAD_LAYOUT_STYLE_LEFT_DOWN_RIGHT_UP,
    EMU_KEYPAD_LAYOUT_STYLE_NUM
} EmuAppVirtualKeypadLayoutStyle_e;

#define CONFIG_AMR_EMUAPP_SETTING_SOUND                CONFIG_DEFINE(CFGIT_EMUAPP_SETTING_SOUND, boolean, 1, TRUE )
#define CONFIG_AMR_EMUAPP_SETTING_VOLUME               CONFIG_DEFINE(CFGIT_EMUAPP_SETTING_VOLUME, SetRingToneVolume_e, 1, VOLUME_LEVEL_3 )

#if defined(__EMU_VIRTUAL_KEYPAD_ENABLE__)
#define CONFIG_AMR_EMUAPP_KEYPAD_LAYOUT_STYLE          CONFIG_DEFINE(CFGIT_EMUAPP_KEYPAD_LAYOUT_STYLE, EmuAppVirtualKeypadLayoutStyle_e, 1, EMU_VIRTUAL_KEYPAD_LAYOUT_STYLE_DEFAULT)
#else
#define CONFIG_AMR_EMUAPP_KEYPAD_LAYOUT_STYLE
#endif // __EMU_VIRTUAL_KEYPAD_ENABLE__


#ifdef __GAME_ENGINE_EMU_MMI__
#define EMUAPP_AMR_ALL_CONFIG \
                CONFIG_AMR_EMUAPP_SETTING_SOUND \
                CONFIG_AMR_EMUAPP_SETTING_VOLUME \
                CONFIG_AMR_EMUAPP_KEYPAD_LAYOUT_STYLE
#else
#define EMUAPP_AMR_ALL_CONFIG
#endif

#endif  //__MMI_EMUAPP_CFG__H__
