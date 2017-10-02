#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick* leftStick;
	Joystick* rightStick;
	Button *toggleDrive;
public:
	OI();
	Joystick* getLeft();
	Joystick* getRight();
};

#endif  // OI_H
