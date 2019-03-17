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
     KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LALT,  KC_A,     KC_S,    KC_D,   KC_F,    KC_G,           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT,  KC_Z,     KC_X,    KC_C,   KC_V,    KC_B,           KC_N,    KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_RBRC, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_SPC,   KC_ENT,  KC_BSPC, KC_LCTL, MO(1),   MO(3),         KC_LGUI,  KC_SPC,  MO(2),   KC_DEL, KC_BSLS, KC_RSFT
  //└────────┴────────┴────────┴────────┴────────┴────────┘      └────────┴────────┴────────┴────────┴────────┴────────┘ 
  ),
  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐      ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_TRNS, KC_ESC,  KC_TRNS, KC_ENT,  KC_APP,  KC_TRNS,        KC_TRNS, KC_MUTE, KC_TRNS, KC_TRNS, KC_MPLY, KC_LPRN, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LCTL, LALT(KC_TAB), KC_TAB, KC_TRNS, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_VOLD, KC_VOLU, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_TRNS, KC_DEL, KC_BSPC, LCTL(KC_PGUP), LCTL(KC_PGDN), KC_PERC, KC_RPRN, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, MO(1), KC_TRNS,           KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  //└────────┴────────┴────────┴────────┴────────┴────────┘      └────────┴────────┴────────┴────────┴────────┴────────┘ 

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐      ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS, KC_TRNS, KC_TRNS, KC_EQL, KC_AMPR, KC_TILD,          KC_TRNS, KC_UNDS, KC_ASTR, KC_TRNS, KC_PLUS, KC_LPRN, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LCTL, KC_AT,  KC_TRNS, KC_MINS,  KC_F2,   KC_GRV,         KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_DLR, KC_TRNS, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, LALT(KC_F4), KC_TRNS, KC_TRNS, KC_EXLM,    KC_TRNS, KC_HASH, KC_TRNS, KC_CIRC, KC_TRNS, KC_RPRN, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤      ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_F5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_LGUI, KC_TRNS, MO(2), KC_TRNS, LCTL(LALT(KC_DEL)), LGUI(KC_L)),
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
