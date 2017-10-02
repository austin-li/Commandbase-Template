#include "DriveTrain.h"
#include "../RobotMap.h"
#include "Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("ExampleSubsystem"), leftMotor(new Jaguar(LEFTMOTOR)), rightMotor(new Jaguar(RIGHTMOTOR)){

}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double left, double right) {
	double mult = MULTIPLIER;
	leftMotor->Set(-left * mult);
	rightMotor->Set(-right * mult);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.