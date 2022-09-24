// Copyright 2022 biggz (@biggz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define MATRIX_ROWS 4
#define MATRIX_ROW_PINS { GP28, GP26, GP11, GP12 }

#define MATRIX_COLS 12
#define MATRIX_COL_PINS { GP21, GP22, GP23, GP24, GP25, GP29, GP0, GP1, GP2, GP3, GP4, GP5 }

#define WS2812_TRST_US 300
#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
#define RGB_DI_PIN GP27
#define RGBLED_NUM 6
#define RGBLIGHT_LIMIT_VAL 200
#define RGBLIGHT_LAYERS

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates double-tap reset to bootloader
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // Double tap timeout window in ms