#pragma once

#include "./UNOpinout.h"

#define SERVO_LEFT D10_PWM
#define SERVO_RIGHT D11_PWM

#define HALF_SPIN_TIME 2000

void walk_stop();
void walk_forward();
void walk_backwards();
void spin_anti_clockwise();
void spin_clockwise();
void turn_left();
void turn_right();
void movement_setup();