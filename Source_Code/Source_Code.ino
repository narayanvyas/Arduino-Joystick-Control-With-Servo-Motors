/*  Joystick Control With Servo Motors
 * 
 *  GitHub URL - https://github.com/narayanvyas/Arduino-Joystick-Control-With-Servo-Motors
 * 
 *  Developed By Web Dev Fusion
 *  URL - https://www.webdevfusion.com
 *  
 * Components
 * ----------
 *  - Arduino Uno
 *  - joystick Module
 *  - 2 x Servo Motors
 *  
 *  Libraries
 *  ---------
 *  - Servo Library
 *  
 */

#include <Servo.h>  
Servo servo1;
Servo servo2;

int joyX;
int joyY;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  servo1.attach(3);
  servo2.attach(5);
}

void loop() {
  joyX = analogRead(A0);
  joyY = analogRead(A1);
  joyX = map(joyX, 0, 1023, 0, 180);
  joyY = map(joyY, 0, 1023, 0, 180);
  servo1.write(joyX);
  servo2.write(joyY);
  delay(10);
}
