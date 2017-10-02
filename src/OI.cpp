#include "OI.h"
#include "Commands/ToggleDrive.h"

#include <WPILib.h>

OI::OI() :leftStick(new Joystick(1)), rightStick(new Joystick(2)){
	// Process operator interface input here.
	toggleDrive = new JoystickButton(leftStick, 1);
	toggleDrive->WhenPressed(new ToggleDrive);
}

Joystick* OI::getLeft() {
	return leftStick;
}

Joystick* OI::getRight() {
	return rightStick;
}
