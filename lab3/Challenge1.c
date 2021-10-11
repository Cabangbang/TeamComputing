#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//





// Set motor speeds to 0
void resetMotors(){

	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

}

// Reverse for 1 second
void reverse1second(){

	setMotorSpeed(leftMotor, -25);
	setMotorSpeed(rightMotor, -25);
	sleep(1000);
	resetMotors();

}

void drive(long nMotorRatio, long dist, long power){

	long centimetres = 20.4627783975294 * dist;

	setMotorSyncEncoder(leftMotor, rightMotor, nMotorRatio, centimetres, power);

}
// Turn 90 degrees to the left
void turn90degreesLeft(){

	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 50);
	sleep(800);
	resetMotors();
}

task main(){

	// Drive forward to wall
	while(1){

		drive(0, 150, 50);

		if(getTouchValue(touchSensor) == 1){

			resetMotors();
			break;

		}

	}

	// Reverse back and turn left
	reverse1second();
	//waitUntilMotorStop(leftMotor);
	turn90degreesLeft();

	// Go forward until ultrasonic sensor reads more than 4
	while(1){

		drive(0, 150, 50);

		if(getUSDistance(sonarSensor) > 4){

			resetMotors();
			break;

		}

	}

	// Reverse back and turn left
	reverse1second();
	//waitUntilMotorStop(leftMotor);
	turn90degreesLeft();

	// Drive forward to wall
	while(1){

		drive(0, 150, 50);

		if(getTouchValue(touchSensor) == 1){

			resetMotors();
			break;

		}

	}

	// Reverse back and turn left
	reverse1second();
	//waitUntilMotorStop(leftMotor);
	turn90degreesLeft();

	// Drive 30cm and stop
	drive(0, 30, 50);
	waitUntilMotorStop(leftMotor);
	resetMotors();


}
