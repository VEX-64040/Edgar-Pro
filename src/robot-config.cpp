#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor frontMogo = motor(PORT8, ratio36_1, false);
motor rearMogo = motor(PORT6, ratio36_1, true);
digital_out frontHook = digital_out(Brain.ThreeWirePort.H);
inertial inertialSensor = inertial(PORT13);
controller Controller1 = controller(primary);
motor LeftDriveSmartMotorA = motor(PORT11, ratio6_1, true);
motor LeftDriveSmartMotorB = motor(PORT12, ratio6_1, false);
motor_group LeftDriveSmart = motor_group(LeftDriveSmartMotorA, LeftDriveSmartMotorB);
motor RightDriveSmartMotorA = motor(PORT1, ratio6_1, false);
motor RightDriveSmartMotorB = motor(PORT2, ratio6_1, true);
motor_group RightDriveSmart = motor_group(RightDriveSmartMotorA, RightDriveSmartMotorB);
motor ringLift = motor(PORT19, ratio6_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}