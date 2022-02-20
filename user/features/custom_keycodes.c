#include "custom_keycodes.h"

uint8_t state = STATE_NONE;
bool process_custom_keycode(uint16_t keycode, const keyrecord_t *record) {
    switch (keycode) {
#include "custom_keycodes.def"
    }
    return true;
}
