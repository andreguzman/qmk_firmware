#include "quantum.h"

// Mask out handedness diode to prevent it
// from keeping the keyboard awake
// - just mirroring `KC_NO` in the `LAYOUT`
//   macro to keep it simple
const matrix_row_t matrix_mask[] = {
    0b111111,
    0b111111,
    0b111111,
    0b111111,
    0b111110,
    0b111111,
    0b111111,
    0b111111,
    0b111111,
    0b111110,
};
