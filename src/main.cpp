#include "UNOpinout.h"

#include <Arduino.h>
#include "Servo.h"

#include "sonars/sonars.h"
#include "movement/movement.h"

enum sonars {left, center, right};

void setup() {

  sonars_setup();
  movement_setup();

  Serial.begin(9600);

  walk_stop();
  Serial.println("stop");
  delay(3000);
}
void loop() {
  if(distance_cm_update(center) < 10) walk_backwards();
  else if (distance_cm_update(right) < 10) turn_left();
  else if (distance_cm_update(left) < 10) turn_left();
  else walk_forward();
}