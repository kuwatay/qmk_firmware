#include "signum.h"

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐      ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GESC,   KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL,  KC_A,     KC_S,    KC_D,   KC_F,    KC_G,           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,   KC_Z,     KC_X,    KC_C,   KC_V,    KC_B,           KC_N,    KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_MINS, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     LT(LOWER,KC_ENT),KC_LSFT, KC_LALT,KC_LGUI,SFT_T(KC_SPC),LT(RAISE,KC_SPC),LT(RAISE,KC_SPC), SFT_T(KC_ENT),KC_RGUI,KC_RALT, KC_RSFT,LT(LOWER,KC_ENT)
  //└────────┴────────┴────────┴────────┴────────┴────────┘      └────────┴────────┴────────┴────────┴────────┴────────┘ 
  ),
  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐      ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE, KC_1,    KC_2,     KC_3,   KC_4,    KC_5,           KC_6,     KC_7,   KC_8,    KC_9,    KC_0,   KC_BSPC, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, BL_TOGG, KC_VOLU,         KC_INS, KC_PGUP, KC_LBRC, KC_RBRC, KC_COLN, KC_DQUO, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_TRNS, KC_TRNS, KC_TRNS, BL_STEP, KC_VOLD,         KC_DEL, KC_PGDN, KC_LT,    KC_GT,   KC_QUES, KC_UNDS, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_LSFT, KC_LALT, KC_LGUI, KC_SPC,  KC_LSFT,        KC_RSFT,  KC_SPC, KC_RGUI, KC_RALT, KC_RSFT, KC_TRNS ),
  //└────────┴────────┴────────┴────────┴────────┴────────┘      └────────┴────────┴────────┴────────┴────────┴────────┘ 

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐      ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM,  KC_AT,  KC_HASH, KC_DLR,  KC_PERC,        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LCTL, KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,         KC_F6,   KC_F7,    KC_F8,   KC_F9,   KC_F10, KC_BSLS, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB, KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_PSCR,        KC_LEFT,  KC_DOWN, KC_UP,  KC_RGHT,  KC_DEL, KC_PIPE, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS,KC_LSFT, KC_LALT, KC_LGUI, KC_SPC,  KC_TRNS,        KC_TRNS,  KC_SPC, KC_RGUI, KC_RALT, KC_RSFT, KC_TRNS),
  //└────────┴────────┴────────┴────────┴────────┴────────┘      └────────┴────────┴────────┴────────┴────────┴────────┘ 

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐      ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   RESET, KC_TRNS,         KC_PSLS, KC_P7,   KC_P8,   KC_P9,  KC_PMNS, KC_TRNS, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_PAST, KC_P4,   KC_P5,   KC_P6,  KC_PPLS, KC_TAB, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_BSPC, KC_P1,   KC_P2,   KC_P3,  KC_PENT, KC_TRNS, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3),           KC_LGUI, KC_P0,   KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS),
  //└────────┴────────┴────────┴────────┴────────┴────────┘      └────────┴────────┴────────┴────────┴────────┴────────┘ 

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
     case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
