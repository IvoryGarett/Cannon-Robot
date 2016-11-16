// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::driveLeft_motor_F;
std::shared_ptr<SpeedController> RobotMap::driveLeft_motor_R;
std::shared_ptr<SpeedController> RobotMap::driveRight_motor_F;
std::shared_ptr<SpeedController> RobotMap::driveRight_motor_R;
std::shared_ptr<RobotDrive> RobotMap::driveRobot_Drive_4_1;
std::shared_ptr<Solenoid> RobotMap::cannonCannon_L;
std::shared_ptr<Solenoid> RobotMap::cannonCannon_C;
std::shared_ptr<Solenoid> RobotMap::cannonCannon_R;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveLeft_motor_F.reset(new Jaguar(0));
    lw->AddActuator("Drive", "Left_motor_F", std::static_pointer_cast<Jaguar>(driveLeft_motor_F));
    
    driveLeft_motor_R.reset(new Jaguar(2));
    lw->AddActuator("Drive", "Left_motor_R", std::static_pointer_cast<Jaguar>(driveLeft_motor_R));
    
    driveRight_motor_F.reset(new Jaguar(3));
    lw->AddActuator("Drive", "Right_motor_F", std::static_pointer_cast<Jaguar>(driveRight_motor_F));
    
    driveRight_motor_R.reset(new Jaguar(4));
    lw->AddActuator("Drive", "Right_motor_R", std::static_pointer_cast<Jaguar>(driveRight_motor_R));
    
    driveRobot_Drive_4_1.reset(new RobotDrive(driveLeft_motor_F, driveLeft_motor_R,
              driveRight_motor_F, driveRight_motor_R));
    
    driveRobot_Drive_4_1->SetSafetyEnabled(true);
        driveRobot_Drive_4_1->SetExpiration(0.1);
        driveRobot_Drive_4_1->SetSensitivity(0.5);
        driveRobot_Drive_4_1->SetMaxOutput(1.0);
        driveRobot_Drive_4_1->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
        driveRobot_Drive_4_1->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
    cannonCannon_L.reset(new Solenoid(0, 0));
    lw->AddActuator("Cannon", "Cannon_L", cannonCannon_L);
    
    cannonCannon_C.reset(new Solenoid(0, 1));
    lw->AddActuator("Cannon", "Cannon_C", cannonCannon_C);
    
    cannonCannon_R.reset(new Solenoid(0, 2));
    lw->AddActuator("Cannon", "Cannon_R", cannonCannon_R);
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
