#pragma once
#define dzrgb60_ansi

// force NKRO
#define FORCE_NKRO

// enable framebuffer effects
#if defined (RGB_MATRIX_FRAMEBUFFER_EFFECTS)
    #undef RGB_MATRIX_FRAMEBUFFER_EFFEECTS
#endif

// disable RGB_MATRIX_KEYPRESS effects
#if defined (RGB_MATRIX_KEYPRESSES)
    #undef RGB_MATRIX_KEYPRESSES
#endif

// disable RGB_MATRIX_KEYRELEASES effects
#if defined (RGB_MATRIX_KEYRELEASES)
    #undef RGB_MATRIX_KEYRELEASES
#endif

// disable all other RGB effects
#define DISABLE_RGB_MATRIX_NONE
#define DISABLE_RGB_MATRIX_SOLID_COLOR
#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define DISABLE_RGB_MATRIX_BREATHING
#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_VAL
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define DISABLE_RGB_MATRIX_CYCLE_ALL
#define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#define DISABLE_RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define DISABLE_RGB_MATRIX_RAINDROPS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
