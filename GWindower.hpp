#pragma once

/* Printable keys */
#define GW_KEY_SPACE              32
#define GW_KEY_APOSTROPHE         39  /* ' */
#define GW_KEY_COMMA              44  /* , */
#define GW_KEY_MINUS              45  /* - */
#define GW_KEY_PERIOD             46  /* . */
#define GW_KEY_SLASH              47  /* / */
#define GW_KEY_0                  48
#define GW_KEY_1                  49
#define GW_KEY_2                  50
#define GW_KEY_3                  51
#define GW_KEY_4                  52
#define GW_KEY_5                  53
#define GW_KEY_6                  54
#define GW_KEY_7                  55
#define GW_KEY_8                  56
#define GW_KEY_9                  57
#define GW_KEY_SEMICOLON          59  /* ; */
#define GW_KEY_EQUAL              61  /* = */
#define GW_KEY_A                  65
#define GW_KEY_B                  66
#define GW_KEY_C                  67
#define GW_KEY_D                  68
#define GW_KEY_E                  69
#define GW_KEY_F                  70
#define GW_KEY_G                  71
#define GW_KEY_H                  72
#define GW_KEY_I                  73
#define GW_KEY_J                  74
#define GW_KEY_K                  75
#define GW_KEY_L                  76
#define GW_KEY_M                  77
#define GW_KEY_N                  78
#define GW_KEY_O                  79
#define GW_KEY_P                  80
#define GW_KEY_Q                  81
#define GW_KEY_R                  82
#define GW_KEY_S                  83
#define GW_KEY_T                  84
#define GW_KEY_U                  85
#define GW_KEY_V                  86
#define GW_KEY_W                  87
#define GW_KEY_X                  88
#define GW_KEY_Y                  89
#define GW_KEY_Z                  90
#define GW_KEY_LEFT_BRACKET       91  /* [ */
#define GW_KEY_BACKSLASH          92  /* \ */
#define GW_KEY_RIGHT_BRACKET      93  /* ] */
#define GW_KEY_GRAVE_ACCENT       96  /* ` */
#define GW_KEY_WORLD_1            161 /* non-US #1 */
#define GW_KEY_WORLD_2            162 /* non-US #2 */

#define GW_KEY_ESCAPE             256
#define GW_KEY_ENTER              257
#define GW_KEY_TAB                258
#define GW_KEY_BACKSPACE          259
#define GW_KEY_INSERT             260
#define GW_KEY_DELETE             261
#define GW_KEY_RIGHT              262
#define GW_KEY_LEFT               263
#define GW_KEY_DOWN               264
#define GW_KEY_UP                 265
#define GW_KEY_PAGE_UP            266
#define GW_KEY_PAGE_DOWN          267
#define GW_KEY_HOME               268
#define GW_KEY_END                269
#define GW_KEY_CAPS_LOCK          280
#define GW_KEY_SCROLL_LOCK        281
#define GW_KEY_NUM_LOCK           282
#define GW_KEY_PRINT_SCREEN       283
#define GW_KEY_PAUSE              284
#define GW_KEY_F1                 290
#define GW_KEY_F2                 291
#define GW_KEY_F3                 292
#define GW_KEY_F4                 293
#define GW_KEY_F5                 294
#define GW_KEY_F6                 295
#define GW_KEY_F7                 296
#define GW_KEY_F8                 297
#define GW_KEY_F9                 298
#define GW_KEY_F10                299
#define GW_KEY_F11                300
#define GW_KEY_F12                301
#define GW_KEY_F13                302
#define GW_KEY_F14                303
#define GW_KEY_F15                304
#define GW_KEY_F16                305
#define GW_KEY_F17                306
#define GW_KEY_F18                307
#define GW_KEY_F19                308
#define GW_KEY_F20                309
#define GW_KEY_F21                310
#define GW_KEY_F22                311
#define GW_KEY_F23                312
#define GW_KEY_F24                313
#define GW_KEY_F25                314
#define GW_KEY_KP_0               320
#define GW_KEY_KP_1               321
#define GW_KEY_KP_2               322
#define GW_KEY_KP_3               323
#define GW_KEY_KP_4               324
#define GW_KEY_KP_5               325
#define GW_KEY_KP_6               326
#define GW_KEY_KP_7               327
#define GW_KEY_KP_8               328
#define GW_KEY_KP_9               329
#define GW_KEY_KP_DECIMAL         330
#define GW_KEY_KP_DIVIDE          331
#define GW_KEY_KP_MULTIPLY        332
#define GW_KEY_KP_SUBTRACT        333
#define GW_KEY_KP_ADD             334
#define GW_KEY_KP_ENTER           335
#define GW_KEY_KP_EQUAL           336
#define GW_KEY_LEFT_SHIFT         340
#define GW_KEY_LEFT_CONTROL       341
#define GW_KEY_LEFT_ALT           342
#define GW_KEY_LEFT_SUPER         343
#define GW_KEY_RIGHT_SHIFT        344
#define GW_KEY_RIGHT_CONTROL      345
#define GW_KEY_RIGHT_ALT          346
#define GW_KEY_RIGHT_SUPER        347
#define GW_KEY_MENU               348

#define GW_KEY_LAST               GW_KEY_MENU

#define GW_MOUSE_BUTTON_1         0
#define GW_MOUSE_BUTTON_2         1
#define GW_MOUSE_BUTTON_3         2
#define GW_MOUSE_BUTTON_4         3
#define GW_MOUSE_BUTTON_5         4
#define GW_MOUSE_BUTTON_6         5
#define GW_MOUSE_BUTTON_7         6
#define GW_MOUSE_BUTTON_8         7
#define GW_MOUSE_BUTTON_LAST      GW_MOUSE_BUTTON_8
#define GW_MOUSE_BUTTON_LEFT      GW_MOUSE_BUTTON_1
#define GW_MOUSE_BUTTON_RIGHT     GW_MOUSE_BUTTON_2
#define GW_MOUSE_BUTTON_MIDDLE    GW_MOUSE_BUTTON_3

#define GW_GAMEPAD_BUTTON_A               0
#define GW_GAMEPAD_BUTTON_B               1
#define GW_GAMEPAD_BUTTON_X               2
#define GW_GAMEPAD_BUTTON_Y               3
#define GW_GAMEPAD_BUTTON_LEFT_BUMPER     4
#define GW_GAMEPAD_BUTTON_RIGHT_BUMPER    5
#define GW_GAMEPAD_BUTTON_BACK            6
#define GW_GAMEPAD_BUTTON_START           7
#define GW_GAMEPAD_BUTTON_GUIDE           8
#define GW_GAMEPAD_BUTTON_LEFT_THUMB      9
#define GW_GAMEPAD_BUTTON_RIGHT_THUMB     10
#define GW_GAMEPAD_BUTTON_DPAD_UP         11
#define GW_GAMEPAD_BUTTON_DPAD_RIGHT      12
#define GW_GAMEPAD_BUTTON_DPAD_DOWN       13
#define GW_GAMEPAD_BUTTON_DPAD_LEFT       14
#define GW_GAMEPAD_BUTTON_LAST            GW_GAMEPAD_BUTTON_DPAD_LEFT

#define GW_GAMEPAD_BUTTON_CROSS       GW_GAMEPAD_BUTTON_A
#define GW_GAMEPAD_BUTTON_CIRCLE      GW_GAMEPAD_BUTTON_B
#define GW_GAMEPAD_BUTTON_SQUARE      GW_GAMEPAD_BUTTON_X
#define GW_GAMEPAD_BUTTON_TRIANGLE    GW_GAMEPAD_BUTTON_Y

#define GW_GAMEPAD_AXIS_LEFT_X        0
#define GW_GAMEPAD_AXIS_LEFT_Y        1
#define GW_GAMEPAD_AXIS_RIGHT_X       2
#define GW_GAMEPAD_AXIS_RIGHT_Y       3
#define GW_GAMEPAD_AXIS_LEFT_TRIGGER  4
#define GW_GAMEPAD_AXIS_RIGHT_TRIGGER 5
#define GW_GAMEPAD_AXIS_LAST          GW_GAMEPAD_AXIS_RIGHT_TRIGGER


class GWindower { public: ~GWindower();
        int screen_width, screen_height;
        int screen_refresh_rate;
        void* native_window_handle; // Win32 HWND / Wayland wl_surface*
        void* native_wayland_display = nullptr; // <- NULL on windows
        GWindower(int window_width = 0, int window_height = 0);  // leave width and height at 0 for fullscreen

        inline static bool key_states[GW_KEY_LAST+1];  // `true` = pressed
        inline static int mouse_x, mouse_y;  // is delta in fullscreen, absolute in windowed
        inline static bool mouse_button_states[GW_MOUSE_BUTTON_LAST+1];  // `true` = pressed
        inline static bool gamepad_buttons[GW_GAMEPAD_BUTTON_LAST+1];  // `true` = pressed
        inline static float gamepad_axes[GW_GAMEPAD_AXIS_LAST+1];
        bool Update(bool sleep_until_input = false); // returns `false` if window should close
};
