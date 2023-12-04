// FW3X (RGB aux swapped) config options for Anduril
// Copyright (C) 2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

// Lumintop swapped red and blue wires.  Some people fixed the wiring.
// Then the firmware fixed the pinouts to match Lumintop's wiring.
// This firmware exists for people who fixed their wiring.
#define FW3X_RGB_SWAP
#include "lumintop/fw3x-lume1/anduril.h"

#undef USE_SIMPLE_UI

#define DEFAULT_AUTOLOCK_TIME 10
#define DEFAULT_2C_STYLE 1
#define DEFAULT_MANUAL_MEMORY 56
#define DEFAULT_MANUAL_MEMORY_TIMER 10
#define DEFAULT_POST_OFF_VOLTAGE_SECONDS 0

#ifdef RGB_LED_OFF_DEFAULT
#undef RGB_LED_OFF_DEFAULT
#endif
#define RGB_LED_OFF_DEFAULT 0x20 // high red

#ifdef RGB_LED_LOCKOUT_DEFAULT
#undef RGB_LED_LOCKOUT_DEFAULT
#endif
#define RGB_LED_LOCKOUT_DEFAULT 0x10 // low red