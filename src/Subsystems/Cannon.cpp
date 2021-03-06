// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Cannon.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Cannon::Cannon() : Subsystem("Cannon") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    cannon_L = RobotMap::cannonCannon_L;
    cannon_C = RobotMap::cannonCannon_C;
    cannon_R = RobotMap::cannonCannon_R;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Cannon::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
	//Blessings of Pepe
void Cannon::ShootCenter(){
	if(Robot::oi->getJoystick_L()->GetRawButton(1)==true){
	cannon_C->Set(true);
	}else{
	cannon_C->Set(false);
	}
}

void Cannon::ShootLeft(){
	if(Robot::oi->getJoystick_L()->GetRawButton(0)==true){
	cannon_L->Set(true);
	}else{
	cannon_L->Set(false);
	}
}

void Cannon::ShootRight(){
	if(Robot::oi->getJoystick_L()->GetRawButton(2)==true){
	cannon_R->Set(true);
	}else{
	cannon_R->Set(false);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
