// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

//initialize each "thing" (sensors, solenoids, encoders, pots, speed controllers, etc.)
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveLeftDrive = NULL;
SpeedController* RobotMap::driveRightDrive = NULL;
RobotDrive* RobotMap::drivedriveTrain = NULL;
Encoder* RobotMap::driveenLeft = NULL;
Encoder* RobotMap::driveenRight = NULL;
Solenoid* RobotMap::driveswitchSol1 = NULL;
Solenoid* RobotMap::driveswitchSol2 = NULL;
Solenoid* RobotMap::clawtriggerSol1 = NULL;
Solenoid* RobotMap::clawtriggerSol2 = NULL;
DigitalInput* RobotMap::clawballSwitch = NULL;
Solenoid* RobotMap::clawshooterSol1 = NULL;
Solenoid* RobotMap::clawshooterSol2 = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
Relay* RobotMap::armrollerrelay1 = NULL;
SpeedController* RobotMap::clawlifter = NULL;
AnalogChannel* RobotMap::clawPot1 = NULL;
Compressor* RobotMap::compressor = NULL;
Solenoid* RobotMap::armSol1 = NULL;
Solenoid* RobotMap::armSol2 = NULL;

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	//first line says where the "thing" is hooked into
	//second line adds it to live window for monitoring
	driveLeftDrive = new Talon(1, 1);
	lw->AddActuator("Drive", "LeftDrive", (Talon*) driveLeftDrive);
	
	driveRightDrive = new Talon(1, 2);
	lw->AddActuator("Drive", "RightDrive", (Talon*) driveRightDrive);
	
	drivedriveTrain = new RobotDrive(driveLeftDrive, driveRightDrive);
	
	drivedriveTrain->SetSafetyEnabled(false);
        drivedriveTrain->SetExpiration(0.1);
        drivedriveTrain->SetSensitivity(0.5);
        drivedriveTrain->SetMaxOutput(1.0);

        drivedriveTrain->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        drivedriveTrain->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	driveenLeft = new Encoder(1, 1, 1, 2, false, Encoder::k4X);
	lw->AddSensor("Drive", "enLeft", driveenLeft);
	driveenLeft->SetDistancePerPulse(1.0); //set how far the robot has moved for every encoder pulse
        driveenLeft->SetPIDSourceParameter(Encoder::kRate);
        driveenLeft->Start();
	driveenRight = new Encoder(1, 3, 1, 4, true, Encoder::k4X);
	lw->AddSensor("Drive", "enRight", driveenRight);
	driveenRight->SetDistancePerPulse(1.0);
        driveenRight->SetPIDSourceParameter(Encoder::kRate);
        driveenRight->Start();
	driveswitchSol1 = new Solenoid(1, 5);
	lw->AddActuator("Drive", "switchSol1", driveswitchSol1);
	
	driveswitchSol2 = new Solenoid(1, 6);
	lw->AddActuator("Drive", "switchSol2", driveswitchSol2);
	
	clawtriggerSol1 = new Solenoid(1, 1);
	lw->AddActuator("Claw", "triggerSol1", clawtriggerSol1);
	
	clawtriggerSol2 = new Solenoid(1, 9);
	lw->AddActuator("Claw", "triggerSol2", clawtriggerSol2);
	
	clawballSwitch = new DigitalInput(1, 5);
	lw->AddSensor("Claw", "ballSwitch", clawballSwitch);
	
	clawshooterSol1 = new Solenoid(1, 3);
	lw->AddActuator("Claw", "shooterSol1", clawshooterSol1);
	
	clawshooterSol2 = new Solenoid(1, 4);
	lw->AddActuator("Claw", "shooterSol2", clawshooterSol2);
	

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	armrollerrelay1 = new Relay(1, 7,Relay::kBothDirections);
	lw->AddActuator("Arm","rollerRelay1", armrollerrelay1);
	
	compressor = new Compressor(10,2);
	
	clawPot1 = new AnalogChannel(1, 9); 
	
	clawPot1 = new AnalogChannel(1, 2);
	lw->AddSensor("Claw", "Pot1", clawPot1);
	
	armSol1 = new Solenoid(1, 10); //todo find location of this solenoid
	lw->AddActuator("Arm", "Sol1", armSol1);
	
	armSol2 = new Solenoid(1, 11); //todo find location of this solenoid
	lw->AddActuator("Arm", "Sol2", armSol2);
}
