#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {0, 1, 2, 3},
  {4, 5, 6, 7},
  {8, 9, 10, 11}
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 74,  0 }, { 148,  0 }, { 222,  0 }, {  120,  0 }, {  0,  32 },
  { 74,  32 }, { 148,  32 }, { 222,  32 }, { 120,  32 }, {  0,  64 }, {  74,  64 }
}, {
  // LED Index to Flag
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} 

};
#endif
