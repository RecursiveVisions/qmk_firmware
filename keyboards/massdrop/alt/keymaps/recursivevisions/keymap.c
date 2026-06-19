/* Copyright 2026 "RecursiveVisions" (@RecursiveVisions)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* ========================================================================== */
/*                                   KEYMAP                                   */
/* ========================================================================== */

#include QMK_KEYBOARD_H
#include "debug_keymap.h"

enum alt_keycodes {
    MD_BOOT = SAFE_RANGE,    // restart into bootloader
    DBG_TST,                 // DEBUG test key
    CYC_MD,                  // cycle keyboard mode
    CYC_LT,                  // cycle keyboard layout
    CYC_LC,                  // cycle layer color mode
    DM_SPAM,                 // spam macro
    MS_CLK                   // mouse keys momentary layer
};

enum layer_names {
    _MAIN,    // main layer (QWERTY layout)
    _DVK,     // Dvorak layout
    _CMK,     // Colemak layout
    _FN,      // function layer
    _FNP,     // fn keys with pass-through
    _MS,      // mouse keys
    _RGB,     // RGB
    _GMS      // games
};


/* ========================================================================== */
/*                                   LAYERS                                   */
/* ========================================================================== */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MAIN] = LAYOUT_65_ansi_blocker(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, TT(_FN), KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_DVK] = LAYOUT_65_ansi_blocker(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSPC, KC_DEL,
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSLS, KC_HOME,
        KC_CAPS, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,          KC_ENT,  KC_PGUP,
        KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,          KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, TT(_FN), KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_CMK] = LAYOUT_65_ansi_blocker(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
        KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,          KC_ENT,  KC_PGUP,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, TT(_FN), KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FN] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_INS,
        _______, TG(_FNP),_______, _______, _______, _______, _______, _______, _______, _______, TG(_GMS),KC_PAUS, KC_SCRL, KC_PSCR, KC_END,
        _______, CYC_LC,  DM_SPAM, DB_TOGG, DM_REC1, DM_REC2, DM_PLY1, DM_PLY2, KO_TOGG, CYC_LT,  KC_BRID, KC_BRIU,          _______, CYC_MD,
        _______, EE_CLR,  _______, _______, _______, MD_BOOT, NK_TOGG, TG(_MS), KC_MUTE, KC_VOLD, KC_VOLU, _______,          TT(_RGB),MS_CLK,
        _______, _______, _______,                            DBG_TST,                            _______, _______, KC_MPRV, KC_MPLY, KC_MNXT
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    dprintf("highest layer: %u\n", get_highest_layer(state));
    return state;
}


/* ========================================================================== */
/*                            MAIN PROCESSING LOOP                            */
/* ========================================================================== */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case DB_TOGG:
            if (record->event.pressed) {
                dprint("DEBUG MODE ENABLED");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= BOOT_DELAY) {
                    reset_keyboard();
                }
            }
            return false;
        default:
            return true; // process all other keycodes normally
    }
}
