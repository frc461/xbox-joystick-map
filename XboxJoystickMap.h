/*
 * XboxJoystickMap.h
 *
 *  Created on: Jan 18, 2016
 *      Author: Garrett Davidson
 */

#ifndef SRC_XBOXJOYSTICKMAP_H_
#define SRC_XBOXJOYSTICKMAP_H_

enum XboxJoystickButton {
	buttonA = 1,
	buttonB,
	buttonX,
	buttonY,
	buttonLeftBumper,
	buttonRightBumper,
	buttonBack,
	buttonStart,
	buttonLeftStick,
	buttonRightStick
};

enum XboxJoystickAxis {
	axisLeftStickX = 1,
	axisLeftStickY,
	axisLeftTrigger,
	axisRightTrigger,
	axisRightStickX,
	axisRightStickY
};

enum XboxDPadDirection {
	dPadUp = 0,
	dPadUpLeft = 45,
	dPadLeft = 90,
	dPadDownLeft = 135,
	dPadDown = 180,
	dPadDownRight = 225,
	dPadRight = 270,
	dPadUpRight = 315
};

#endif /* SRC_XBOXJOYSTICKMAP_H_ */
