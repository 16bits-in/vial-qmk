#pragma once

#include "quantum.h"

#define LAYOUT_keypi( \
	K000, K001, K002, K003, \
	K100, K101, K102, K103, \
	K200, K201, K202, K203 \
) { \
	{ K000,  K001,  K002,  K003}, \
	{ K100,  K101,  K102,  K103}, \
	{ K200,  K201,  K202,  K203} \
}
