#include <Stepper.h>


// the motors step angle is 90
Stepper myStepper(90, 11, 10, 9, 8);


void setup()
{
  // set the speed at 1 rpm to notice the angle
  myStepper.setSpeed(1);
  
}

void loop() 
{
  // stepper will take 2 steps to right
  myStepper.step(2);
  delay(500);

    // stepper will take 2 steps to left 

  myStepper.step(-2);
  delay(500);
}
