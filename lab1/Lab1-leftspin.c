#pragma config(StandardModel, "EV3_REMBOT")


task main(){

	setMotorSync(rightMotor, leftMotor, 0, 30);
	sleep(2000);

	setMotorSpeed(leftMotor, -50);
	setMotorSpeed(rightMotor, 50);
	sleep(1400);

}
