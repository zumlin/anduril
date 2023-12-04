// Wurkkos TS11, like a TS25  but with a RGB button and RGB front aux
// Copyright (C) 2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "wurkkos/ts25/anduril.h"

// this light has three aux LED channels: R, G, B
#define USE_AUX_RGB_LEDS

// turn on the aux LEDs while main LEDs are on
// (but not until the main LEDs are bright enough to overpower the aux)
// (setting this lower makes an annoying effect on some levels)
#define USE_AUX_RGB_LEDS_WHILE_ON  50
#define USE_INDICATOR_LED_WHILE_RAMPING

#undef USE_SIMPLE_UI

#define DEFAULT_AUTOLOCK_TIME 10
#define DEFAULT_2C_STYLE 1
#define DEFAULT_MANUAL_MEMORY 90
#define DEFAULT_MANUAL_MEMORY_TIMER 10
#define DEFAULT_POST_OFF_VOLTAGE_SECONDS 0

#ifdef RGB_LED_OFF_DEFAULT
#undef RGB_LED_OFF_DEFAULT
#endif
#define RGB_LED_OFF_DEFAULT 0x25 // high purple

#ifdef RGB_LED_LOCKOUT_DEFAULT
#undef RGB_LED_LOCKOUT_DEFAULT
#endif
#define RGB_LED_LOCKOUT_DEFAULT 0x15 // low purple