/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2012 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2012 - Daniel De Matteis
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

static item items_generalsettings[MAX_NO_OF_CONTROLS_SETTINGS] =
{
   {
      SETTING_CHANGE_RESOLUTION,                                        /* enum ID of item */
      "Resolution",                                                     /* item label */
      "",                                                               /* setting label */
      0.0f,                                                             /* text X position */
      0.0f,                                                             /* text Y position */
      YELLOW,                                                           /* text color */
      "INFO - Change the display resolution - press X to confirm.",     /* item comment */
      WHITE,                                                            /* color of item comment */
      0.91f,                                                            /* font scale of item comment */
      0.09f,                                                            /* comment X position */
      0.83f,                                                            /* comment Y position */
   },
   {
      SETTING_SHADER_PRESETS,
      "Shader Preset (CGP)",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Select a [CG Preset] script.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_SHADER,
      "Selected shader #1",
      "",
      0.0f,	
      0.0f,
      YELLOW,
      "INFO - Select a shader as [Shader #1]. NOTE: Some shaders might be\ntoo slow at 1080p. If you experience any slowdown, try another shader.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_SHADER_2,
      "Selected shader #2",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Select a shader as [Shader #2]. NOTE: Some shaders might be\ntoo slow at 1080p. If you experience any slowdown, try another shader.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_FONT_SIZE,
      "Font Size",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Increase or decrease the font size in the menu.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_KEEP_ASPECT_RATIO,
      "Aspect Ratio",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Aspect Ratio] is set to 'Scaled (4:3)' - screen will have black\nborders left/right on widescreen TVs/monitors.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_HW_TEXTURE_FILTER,
      "Hardware Filtering shader #1",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Hardware filtering is set to 'Bilinear filtering' for [Shader #1].",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_HW_TEXTURE_FILTER_2,
      "Hardware Filtering shader #2",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Hardware filtering is set to 'Bilinear filtering' for [Shader #2].",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_SCALE_ENABLED,
      "Custom Scaling/Dual Shaders",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Custom Scaling] is set to 'ON' - 2x shaders will look much\nbetter, and you can select a shader for [Shader #2].",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_SCALE_FACTOR,
      "Custom Scaling Factor",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Custom Scaling Factor] is set to '2x'.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      2,
      1
   },
   {
      SETTING_HW_OVERSCAN_AMOUNT,
      "Overscan",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Adjust or decrease [Overscan]. Set this to higher than 0.000\nif the screen doesn't fit on your TV/monitor.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_THROTTLE_MODE,
      "Throttle Mode",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Throttle Mode] is set to 'ON' - VSync is enabled and sound\nis turned on.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_TRIPLE_BUFFERING,
      "Triple Buffering",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Triple Buffering] is set to 'ON' - faster graphics/shaders at\nthe possible expense of input lag.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_ENABLE_SCREENSHOTS,
      "Enable Screenshots Feature",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Enable Screenshots] feature is set to 'OFF'.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_SAVE_SHADER_PRESET,
      "SAVE SETTINGS AS CGP PRESET ",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Save the current video settings to a [CG Preset] (CGP) file.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_APPLY_SHADER_PRESET_ON_STARTUP,
      "APPLY SHADER PRESET ON STARTUP",
      "",
      0.0f,	
      0.0f,
      YELLOW,
      "INFO - Automatically load the currently selected [CG Preset] file on startup.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_DEFAULT_VIDEO_ALL,
      "DEFAULT",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set all [General Video Settings] back to their 'DEFAULT' values.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_SOUND_MODE,
      "Sound Output",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Sound Output] is set to 'Normal' - normal audio output will be\nused.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_RSOUND_SERVER_IP_ADDRESS,
      "RSound Audio Server IP Address",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Enter the IP Address of the [RSound Audio Server]. IP address\nmust be an IPv4 32-bits address, eg: '192.168.1.7'.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_ENABLE_CUSTOM_BGM,
      "Enable Custom BGM Feature",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Enable Custom BGM] feature is set to 'ON'.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_DEFAULT_AUDIO_ALL,
      "DEFAULT",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set all [General Audio Settings] back to their 'DEFAULT' values.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_EMU_CURRENT_SAVE_STATE_SLOT, 
      "Current save state slot", 
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set the current savestate slot (can also be configured ingame).",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_EMU_SHOW_INFO_MSG, 
      "Info messages", 
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Show onscreen info messages in the menu.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_RARCH_DEFAULT_EMU,
      "Default emulator core",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Select a default emulator core to launch at start-up.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_EMU_DEFAULT_ALL,
      "DEFAULT",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set [all RetroArch settings] back to their 'DEFAULT' values.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_EMU_REWIND_ENABLED,
      "Rewind",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Rewind] feature is set to 'OFF'.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_EMU_VIDEO_DEFAULT_ALL,
      "DEFAULT",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set [all RetroArch Video settings] back to their 'DEFAULT' values.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_EMU_AUDIO_MUTE,
      "Mute Audio",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Mute Audio] is set to 'OFF'.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_EMU_AUDIO_DEFAULT_ALL,
      "DEFAULT",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set [all RetroArch Audio settings] back to their 'DEFAULT' values.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_PATH_DEFAULT_ROM_DIRECTORY,
      "Startup ROM Directory",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set the default [Startup ROM directory]. NOTE: You will have to\nrestart the emulator for this change to have any effect.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_PATH_SAVESTATES_DIRECTORY,
      "Savestate Directory",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set the default path where all the savestate files will be saved to.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_PATH_SRAM_DIRECTORY,
      "SRAM Directory",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set the default SRAM (SaveRAM) directory path. All the\nbattery backup saves will be stored in this directory.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_PATH_CHEATS,
      "Cheatfile Directory",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set the default [Cheatfile directory] path. All CHT (cheat) files\nwill be stored here.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_ENABLE_SRAM_PATH,
      "Custom SRAM Dir Path",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Custom SRAM Dir Path] feature is set to 'OFF'.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_ENABLE_STATE_PATH,
      "Custom Save State Dir Path",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - [Custom Save State Dir Path] feature is set to 'OFF'.",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
      1,
      1
   },
   {
      SETTING_PATH_DEFAULT_ALL,
      "DEFAULT",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set [all Path settings] back to their 'DEFAULT' values.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_SCHEME,
      "Control Scheme Preset",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_NUMBER,
      "Controller No",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_B,
      "B Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_Y,
      "Y Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_SELECT,
      "Select button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_START,
      "Start button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_UP,
      "D-Pad Up",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_DOWN,
      "D-Pad Down",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_LEFT,
      "D-Pad Left",
      "",
      0.0f,	
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_RIGHT,
      "D-Pad Right",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_A,
      "A Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_X,
      "X Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_L,
      "L Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_R,
      "R Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_L2,
      "L2 Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_R2,
      "R2 Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_L3,
      "L3 Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_RETRO_DEVICE_ID_JOYPAD_R3,
      "R3 Button",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "",
      WHITE,
      0.91f,
      0.09f,
      0.83f,
   },
   {
      SETTING_CONTROLS_SAVE_CUSTOM_CONTROLS,
      "SAVE CUSTOM CONTROLS",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Save the custom control settings.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   },
   {
      SETTING_CONTROLS_DEFAULT_ALL,
      "DEFAULT",
      "",
      0.0f,
      0.0f,
      YELLOW,
      "INFO - Set all [Controls settings] back to their 'DEFAULT' values.",
      GREEN,
      0.91f,
      0.09f,
      0.83f,
      0,
      1
   }
};
