// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.



#include "MoveClaw.h"
#include "../Subsystems/Claw.h"


MoveClaw::MoveClaw() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void MoveClaw::Initialize() {
	printf("MoveClawStarted"); //show that claw should be moving
}

// Called repeatedly when this Command is scheduled to run
void MoveClaw::Execute() {
	printf(" ");
	Robot::claw->pot1->GetValue(); //get pot value
	printf("Potentiometer Value: %d \n", Robot::claw->pot1->GetValue()); //print out pot value
}

//Pot goes from 0 to 965
//180 degrees on pot is ~50

// Make this return true when this Command no longer needs to run execute()
bool MoveClaw::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MoveClaw::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveClaw::Interrupted() {

}
