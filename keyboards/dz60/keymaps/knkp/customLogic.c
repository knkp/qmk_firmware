#include QMK_KEYBOARD_H
#include "customLogic.h"
#include "keymap.h"
#include "keyDefinitions.h"
#include "timer.h"




uint32_t layer_state_set_user(uint32_t state)
{
  switch (biton32(state))
  {
    case QWERTY:
      rgblight_mode(9);
      break;
    case NAV_CLUSTER:
      rgblight_mode(29);
      break;
    case GAMING:
      rgblight_mode(26);
      break;
    case FN_LAYER:
      rgblight_mode(1);
      rgblight_setrgb(0x00, 0x80, 0xFF);
      break;
  }
  return state;
}

//bool process_record_user(uint16_t keycode, keyrecord_t *record)
//{
//  return
//    updateLayerState(keycode, record);
//}
