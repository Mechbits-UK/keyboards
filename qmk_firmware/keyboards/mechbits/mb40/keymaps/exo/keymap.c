#include QMK_KEYBOARD_H

enum my_layers {
    _LAYER0, // UK ISO Base / Blue
    _LAYER1, // Lower / Green
    _LAYER2, // Raise / Yellow
    _LAYER3, // Mouse & Numpad / Orange
    _LAYER4, // Adjust / Red
    _LAYER5, // AltGr / Cyan
    _LAYER6, // Blank
    _LAYER7, // Blank
    _LAYER8, // Blank
}; // Start Keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* UK ISO Base (Layer 0)
    * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    * │ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │Bksp │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │ Tab │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │ ;:  │ '@  │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │Shift│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │ ,<  │ .>  │ /?  │Enter│
    * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
    * │Ctrl │ OS  │ Alt │ \│  │Lower│   Space   │Raise│  ←  │  ↓  │  ↑  │  →  │
    * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [_LAYER0] = LAYOUT_planck(
      KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,  KC_T,   KC_Y,  KC_U,    KC_I,     KC_O,     KC_P,     KC_BSPC,
      KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,  KC_G,   KC_H,  KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
      KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,  KC_B,   KC_N,  KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
      KC_LCTL,  KC_LGUI,  KC_LALT,  KC_NUBS,  MO(1),     KC_SPC,    MO(2),   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT
    ),
   /* Lower (Momentary Layer 1)
    * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    * │  `  │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │ Del │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │  -  │  =  │  [  │  ]  │  #  │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │Caps │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │TG(4)│Brgt-│Brgt+│     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │RGBTg│Lower│           │Raise│Home │PgDn │PgUp │ End │
    * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [_LAYER1] = LAYOUT_planck(
      KC_GRV,   KC_1,   KC_2,     KC_3,     KC_4,    KC_5,    KC_6,    KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
      KC_NO,    KC_F1,  KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_NUHS,
      KC_CAPS,  KC_F7,  KC_F8,    KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_TRNS,    RGB_VAD,  RGB_VAI,  KC_NO,    KC_NO,
      KC_NO,    KC_NO,  KC_NO,    RGB_TOG,  KC_TRNS,      KC_TRNS,       TG(4),  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END
    ),
   /* Raise (Momentary Layer 2)
    * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    * │  ¬  │  !  │  "  │  £  │  $  │  %  │  ^  │  &  │  *  │  (  │  )  │Calc │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │     │     │     │  _  │  +  │  {  │  }  │  ~  │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │TG(3)│     │     │TG(4)│     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
    * │Power│Sleep│     │Mute │Lower│    Play   │Raise│Prev │Vol- │Vol+ │Next │
    * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [_LAYER2] = LAYOUT_planck(
      KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_CALC,
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,   KC_NO,    KC_NO,    KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_PWR,   KC_SLEP,  KC_NO,    KC_MUTE,  TG(3),       KC_TRNS,      KC_TRNS,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT
    ),
   /* Raise + TG(3) (Toggle Layer 3 on/off)
    * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    * │ M1  │ MUp │ M2  │PgUp │PrtSc│  ↑  │Bksp │  /  │  7  │  8  │  9  │  -  │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │ MLt │ MDn │ MRt │PgDn │  ←  │  ↓  │  →  │  *  │  4  │  5  │  6  │  +  │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │ M3  │MwUp │ M4  │ Ins │TG(3)│Pause│ Del │TG(4)│  1  │  2  │  3  │  =  │
    * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
    * │MwLt │MwDn │MwRt │ M5  │Lower│   Space   │Raise│  0  │  ,  │  .  │Enter│
    * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [_LAYER3] = LAYOUT_planck(
      KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_PGUP,  KC_PSCR,  KC_UP,    KC_BSPC,  KC_PSLS,  KC_P7,  KC_P8,    KC_P9,    KC_PMNS,
      KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PAST,  KC_P4,  KC_P5,    KC_P6,    KC_PPLS,
      KC_BTN3,  KC_WH_U,  KC_BTN4,  KC_INS,   KC_TRNS,  KC_3,  KC_3,   KC_TRNS,  KC_P1,  KC_P2,    KC_P3,    KC_PEQL,
      KC_WH_L,  KC_WH_D,  KC_WH_R,  KC_BTN5,  TO(0),       KC_TRNS,        TO(0),  KC_P0,  KC_PCMM,  KC_PDOT,  KC_PENT
    ),
   /* Lower + TG(4) (Toggle Layer 4 on/off)
    * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    * │Mode+│Hue+ │Sat+ │Brgt+│Efct+│     │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │Mode-│Hue- │Sat- │Brgt-│Efct-│     │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │TG(5)│     │     │TG(4)│     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │Lower│           │Raise│     │     │Debug│Reset│
    * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
    */
    [_LAYER4] = LAYOUT_planck(
      RGB_MOD,   RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,
      RGB_RMOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_SPD,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,
      KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_4,  KC_4,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,
      KC_NO,     KC_NO,    KC_NO,    KC_NO,    TO(0),      KC_TRNS,      TO(0),  KC_NO,  KC_NO,  DB_TOGG,  QK_BOOT
    ),
    /* Lower + TG(4), then TG(5) (Toggle Layer 5 on, then TG(5) to toggle Layer 5 off)
     * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
     * │  ¦  │     │  É  │  €  │     │     │     │  Ú  │  Í  │  Ó  │     │     │
     * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
     * │     │  Á  │     │     │     │     │     │     │     │     │     │     │
     * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
     * │Shift│     │     │     │TG(5)│     │     │TG(6)│     │     │     │     │
     * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │TG(7)│           │TG(8)│     │AltGr│     │     │
     * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
     */
     [_LAYER5] = LAYOUT_planck(
       KC_GRV,   KC_NO,  KC_E,   KC_4,   KC_NO,    KC_NO,  KC_NO,  KC_U,   KC_I,   KC_O,     KC_NO,  KC_NO,
       KC_NO,    KC_A,   KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,
       KC_LSFT,  KC_NO,  KC_NO,  KC_NO,  KC_TRNS,  KC_NO,  KC_NO,  TG(6),  KC_NO,  KC_NO,    KC_NO,  KC_NO,
       KC_NO,    KC_NO,  KC_NO,  KC_NO,  TG(7),        TO(0),      TG(8),  KC_NO,  KC_RALT,  KC_NO,  KC_NO
     ),
     /* Lower + TG(4), then TG(5), then TG(6) (Toggle Layer 6 on, then TG(6) to toggle Layer 6 off)
      * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
      * │     │     │     │     │     │     │     │     │     │     │     │     │
      * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      * │     │     │     │     │     │     │     │     │     │     │     │     │
      * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      * │     │     │     │     │     │     │     │TG(6)│     │     │     │     │
      * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
      * │     │     │     │     │     │           │     │     │     │     │     │
      * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
      */
      [_LAYER6] = LAYOUT_planck(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_TRNS,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,      TG(0),      KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO
      ),
      /* Lower + TG(4), then TG(5), then TG(7) (Toggle Layer 7 on, then TG(7) to toggle Layer 7 off)
       * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
       * │     │     │     │     │     │     │     │     │     │     │     │     │
       * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       * │     │     │     │     │     │     │     │     │     │     │     │     │
       * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       * │     │     │     │     │     │     │     │     │     │     │     │     │
       * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
       * │     │     │     │     │TG(7)│           │     │     │     │     │     │
       * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
       */
       [_LAYER7] = LAYOUT_planck(
         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_TRNS,    TG(0),      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
       ),
       /* Lower + TG(4), then TG(5), then TG(8) (Toggle Layer 8 on, then TG(8) to toggle Layer 8 off)
        * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
        * │     │     │     │     │     │     │     │     │     │     │     │     │
        * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
        * │     │     │     │     │     │     │     │     │     │     │     │     │
        * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
        * │     │     │     │     │     │     │     │     │     │     │     │     │
        * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
        * │     │     │     │     │     │           │TG(8)│     │     │     │     │
        * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
        */
        [_LAYER8] = LAYOUT_planck(
          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,
          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,
          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,
          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,      TG(0),      KC_TRNS,  KC_NO,  KC_NO,  KC_NO,  KC_NO
        ),
}; // End keymap
// LED Layers
const rgblight_segment_t PROGMEM LED_layer0[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_BLUE});
const rgblight_segment_t PROGMEM LED_layer1[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_GREEN});
const rgblight_segment_t PROGMEM LED_layer2[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_YELLOW});
const rgblight_segment_t PROGMEM LED_layer3[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_ORANGE});
const rgblight_segment_t PROGMEM LED_layer4[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_RED});
const rgblight_segment_t PROGMEM LED_layer5[] = RGBLIGHT_LAYER_SEGMENTS( {0, 6, HSV_CYAN});
// Define array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
        LED_layer0,
        LED_layer1, // Overrides Layer 0
        LED_layer2, // Overrides Layer 1
        LED_layer3, // Overrides Layer 2
        LED_layer4, // Overrides Layer 3
        LED_layer5  // Overrides Layer 4
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
    rgblight_set_layer_state(5, layer_state_cmp(state, _LAYER5));
    return state;
}
