#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

// clang-format off

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  MT_LALT_KC_UNDS_DUMMY,
  MT_LCTL_KC_EQUAL_DUMMY,
  MT_LSFT_KC_ASTR_DUMMY,
  MT_LGUI_KC_MINUS_DUMMY,
  MT_LALT_KC_DLR_DUMMY,
  MT_LCTL_KC_BSLS_DUMMY,
  MT_LSFT_KC_AMPR_DUMMY,
  MT_LGUI_KC_EXLM_DUMMY
};

#define MT_LALT_KC_UNDS MT(MOD_LALT,MT_LALT_KC_UNDS_DUMMY)
#define MT_LCTL_KC_EQUAL MT(MOD_LCTL,MT_LCTL_KC_EQUAL_DUMMY)
#define MT_LSFT_KC_ASTR MT(MOD_LSFT,MT_LSFT_KC_ASTR_DUMMY)
#define MT_LGUI_KC_MINUS MT(MOD_LGUI,MT_LGUI_KC_MINUS_DUMMY)
#define MT_LALT_KC_DLR MT(MOD_LALT,MT_LALT_KC_DLR_DUMMY)
#define MT_LCTL_KC_BSLS MT(MOD_LCTL,MT_LCTL_KC_BSLS_DUMMY)
#define MT_LSFT_KC_AMPR MT(MOD_LSFT,MT_LSFT_KC_AMPR_DUMMY)
#define MT_LGUI_KC_EXLM MT(MOD_LGUI,MT_LGUI_KC_EXLM_DUMMY)






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           LT(4,KC_R),     KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A,           MT(MOD_LGUI, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LCTL, KC_F),MT(MOD_LALT, KC_G),                                MT(MOD_LALT, KC_H),MT(MOD_LCTL, KC_J),MT(MOD_LSFT, KC_K),MT(MOD_LGUI, KC_L),KC_SCLN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           LT(5,KC_M),     KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
                                                    LT(2,KC_TAB),   KC_LEFT_SHIFT,                                  LT(3,KC_SPACE), LT(1,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,        KC_LBRC,        KC_LPRN,        KC_CIRC,                                        KC_TILD,        KC_RPRN,        KC_RBRC,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, MT_LGUI_KC_MINUS,       MT_LSFT_KC_ASTR,        MT_LCTL_KC_EQUAL,       MT_LALT_KC_UNDS,                                        MT_LALT_KC_DLR,         MT_LCTL_KC_BSLS,        MT_LSFT_KC_AMPR,        MT_LGUI_KC_EXLM,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PLUS,        KC_HASH,        KC_AT,          KC_QUOTE,                                       KC_DQUO,        KC_PIPE,        KC_PERC,        KC_GRAVE,       KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_D),     LCTL(KC_U),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_SHIFT,  LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F11,         LGUI(KC_7),     LGUI(KC_5),     LGUI(KC_3),     LGUI(KC_1),                                     LGUI(KC_2),     LGUI(KC_4),     LGUI(KC_6),     LGUI(KC_8),     KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,RGB_TOG,                                        KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_BSPC,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_1,           KC_2,           KC_3,           KC_ASTR,        KC_SLASH,       KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, US_CCED,        US_EACU,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     KC_TRANSPARENT, ST_MACRO_6,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

// clang-format on
const uint16_t PROGMEM combo0[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo1[] = {LT(5, KC_M), KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_C, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ENTER),
    COMBO(combo1, KC_DELETE),
    COMBO(combo2, KC_ESCAPE),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_GRAVE)) SS_DELAY(100) SS_TAP(X_A));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_GRAVE)) SS_DELAY(100) SS_TAP(X_U));
            }
            break;
        case ST_MACRO_2:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_GRAVE)) SS_DELAY(100) SS_TAP(X_E));
            }
            break;
        case ST_MACRO_3:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_O));
            }
            break;
        case ST_MACRO_4:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_I));
            }
            break;
        case ST_MACRO_5:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_A));
            }
            break;
        case ST_MACRO_6:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_E));
            }
            break;
        case MT_LALT_KC_UNDS:
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_UNDS);
                return false;
            }
            break;
        case MT_LCTL_KC_EQUAL:
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_EQUAL);
                return false;
            }
            break;
        case MT_LSFT_KC_ASTR:
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_ASTR);
                return false;
            }
            break;
        case MT_LGUI_KC_MINUS:
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_MINUS);
                return false;
            }
            break;
        case MT_LALT_KC_DLR:
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_DLR);
                return false;
            }
            break;
        case MT_LCTL_KC_BSLS:
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_BSLS);
                return false;
            }
            break;
        case MT_LSFT_KC_AMPR:
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_AMPR);
                return false;
            }
            break;
        case MT_LGUI_KC_EXLM:
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_EXLM);
                return false;
            }
            break;

        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}
