/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#pragma once

#include <stdint.h>
#include "GamepadEnums.h"

struct GamepadOptions
{
	InputMode inputMode {InputMode::INPUT_MODE_XINPUT};
	DpadMode dpadMode {DpadMode::DPAD_MODE_DIGITAL};
	SOCDMode socdMode {SOCDMode::SOCD_MODE_NEUTRAL};
	CARDINAL_SOCDMode xAxisSocdMode {CARDINAL_SOCDMode::SOCD_MODE_NEUTRAL_PRIORITY};
	CARDINAL_SOCDMode yAxisSocdMode {CARDINAL_SOCDMode::SOCD_MODE_NEUTRAL_PRIORITY};
	uint32_t checksum;
	bool invertXAxis;
	bool invertYAxis;
};
