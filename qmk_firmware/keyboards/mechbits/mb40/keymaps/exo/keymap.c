#include QMK_KEYBOARD_H

enum my_layers {
    _LAYER0, // Base - Blue
    _LAYER1, // Lower - Green
    _LAYER2, // Raise - Yellow
    _LAYER3, // Numpad - Orange
    _LAYER4, // Adjust - Red
};
// Tap Dance declarations
enum {
    TD_SHIFT_CAPS,
};
// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Shift, tap twice for Caps Lock
    [TD_SHIFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};
// Start keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* UK ISO Base (Layer 0)
      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
      │ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │Bksp │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │ Tab │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │ ;:  │ '@  │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │Shift│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │ ,<  │ .>  │ /?  │Enter│ ** Double tap Shift to toggle Caps Lock **
      ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
      │Ctrl │ OS  │ Alt │ \│  │Lower│   Space   │Raise│  ←  │  ↓  │  ↑  │  →  │
      └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [LAYER_0] = LAYOUT_planck(
      KC_ESC,             KC_Q,     KC_W,     KC_E,     KC_R,  KC_T,   KC_Y,   KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
      KC_TAB,             KC_A,     KC_S,     KC_D,     KC_F,  KC_G,   KC_H,   KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
      TD(TD_SHIFT_CAPS),  KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,  KC_N,   KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
      KC_LCTL,            KC_LGUI,  KC_LALT,  KC_NUBS,  MO(1),     KC_SPC,     MO(2),    KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT
    ),
   /* Lower (Momentary Layer 1)
      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
      │  `  │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │ Del │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │     │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │  -  │  =  │  [  │  ]  │  #  │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │     │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │     │Brgt-│Brgt+│     │     │
      ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
      │     │     │AltGr│RGBTg│Lower│           │Raise│Home │PgDn │PgUp │ End │
      └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [LAYER_1] = LAYOUT_planck(
      KC_GRV,   KC_1,   KC_2,     KC_3,     KC_4,    KC_5,    KC_6,    KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
      KC_NO,    KC_F1,  KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_NUHS,
      KC_NO,    KC_F7,  KC_F8,    KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_NO,    RGB_VAD,  RGB_VAI,  KC_NO,    KC_NO,
      KC_NO,    KC_NO,  KC_RALT,  RGB_TOG,  KC_TRNS,      KC_NO,       TO(4),    KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END
    ),
   /* Raise (Momentary Layer 2)
      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
      │  ¬  │  !  │  "  │  £  │  $  │  %  │  ^  │  &  │  *  │  (  │  )  │Calc │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │     │     │     │     │     │     │     │  _  │  +  │  {  │  }  │  ~  │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │     │     │     │     │     │     │     │     │     │     │     │     │
      ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
      │Power│Sleep│     │Mute │Lower│    Play   │Raise│Prev │Vol- │Vol+ │Next │
      └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [LAYER_2] = LAYOUT_planck(
      KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_CALC,
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_PWR,   KC_SLEP,  KC_NO,    KC_MUTE,  TO(3),       KC_MPLY,        KC_TRNS,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT
    ),
   /* Raise + Lower (Activate Layer 3, Raise or Lower returns to Base)
      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
      │ M1  │ MUp │ M2  │PgUp │PrtSc│  ↑  │Bksp │  /  │  7  │  8  │  9  │  -  │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │ MLt │ MDn │ MRt │PgDn │  ←  │  ↓  │  →  │  *  │  4  │  5  │  6  │  +  │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │ M3  │MwUp │ M4  │ Ins │Pause│ Del │Home │ End │  1  │  2  │  3  │  =  │
      ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
      │MwLt │MwDn │MwRt │ M5  │Lower│   Space   │Raise│  0  │  ,  │  .  │Enter│
      └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [LAYER_3] = LAYOUT_planck(
      KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_PGUP,  KC_PSCR,  KC_UP,    KC_BSPC,  KC_PSLS,  KC_P7,  KC_P8,    KC_P9,    KC_PMNS,
      KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PAST,  KC_P4,  KC_P5,    KC_P6,    KC_PPLS,
      KC_BTN3,  KC_WH_U,  KC_BTN4,  KC_INS,   KC_PAUS,  KC_DEL,   KC_HOME,  KC_END,   KC_P1,  KC_P2,    KC_P3,    KC_EQL,
      KC_WH_L,  KC_WH_D,  KC_WH_R,  KC_BTN5,  TO(0),         KC_SPC,        TO(0),    KC_P0,  KC_PCMM,  KC_PDOT,  KC_PENT
    ),
   /* Lower + Raise (Activate Layer 4, Raise or Lower returns to Base)
      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
      │  ¦  │     │  É  │  €  │     │     │     │  Ú  │  Í  │  Ó  │     │     │
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │     │  Á  │     │     │     │     │     │Mode+│Hue+ │Sat+ │Brgt+│Efct+│
      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      │Shift│     │     │     │     │     │     │Mode-│Hue- │Sat- │Brgt-│Efct-│
      ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
      │     │     │     │     │Lower│           │Raise│     │AltGr│Debug│Reset│ 
      └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [LAYER_4] = LAYOUT_planck(
      KC_GRV,   KC_NO,  KC_E,   KC_4,   KC_NO,  KC_NO,  KC_NO,  KC_U,      KC_I,     KC_O,     KC_NO,    KC_NO,
      KC_NO,    KC_A,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  RGB_MOD,   RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,
      KC_LSFT,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  RGB_RMOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_SPD,
      KC_NO,    KC_NO,  KC_NO,  KC_NO,  TO(0),      KC_NO,      TO(0),     KC_NO,    KC_RALT,  DB_TOGG,  QK_BOOT
    ),
}; // End keymap
// Start LED Layers
// LED layers can have all LEDs set the same colour, set individually, or set in groups
/* const rgblight_segment_t PROGMEM LED_layer0[] = RGBLIGHT_LAYER_SEGMENTS(
      {0, 2, HSV_BLUE},
      {2, 4, HSV_RED},
      {5, HSV_GREEN},
      {6, HSV_ORANGE}
      );
 */
const rgblight_segment_t PROGMEM LED_layer0[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_BLUE});
const rgblight_segment_t PROGMEM LED_layer1[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_GREEN});
const rgblight_segment_t PROGMEM LED_layer2[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_YELLOW});
const rgblight_segment_t PROGMEM LED_layer3[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_ORANGE});
const rgblight_segment_t PROGMEM LED_layer4[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_RED});
// Define array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
        LED_layer0,
        LED_layer1, // Overrides Layer 0
        LED_layer2, // Overrides Layer 1
        LED_layer3, // Overrides Layer 2
        LED_layer4  // Overrides Layer 3
);
// Enable the LED layers
void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _LAYER0));
    return state;
}
layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _LAYER1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _LAYER2));
    rgblight_set_layer_state(3, layer_state_cmp(state, _LAYER3));
    rgblight_set_layer_state(4, layer_state_cmp(state, _LAYER4));
    /*switch (get_highest_layer(state)){
        case _LAYER1:
            rgblight_setrgb(0,255,0);
            break;
        case _LAYER2:
            rgblight_setrgb(255,0,255);
            break;
        case _LAYER3:
            rgblight_setrgb(255,128,0);
            break;
        case _LAYER4:
            rgblight_setrgb(0,255,255);
            break;
        default: // For other layers or default layer
            rgblight_setrgb(0,0,255);
            break;
    }
     */
    return state;
} // End LED Layers
