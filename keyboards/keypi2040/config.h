#pragma once
#define MANUFACTURER "16bits"
#define PRODUCT "keypi2040"
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS {GP3, GP2, GP1}
#define MATRIX_COL_PINS {GP4, GP5, GP6, GP7}

// The pin connected to the data pin of the LEDs
#define WS2812_DI_PIN GP0
// The number of LEDs connected

#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
