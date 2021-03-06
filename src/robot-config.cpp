#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors

controller Controller1 = controller(primary);
inertial inertialSensor = inertial(PORT10);

digital_out frontHook = digital_out(Brain.ThreeWirePort.H);
motor frontMogo = motor(PORT7, ratio36_1, true);

motor ringLift = motor(PORT11, ratio18_1, false);              //FIX GEARS LMAO

motor LeftDriveSmartMotorA = motor(PORT1, ratio6_1, true);
motor LeftDriveSmartMotorB = motor(PORT3, ratio6_1, false);
motor LeftDriveSmartMotorC = motor(PORT9, ratio6_1, false);
motor_group LeftDriveSmart = motor_group(LeftDriveSmartMotorA, LeftDriveSmartMotorB, LeftDriveSmartMotorC);

motor RightDriveSmartMotorA = motor(PORT2, ratio6_1, false);
motor RightDriveSmartMotorB = motor(PORT4, ratio6_1, true);
motor RightDriveSmartMotorC = motor(PORT6, ratio6_1, true);
motor_group RightDriveSmart = motor_group(RightDriveSmartMotorA, RightDriveSmartMotorB, RightDriveSmartMotorC);

digital_out rearHook = digital_out(Brain.ThreeWirePort.G);
digital_out autonHook = digital_out(Brain.ThreeWirePort.A);

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