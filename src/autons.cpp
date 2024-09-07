#pragma once

#include "autons.h"
#include "main.h"
#include "api.h"
#include "lemlib/api.hpp" // IWYU pragma: keep
#include "lemlib/chassis/trackingWheel.hpp"


//intake 
void intakes(){
    intake.move(127);
    intake.move(-127);
}



void left_side_3ring(){
    //going to clamp mogo
    chassis.moveToPoint(29.454,24.037,400);
    mogo_clamp.set_value(true);

    //intaking preload
    chassis.moveToPoint(21.201,23.12,400);
    intake.move(127);
    chassis.waitUntilDone();

    //going for & intaking 1st floor ring
    chassis.turnToHeading(0, 2000);
    chassis.moveToPoint(23.952, 44.211, 400);
    intake.move(127);
    chassis.waitUntilDone();
    
}

void goal_rush_red(){
    chassis.setPose(0,0,0);
    mogo_clamp.set_value(false);
   
    chassis.moveToPose(0,-30,0,2500,{.forwards=false,});
    pros::delay(1200);
    mogo_clamp.set_value(true);
    pros::delay(500);
    intake.move(-127);
    pros::delay(1000);
    

    
}
void goal_rush_blue(){
    
}




