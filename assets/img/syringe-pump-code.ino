#include <AccelStepper.h>

AccelStepper stepper;

int startBtn = 4, endSwitch = 5, redLED = 13, greenLED = 12, blueLED = 11;
double speedML = 10.0;
double ratios[2] = {5.8, 3.45};
int syringe = 10;

double conversion(double speed) {
  // Desired Speed in steps/sec = mL/min * {mm/mL ratio} * steps/rev * (min/sec) * (rev/mm)
  return speed * ratios[(syringe/10) - 1] * 800.0 * (1/60.0) * (1/2.0);
}

void setup()
{
  // Sets the max possible speed for the Syringe Pump
  stepper.setMaxSpeed(1000);
  stepper.setSpeed(conversion(speedML));
  pinMode(startBtn, INPUT_PULLUP);
  pinMode(endSwitch, INPUT_PULLUP);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop()
{
  analogWrite(blueLED, 0);

  // Checks if the end switch is pressed, and if it's not, it will proceed by checking if the
  // start button is pressed to initiate the pump.
  if (digitalRead(endSwitch) == LOW) {

    // If the actual start button is pressed, then the motor will begin to spin.
    if (digitalRead(startBtn) == LOW) {
      analogWrite(redLED, 0);
      analogWrite(greenLED, 255);
      stepper.runSpeed();
    }
    else {
      // In case that the button is not pressed, the LED will turn yellow.
      analogWrite(redLED, 255);
      analogWrite(greenLED, 255);
    }
  }
  else {
    // If the limit switch is pressed, then the LED turns red and nothing else will be able to happen.
    analogWrite(redLED, 255);
    analogWrite(greenLED, 0);
  }
}
