// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.




#include "Drive.h"
#include "../Robotmap.h"
#include "../Commands/TankDrive.h"

Drive::Drive() : Subsystem("Drive") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	frontLeftDrive = RobotMap::drivefrontLeftDrive;
	backLeftDrive = RobotMap::drivebackLeftDrive;
	frontRightDrive = RobotMap::drivefrontRightDrive;
	backRightDrive = RobotMap::drivebackRightDrive;
	driveTrain = RobotMap::drivedriveTrain;
	enLeft = RobotMap::driveenLeft;
	enRight = RobotMap::driveenRight;
	switchSol1 = RobotMap::driveswitchSol1;
	switchSol2 = RobotMap::driveswitchSol2;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	toggleState = false;
}
    
void Drive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new TankDrive());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Drive::M_Drive(Joystick* joy1, Joystick* joy2){
	driveTrain->TankDrive(joy1, joy2);
}

void Drive::toggle() {
	if(toggleState == true) {
		switchSol1->Set(Relay::kOn);
		switchSol2->Set(Relay::kOff);
	}
	else {
		switchSol1->Set(Relay::kOff);
		switchSol2->Set(Relay::kOn);
	}
	toggleState = !toggleState;
}
