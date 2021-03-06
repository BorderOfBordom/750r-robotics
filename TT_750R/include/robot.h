#include "vex.h"
#include <vector>
#ifndef ROBOT_H
#define ROBOT_H

class Robot {
	private:
    vex::brain cortex;
		std::vector<vex::motor> driveMotors;

	public:
		Robot(vex::brain cortex);
		
		void drive(int value);
    void turnRight();
    void turnLeft();
    void strafe(int mode);
    void lift();
    void driveFor(double distance, double velocity);
    void turnFor(double angle);
    void moveMagazine(int mode);
    void intake(int mode);
    void intakeFor(int distance, int mode);
    void magazineFor(int mode);
    void intakeAndMove(double distance, double velocity,int mode);
};
#endif
