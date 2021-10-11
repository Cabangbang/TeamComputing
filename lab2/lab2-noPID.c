#pragma config(StandardModel, "EV3_REMBOT")


// Set motor speeds to 0
void resetMotors(){

	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

}

// Turn 90 degrees to the left
void turn90degreesLeft(){

	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 50);
	sleep(750);
	resetMotors();

}

// Turn 90 degrees to the right
void turn90degreesRight(){

	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 0);
	sleep(750);
	resetMotors();


}

// Go forward for 1 second
void goForward1second(){

	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(1000);
	resetMotors();

}

// Swing 90 degrees right
void swingRight90degrees(){

	setMotorSpeed(leftMotor, 25);
	setMotorSpeed(rightMotor, -25);
	sleep(800);
	resetMotors();

}

// Swing 90 degrees left
void swingLeft90degrees(){

	setMotorSpeed(leftMotor, -25);
	setMotorSpeed(rightMotor, 25);
	sleep(800);
	resetMotors();

}


// Reverse for 1 second
void reverse1second(){

	setMotorSpeed(leftMotor, -50);
	setMotorSpeed(rightMotor, -50);
	sleep(1000);
	resetMotors();

}

task main(){

	turn90degreesLeft();
	sleep(1000);

	turn90degreesRight();
	sleep(1000);

	goForward1second();
	sleep(1000);

	swingRight90degrees();
	sleep(1000);

	swingLeft90degrees();
	sleep(1000);

	reverse1second();
	sleep(1000);

}
