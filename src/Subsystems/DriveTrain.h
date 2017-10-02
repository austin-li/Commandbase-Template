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
	double mult;

public:
	DriveTrain();
	void InitDefaultCommand();
	void tankDrive(double left, double right);
	void arcadeDrive(double move, double rotation);
};

#endif  // DriveTrain_H
