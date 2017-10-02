#include "OI.h"

#include <WPILib.h>

OI::OI() :leftStick(new Joystick(1)), rightStick(new Joystick(2)){
	// Process operator interface input here.
}

Joystick* OI::getLeft() {
	return leftStick;
}

Joystick* OI::getRight() {
	return rightStick;
}
