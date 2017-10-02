#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class DriveTrain : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Jaguar* leftMotor;
	Jaguar* rightMotor;

public:
	DriveTrain();
	void InitDefaultCommand();
	void tankDrive(double left, double right);
};

#endif  // DriveTrain_H
