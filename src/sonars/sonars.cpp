#include "sonars.h"

#include <Arduino.h>

int echos[3] = {LEFT_ECHO, CENTER_ECHO, RIGHT_ECHO};
int trigs[3] = {LEFT_TRIG, CENTER_TRIG, RIGHT_TRIG};

unsigned long distance_cm_update(int sonar) {
  digitalWrite(trigs[sonar], LOW);
  delayMicroseconds(2);
  digitalWrite(trigs[sonar], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigs[sonar], LOW);
  return microsecondsToCentimeters( pulseIn(echos[sonar], HIGH) );
}

void sonars_setup(){
  FOR_SONARS(i) pinMode(trigs[i], OUTPUT);
  FOR_SONARS(i) pinMode(echos[i], INPUT);
}