// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/ArmDrop.h"
#include "Commands/ArmLift.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/Fire.h"
#include "Commands/RollerBackwards.h"
#include "Commands/RollerForward.h"
#include "Commands/RollerLift.h"
#include "Commands/RollerStop.h"
#include "Commands/SwitchShift.h"
#include "Commands/TankDrive.h"
#include "Commands/MoveClaw.h"
#include "Commands/ClawDown.h"
#include "Commands/ClawUp.h"
#include "Commands/ClawMid.h"
#include "Commands/ClawTop.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	//make joysticks and buttons, then tell what commands they activate
	joyPad = new Joystick(3);
	
	armBtn2 = new JoystickButton(joyPad, 5);
	armBtn2->WhenPressed(new ArmDrop());
	armBtn1 = new JoystickButton(joyPad, 4);
	armBtn1->WhenPressed(new ArmLift());
	rollerBtn3 = new JoystickButton(joyPad, 3);
	rollerBtn3->WhenPressed(new RollerBackwards());
	rollerBtn2 = new JoystickButton(joyPad, 2);
	rollerBtn2->WhenPressed(new RollerForward());
	rollerBtn1 = new JoystickButton(joyPad, 1);
	rollerBtn1->WhenPressed(new RollerStop());
	joy2 = new Joystick(2);
	
	joy2Trigger = new JoystickButton(joy2, 1);		//Right Trigger
	joy2Trigger->WhileHeld(new SwitchShift());
	joy1 = new Joystick(1);
	
	joy1Trigger = new JoystickButton(joy1, 1);		//Left Trigger
	joy1Trigger->WhenPressed(new Fire());
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("TankDrive", new TankDrive());

	SmartDashboard::PutData("Fire", new Fire());

	SmartDashboard::PutData("RollerForward", new RollerForward());

	SmartDashboard::PutData("RollerBackwards", new RollerBackwards());

	SmartDashboard::PutData("RollerStop", new RollerStop());

	SmartDashboard::PutData("RollerLift", new RollerLift());

	SmartDashboard::PutData("ArmLift", new ArmLift());

	SmartDashboard::PutData("ArmDrop", new ArmDrop());

	SmartDashboard::PutData("SwitchShift", new SwitchShift());

        // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	joy1Thumb = new JoystickButton(joy1,2);
	joy1Thumb->WhenPressed(new Fire());
	
	joy2Thumb = new JoystickButton(joy2,2);
	joy2Thumb->WhenPressed(new Fire());
	
	joy1Thumb3 = new JoystickButton(joy1,3);
	joy1Thumb3->WhileHeld(new MoveClaw());
	
	joyPadY = new JoystickButton(joyPad, 4);
	joyPadY->WhileHeld(new ClawUp());
	
	joyPadA = new JoystickButton(joyPad, 5);
	joyPadA->WhileHeld(new ClawDown());
	
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getjoyPad() {
	return joyPad;
}

Joystick* OI::getjoy2() {
	return joy2;
}

Joystick* OI::getjoy1() {
	return joy1;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

JoystickButton* OI::getjoy1Trigger() {
	return joy1Trigger;
}
JoystickButton* OI::getrollerBtn1() {
	return rollerBtn1;
}
JoystickButton* OI::getrollerBtn2() {
	return rollerBtn2;
}
JoystickButton* OI::getrollerBtn3() {
	return rollerBtn3;
}
JoystickButton* OI::getarmBtn1() {
	return armBtn1;
}
JoystickButton* OI::getarmBtn2() {
	return armBtn2;
}
JoystickButton* OI::getjoythumb1() {
	return joy1Thumb;
}
JoystickButton* OI::getjoythumb2() {
	return joy2Thumb;
}
JoystickButton* OI::getjoythumb3() {
	return joy1Thumb3;
}
JoystickButton* OI::getjoyPadY() {
	return joyPadY;
}
JoystickButton* OI::getjoyPadA() {
	return joyPadA;
}
