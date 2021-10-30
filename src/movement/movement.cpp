#include "movement.h"

#include "Servo.h"
#include <Arduino.h>

Servo Left_Wheel;
Servo Right_Wheel;

void walk_stop() { //working
  Left_Wheel.write(75);
  Right_Wheel.write(88);
}

void walk_forward() { //working 
  Left_Wheel.write(80);
  Right_Wheel.write(0);

//está a virar para esquerda com 90; 0
}

void walk_backwards() { //working
  Left_Wheel.write(0);
  Right_Wheel.write(180);
}

void spin_anti_clockwise() { //working
  Left_Wheel.write(0);
  Right_Wheel.write(0);
}

void spin_clockwise() { //working
  Left_Wheel.write(90);
  Right_Wheel.write(180);
}

void turn_left() {
  spin_anti_clockwise();
  delay(HALF_SPIN_TIME);
  walk_forward();
}

void turn_right() {
  spin_clockwise();
  delay(HALF_SPIN_TIME);
  walk_forward();
}

void movement_setup() {
  Left_Wheel.attach(SERVO_LEFT);
  Right_Wheel.attach(SERVO_RIGHT);
}