#pragma once
#include QMK_KEYBOARD_H

#define KC_NP KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO

enum layers { BASE, CODE, MEDIA, NAV, MOUSE, SYM, NUM, FUN, QWERTY };
#include "features/custom_keycodes.h"
#include "prepend_kc.h"


#define NONE(a, b, c, d, e) \
  KC_##a, KC_##b, KC_##c, KC_##d, KC_##e
#define LHOM(g, a, c, s, x) \
  LGUI_T(KC_##g), LALT_T(KC_##a), LCTL_T(KC_##c), LSFT_T(KC_##s), KC_##x
#define RHOM(x, s, c, a, g) \
  KC_##x, RSFT_T(KC_##s), LCTL_T(KC_##c), LALT_T(KC_##a), LGUI_T(KC_##g)
#define LBOT(x, ralt, y, code, z) \
  KC_##x,  ALGR_T(KC_##ralt), KC_##y, LT(CODE, KC_##code), KC_##z
#define RBOT(x, code, y, ralt, z) \
  KC_##x,LT(CODE, KC_##code), KC_##y, ALGR_T(KC_##ralt), KC_##z
#define LTTB(a, b, c, d, e, f) \
  LT(MOUSE, KC_##a), LT(NAV, KC_##b), LT(MEDIA, KC_##c), LT(SYM, KC_##d), LT(NUM, KC_##e), LT(FUN, KC_##f)
#define THMB(a, b, c, d, e, f) \
  NONE(a, b, c, d, e), KC_##f
#define CALL(A, B) A B
#define LAY(...) CALL(LA, (__VA_ARGS__))

