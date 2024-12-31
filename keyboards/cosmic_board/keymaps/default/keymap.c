// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
		KC_NUM_LOCK,    KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    QK_RGB_MATRIX_TOGGLE, 
		KC_P7,          KC_P8,          KC_P9,                          QK_RGB_MATRIX_MODE_NEXT, 
		KC_P4,          KC_P5,          KC_P6,          KC_KP_PLUS,     KC_SPC, 
		KC_P1,          KC_P2,          KC_P3,                          KC_SPC, 
		KC_P0,                          KC_PDOT,        KC_KP_ENTER,    KC_SPC
    )
};

