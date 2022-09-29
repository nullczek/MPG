/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#pragma once

#include <stdint.h>
#include "GamepadEnums.h"

struct GamepadOptions
{
	public:
		InputMode inputMode {InputMode::INPUT_MODE_XINPUT};
		DpadMode dpadMode {DpadMode::DPAD_MODE_DIGITAL};
		SOCDMode socdMode {SOCDMode::SOCD_MODE_NEUTRAL}; // deprecated
		uint32_t checksum;
		bool invertXAxis;
		bool invertYAxis;
		void setXAxisSocdMode(CARDINAL_SOCDMode mode);
		CARDINAL_SOCDMode getXAxisSocdMode();
		void setYAxisSocdMode(CARDINAL_SOCDMode mode);
		CARDINAL_SOCDMode getYAxisSocdMode();
	protected:
		CARDINAL_SOCDMode xAxisSocdMode {CARDINAL_SOCDMode::SOCD_MODE_NEUTRAL_PRIORITY};
		CARDINAL_SOCDMode yAxisSocdMode {CARDINAL_SOCDMode::SOCD_MODE_NEUTRAL_PRIORITY};
};
