// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_0, KC_1, KC_2, KC_3,
        KC_4, KC_5, KC_6, KC_7,
        KC_8, KC_9, KC_A, KC_B
    ),
};

/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_S, KC_3, MO(1), MO(2)
    ),
    [1] = LAYOUT(
        KC_K, KC_2, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [2] = LAYOUT(
        KC_A, KC_4, KC_TRANSPARENT, KC_TRANSPARENT
    )
};
*/

// KC_S, KC_3
// KC_K, KC_2
// KC_A, KC_4
#if 0
    "layouts": {
        "LAYOUT_S": {
            "layout": [
                {"matrix": [0, 0], "x": 0, "y": 0},
                {"matrix": [0, 1], "x": 1, "y": 0},
                {"matrix": [1, 0], "x": 2, "y": 0},
                {"matrix": [1, 1], "x": 3, "y": 0}
            ]
        }
    }
#endif
