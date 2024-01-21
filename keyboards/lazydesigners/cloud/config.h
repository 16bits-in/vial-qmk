/*
Copyright 2020 LAZYDESIGNERS

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { F0, F6, D5, F7 }
#define MATRIX_COL_PINS { E6, B2, B3, B7, D4, D6, D7, B4, B5, B6, C6, C7, F1 }

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }

#define DIODE_DIRECTION COL2ROW

/* RBG underglow */
#define WS2812_DI_PIN D0
#ifdef WS2812_DI_PIN
	#define RGBLIGHT_SLEEP
	#define RGBLED_NUM 15
	#define RGBLIGHT_HUE_STEP 8
	#define RGBLIGHT_SAT_STEP 8 
	#define RGBLIGHT_VAL_STEP 8

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD    
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE            
#define RGBLIGHT_EFFECT_CHRISTMAS       
#define RGBLIGHT_EFFECT_STATIC_GRADIENT 
#define RGBLIGHT_EFFECT_KNIGHT          
#define RGBLIGHT_EFFECT_RGB_TEST     
#define RGBLIGHT_EFFECT_ALTERNATING   
#define RGBLIGHT_EFFECT_TWINKLE         

#endif
