#pragma once

#include "./UNOpinout.h"

#define LEFT_ECHO D2
#define LEFT_TRIG D3_PWM                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   

#define CENTER_ECHO D4
#define CENTER_TRIG D5_PWM

#define RIGHT_ECHO D6_PWM
#define RIGHT_TRIG D7

#define FOR_SONARS(__sonar_index__) for(int __sonar_index__ = 0; __sonar_index__ < 3; __sonar_index__++)
 
#define microsecondsToCentimeters(microseconds) microseconds / 29 / 2

unsigned long distance_cm_update(int sonar);
void print_distances();
void sonars_setup();

//echo está a cinzento e trig está a branco