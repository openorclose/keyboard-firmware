#pragma once
#define CUSTOM_KC_ACT(name, ...) , KC_##name
#define CUSTOM_KC_STR(name, ...) , KC_##name

enum custom_keycodes {
    __UNUSED__ = SAFE_RANGE
    #include "custom_keycodes.def"
};
enum { STATE_NONE, STATE_SELECTED, STATE_WORD, STATE_FIRST_LINE, STATE_LINE };

#undef CUSTOM_KC_ACT
#undef CUSTOM_KC_STR
#define CUSTOM_KC_ACT(name, pressed_code, released_code) \
  case KC_##name: \
  if (record->event.pressed) { \
    pressed_code \
  } else { \
    released_code \
  } \
  break;
#define CUSTOM_KC_STR(name, s) CUSTOM_KC_ACT(name, SEND_STRING(s); return false;,)
;
bool process_custom_keycode(uint16_t keycode, const keyrecord_t *record);