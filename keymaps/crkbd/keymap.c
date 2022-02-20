#include "openorclose.h"
#define LA(K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12,    \
           K13, K14, K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25,    \
           K26, K27, K28, K29, K32, K33, K34, K35, K36, K37, ...)              \
  LAYOUT_split_3x6_3(KC_NO, K00, K01, K02, K03, K04, K05, K06, K07, K08,       \
                     KC_NO, KC_NO, K00, K10, K11, K12, K13, K14, K15, K16,     \
                     K17, K18, K19, K09, KC_NO, K20, K21, K22, K23, K24, K25,  \
                     K26, K27, K28, K29, KC_NO, K32, K33, K34, K35, K36, K37)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] =
        LAY(NONE(ESC, G, M, P, V), NONE(J, DOT, SLASH, ENT, QUOT),
            LHOM(C, S, N, T, W), RHOM(COMM, A, E, I, H), LBOT(X, F, L, D, B),
            RBOT(MINS, U, O, Y, K), LTTB(ESC, R, TAB, BSPC, SPC, DEL)),
    [QWERTY] = LAYOUT_PREPEND_KC(Q, W, E, R, T, Y, U, I, O, P, A, S, D, F, G, H,
                                 J, K, L, QUOT, Z, X, C, V, B, N, M, COMM, DOT,
                                 SLSH, ESC, SPC, TAB, ENT, BSPC, DEL),
    [NAV] = LAYOUT_PREPEND_KC(_(RESET), NA, NA, NA, NA, _(U_RDO), _(U_PST),
                              _(U_CPY), _(U_CUT), _(U_UND), LGUI, LALT, LCTL,
                              LSFT, NA, CAPS, LEFT, DOWN, UP, RGHT, NA, ALGR,
                              NA, NA, NA, INS, HOME, PGDN, PGUP, END, NA, NA,
                              NA, BSPC, BSPC, DEL),
    [MOUSE] = LAYOUT_PREPEND_KC(_(RESET), NA, NA, NA, NA, _(U_RDO), _(U_PST),
                                _(U_CPY), _(U_CUT), _(U_UND), LGUI, LALT, LCTL,
                                LSFT, NA, NA, MS_L, MS_D, MS_U, MS_R, NA, ALGR,
                                NA, NA, NA, NA, WH_L, WH_D, WH_U, WH_R, NA, NA,
                                NA, BTN1, BTN3, BTN2),
    [MEDIA] = LAYOUT_PREPEND_KC(
        _(RESET), NA, NA, NA,
        NA, _(RGB_TOG), _(RGB_MOD), _(RGB_HUI), _(RGB_SAI), _(RGB_VAI), LGUI,
        LALT, LCTL, LSFT, NA, NA, LCBR, RCBR, LBRC, RBRC, NA, ALGR, NA, NA, NA,
        _(TG(QWERTY)), MPRV, VOLD, VOLU, MNXT, NA, NA, NA, MSTP, MPLY, MUTE),
    [NUM] = LAYOUT_PREPEND_KC(LBRC, 7, 8, 9, SELWORD, NA, NA, NA, NA,
                              _(RESET), SCLN, 4, 5, 6, EQL, NA, LSFT, LCTL,
                              LALT, LGUI, GRV, 1, 2, 3, BSLS, NA, NA, NA, ALGR,
                              NA, DOT, 0, MINS, NA, NA, NA),

    [SYM] = LAYOUT_PREPEND_KC(
        LCBR, AMPR, ASTR, LPRN, SELSENT, NA, NA, NA, NA, _(RESET), COLN,
        DLR, PERC, CIRC, PLUS, NA, LSFT, LCTL, LALT, LGUI, TILD, EXLM, AT, HASH,
        PIPE, NA, NA, NA, ALGR, NA, LPRN, RPRN, UNDS, NA, NA, NA),

    [FUN] = LAYOUT_PREPEND_KC(FN12, FN7, FN8, FN9, PSCR, NA, NA, NA, NA,
                              _(RESET), FN11, FN4, FN5, FN6, SLCK, NA, LSFT,
                              LCTL, LALT, LGUI, FN10, FN1, FN2, FN3, PAUS, NA,
                              NA, NA, ALGR, NA, APP, SPC, TAB, NA, NA, NA),

    [CODE] =
        LAYOUT_PREPEND_KC(TRNS, BAND, EXP, BOR, TRNS, TRNS, TILD, GRV,
                          FAT_ARROW, TRNS, TRNS, NEQ2, NEQ, COLN, TRNS,
                          TRNS, SEMINL, EQ2, EQ3, TRNS, TRNS, GEQ,
                          LEQ, NA, TRNS, TRNS, NA, COMMENT, DOTDOT,
                          TRNS, BTN2, SPC, TAB, ENT, BSPC, DEL)};