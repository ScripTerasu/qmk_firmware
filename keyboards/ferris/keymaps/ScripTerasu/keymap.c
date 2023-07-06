// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

enum layer_names {
    _CMK = 0,
    _SYM = 1,
    _NUM = 2,
    _NAV = 3,
    _FUN = 4,
    _DANGER = 5,
    _LCK = 6
};

#define KC_MO_SYM MO(_SYM)
#define KC_MO_NUM MO(_NUM)
#define KC_MO_NAV MO(_NAV)
#define KC_MO_FUN MO(_FUN)
#define KC_MO_DANGER MO(_DANGER)
#define KC_MO_LCK MO(_LCK)
#define ES_NTIL LALT(KC_N)
#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_CTLA LCTL_T(KC_A)
#define KC_LSHZ LSFT_T(KC_Z)
#define KC_RLSH RSFT_T(KC_SLSH)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)

#ifdef COMBO_ENABLE
#   include "g/keymap_combo.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_CMK] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,            KC_J,    KC_L,  KC_U,    KC_Y,   KC_NO,
    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,            KC_M,    KC_N,  KC_E,    KC_I,   KC_O,
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,            KC_K,    KC_H,  KC_COMM, KC_DOT, KC_MO_FUN,
                                KC_MO_SYM, KC_SPC,  KC_ENT, KC_MO_NUM
  ),

  [_SYM] = LAYOUT(
    KC_NO,     KC_BSLS, KC_PERC,  KC_DLR,  KC_NO,         KC_NO, KC_CIRC, KC_LCBR, KC_RCBR, KC_NO,
    KC_ASTR,   KC_LPRN, KC_RPRN, KC_COLN,  KC_NO,         KC_NO, KC_DQUO, KC_LBRC, KC_RBRC, KC_SCLN,
    KC_MO_FUN, KC_GRV,  KC_AT,   KC_AMPR,  KC_NO,         KC_NO, KC_HASH, KC_LABK, KC_RABK, KC_DEL,
                                    KC_TRNS, KC_SPC,  KC_ENT, KC_ESC
  ),

  [_NUM] = LAYOUT(
    KC_BSPC,  KC_4,    KC_5,    KC_6,   KC_NO,         KC_NO, KC_PIPE,  KC_MINS, KC_SLSH, KC_NO,
    KC_DOT,   KC_1,    KC_2,    KC_3,   KC_NO,         KC_NO, KC_QUOT,  KC_UNDS, KC_EQL,  KC_MO_NAV,
    KC_TILD,  KC_7,    KC_8,    KC_9,   KC_NO,         KC_NO, KC_PLUS,  KC_QUES, KC_EXLM, KC_NO,
                                      KC_0, KC_SPC, KC_ENT, KC_TRNS
  ),

  [_NAV] = LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,
                                  KC_NO, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_FUN] = LAYOUT(
    KC_TRNS,      KC_F6,   KC_F5,   KC_F4,  KC_F10,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,        KC_F3,   KC_F2,   KC_F1,  KC_F11,         KC_NO,   KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,
    KC_MO_DANGER, KC_F9,   KC_F8,   KC_F7,  KC_F12,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
                                      KC_NO, KC_TRNS, KC_TRNS, KC_NO
  ),

  [_DANGER] = LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   QK_RBT,  KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
                                  KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),

  [_LCK] = LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                  KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
};
