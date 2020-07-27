/*This code will use different speeds of a stepper motor to define breathing.  
 * It is based on the Arduino Stepper Motor One Revolution tutorial by Tom Igoe 
 * using an Adafruit #858 1/16 gear reduced 5V with a step revolution of 513 steps 
 * per single revoultion.  The stpper motor is attached to digital pins 9-12 of the Aruduino Uno R3
 * 
 * Created April 15 2016
 * By Mobin Anandwala
 * Version 1.0
*/

#include <Stepper.h>

// Variable Definitions (fixed integers)
const int stepsRev = 513; // Steps required to complete one revolution
const int Normal = 20; // Normal Breathing rate
const int ShortBreath = 25; // Short Breathing rate
const int Hypervent = 30; // Hyperventilation will not be used
const int LongBreath = 15; // Long Breathing rate
const int  VeryLongBreath = 10; // Very Long Breathing rate

// selection for test 
// 0 = Normal speed 1 = Short Breath 2 = Long Breaths 3 = Very Long Breaths

// Initializing stepper motor library on pins 9 through 12
Stepper myStepper(stepsRev, 9, 10, 11, 12);



void setup() {
  // put your setup code here, to run once:
  // Initialize motor at normal breathing speed
  myStepper.setSpeed(Normal);
  // Setup Serial port
  Serial.begin(9600);
  Serial.println("Starting Test");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
    // Motor testing (Using Normal speed as function test)
   NormalSpeed();

}

// Speed Functions
void NormalSpeed() {
    myStepper.setSpeed(Normal);
    Serial.println("Normal Breathing clockwise motor");
    myStepper.step(stepsRev);
    delay(500);

    // step one revolution in the opposing direction under given speed
    Serial.println("Normal Breathing counterclockwise motor");
    myStepper.step(-stepsRev);
    delay(500);
}

void ShortBreathSpeed() {
     myStepper.setSpeed(ShortBreath);
    Serial.println("Short Breaths clockwise motor");
    myStepper.step(stepsRev);
    delay(500);

    // step one revolution in the opposing direction under given speed
    Serial.println("Short Breaths counterclockwise motor");
    myStepper.step(-stepsRev);
    delay(500);
}

void LongBreathSpeed() {
   myStepper.setSpeed(LongBreath);
    Serial.println("Long Breaths clockwise motor");
    myStepper.step(stepsRev);
    delay(500);

    // step one revolution in the opposing direction under given speed
    Serial.println("Long Breaths counterclockwise motor");
    myStepper.step(-stepsRev);
    delay(500);
}

void VeryLongBreathSpeed() {
   myStepper.setSpeed(VeryLongBreath);
    Serial.println("Very Long Breath clockwise motor");
    myStepper.step(stepsRev);
    delay(500);

    // step one revolution in the opposing direction under given speed
    Serial.println("Very Long Breath counterclockwise motor");
    myStepper.step(-stepsRev);
    delay(500);
}


