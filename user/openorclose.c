#include "openorclose.h"
#include "features/caps_word.h"
#include "features/adaptive_keys.h"
#include "features/custom_keycodes.c"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_adaptive_key(keycode, record)) {
    return false;
  }
  if (!process_caps_word(keycode, record)) {
    return false;
  }
  if (!process_custom_keycode(keycode, record)) {
    return false;
  }
  switch (state) {
  case STATE_WORD:
    unregister_code(KC_RGHT);
    unregister_code(KC_LSFT);
    unregister_code(KC_LCTL);
    state = STATE_SELECTED;
    break;

  case STATE_FIRST_LINE:
    state = STATE_SELECTED;
    break;

  case STATE_LINE:

    unregister_code(KC_DOWN);
    unregister_code(KC_LSFT);
    state = STATE_SELECTED;
    break;

  case STATE_SELECTED:
    if (keycode == KC_ESC) {
      tap_code(KC_RGHT);
      state = STATE_NONE;
      return false;
    }
    // Fallthrough.
  default:
    state = STATE_NONE;
  }

  return true;
}

#include "features/keymap_combo.h"