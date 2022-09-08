/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#pragma once
#include <initializer_list>

// The available input modes
// TODO: Think about making enums "class enum" instead. This will keep them out of the global namespace
// and provide strong type assurance instead of being treated as ints. Also, modern c++ would tend towards
// using Pascal-case naming for the individual declarations.
typedef enum
{
	INPUT_MODE_XINPUT,
	INPUT_MODE_SWITCH,
	INPUT_MODE_HID,
	INPUT_MODE_CONFIG = 255,
} InputMode;

// The available stick emulation modes
typedef enum
{
	DPAD_MODE_DIGITAL,
	DPAD_MODE_LEFT_ANALOG,
	DPAD_MODE_RIGHT_ANALOG,
} DpadMode;

// The available SOCD cleaning methods
typedef enum
{
	SOCD_MODE_UP_PRIORITY,           // U+D=U, L+R=N
	SOCD_MODE_NEUTRAL,               // U+D=N, L+R=N
	SOCD_MODE_SECOND_INPUT_PRIORITY, // U>D=D, L>R=R (Last Input Priority, aka Last Win)
} SOCDMode;

typedef enum
{
	SOCD_MODE_NONE,									 // No cleaning
	SOCD_MODE_NEUTRAL_PRIORITY,               // U+D=N, L+R=N
	SOCD_MODE_LAST_INPUT_PRIORITY, // U>D=D, L>R=R (Last Input Priority, aka Last Win)
	SOCD_MODE_FIRST_INPUT_PRIORITY,       // U>D=U, L>R=U (First Input Priority)
	SOCD_MODE_CARDINAL_MIN_PRIORITY,           // U+D=U, L+R=N
	SOCD_MODE_CARDINAL_MAX_PRIORITY,         // U+D=U, L+R=N
} CARDINAL_SOCDMode;

static const auto CARDINAL_SOCDMode_List =
{
    SOCD_MODE_NONE,
    SOCD_MODE_NEUTRAL_PRIORITY,
    SOCD_MODE_LAST_INPUT_PRIORITY,
    SOCD_MODE_FIRST_INPUT_PRIORITY,
    SOCD_MODE_CARDINAL_MIN_PRIORITY,
		SOCD_MODE_CARDINAL_MAX_PRIORITY,
};

// Enum for tracking last direction state of Second Input SOCD method
typedef enum
{
	DIRECTION_NONE,
	DIRECTION_UP,
	DIRECTION_DOWN,
	DIRECTION_LEFT,
	DIRECTION_RIGHT,
	DIRECTION_BOTH
} DpadDirection;

// The available hotkey actions
typedef enum
{
	HOTKEY_NONE              = 0x00,
	HOTKEY_DPAD_DIGITAL      = (1U << 0),
	HOTKEY_DPAD_LEFT_ANALOG  = (1U << 1),
	HOTKEY_DPAD_RIGHT_ANALOG = (1U << 2),
	HOTKEY_HOME_BUTTON       = (1U << 3),
	HOTKEY_CAPTURE_BUTTON    = (1U << 4),
	HOTKEY_SOCD_UP_PRIORITY  = (1U << 5),
	HOTKEY_SOCD_NEUTRAL      = (1U << 6),
	HOTKEY_SOCD_LAST_INPUT   = (1U << 7),
	HOTKEY_INVERT_X_AXIS     = (1U << 8),
	HOTKEY_INVERT_Y_AXIS     = (1U << 9),
	HOTKEY_X_AXIS_SOCD_CYCLE = (1U << 10),
	HOTKEY_Y_AXIS_SOCD_CYCLE = (1U << 11),
} GamepadHotkey;
