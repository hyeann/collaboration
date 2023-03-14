#include "vex.h"

using namespace vex;

controller ctrl;
competition Comp;

motor fRight (PORT10);
motor fLeft (PORT3,true);
motor bRight (PORT20);
motor bLeft (PORT12,true);
motor_group cLeft (fLeft, bLeft);
motor_group cRight (fRight, bRight);

int main() {

  cRight.spin (directionType::fwd, 50, velocityUnits::pct);
  cLeft.spin (directionType::fwd, 50, velocityUnits::pct);
  task::sleep (4000);

  cRight.spin (directionType::fwd, 20, velocityUnits::pct);
  cLeft.spin (directionType::fwd, -20, velocityUnits::pct);
  task::sleep (1500);

  cRight.spin (directionType::fwd, -100, velocityUnits::pct);
  cLeft.spin (directionType::fwd, -100, velocityUnits::pct);
  task::sleep (2000);

  cRight.stop();
  cLeft.stop();
  
}
