// Sofirn SC21 Pro - same setup as a Wurkkos TS10, but with the aux indicator on while ramping
// Copyright (C) 2022-2023 (FIXME)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "wurkkos/ts10/anduril.h"

// turn on the aux LED while main LED is on
#ifndef USE_INDICATOR_LED_WHILE_RAMPING
#define USE_INDICATOR_LED_WHILE_RAMPING
#endif

#undef USE_SIMPLE_UI

#define DEFAULT_AUTOLOCK_TIME 10
#define DEFAULT_2C_STYLE 1
#define DEFAULT_MANUAL_MEMORY 90
#define DEFAULT_MANUAL_MEMORY_TIMER 10

#undef INDICATOR_LED_DEFAULT_MODE
#define INDICATOR_LED_DEFAULT_MODE ((1<<2) + 2)