/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#include "GamepadOptions.h"

void GamepadOptions::setXAxisSocdMode(CARDINAL_SOCDMode mode)
{
	xAxisSocdMode = mode;
}

CARDINAL_SOCDMode GamepadOptions::getXAxisSocdMode()
{
	return xAxisSocdMode;
}

void GamepadOptions::setYAxisSocdMode(CARDINAL_SOCDMode mode)
{
	yAxisSocdMode = mode;
}

CARDINAL_SOCDMode GamepadOptions::getYAxisSocdMode()
{
	return yAxisSocdMode;
}
