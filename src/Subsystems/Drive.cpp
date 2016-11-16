// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Drive.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/Driver.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Drive::Drive() : Subsystem("Drive") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    left_motor_F = RobotMap::driveLeft_motor_F;
    left_motor_R = RobotMap::driveLeft_motor_R;
    right_motor_F = RobotMap::driveRight_motor_F;
    right_motor_R = RobotMap::driveRight_motor_R;
    robot_Drive_4_1 = RobotMap::driveRobot_Drive_4_1;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Drive::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new Driver());

}
    // END AUTOGENERATED CODE
void Drive::DriveWithJoystics(){
	left_motor_F->Set(Robot::oi->getJoystick_L()->GetY());
	left_motor_R->Set(Robot::oi->getJoystick_L()->GetY());
	//HERE COMES DAT BOI
	//#dankmemes
	right_motor_F->Set(Robot::oi->getJoystick_R()->GetY());
	right_motor_R->Set(Robot::oi->getJoystick_R()->GetY());
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

