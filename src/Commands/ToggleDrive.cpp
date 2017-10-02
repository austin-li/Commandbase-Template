#include "ToggleDrive.h"
#include "CommandBase.h"

ToggleDrive::ToggleDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void ToggleDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ToggleDrive::Execute() {
	if (CommandBase::tankDrive == true) {
		CommandBase::tankDrive = false;
	} else {
		CommandBase::tankDrive = true;
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ToggleDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleDrive::Interrupted() {

}
