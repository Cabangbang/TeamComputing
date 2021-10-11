#pragma config(StandardModel, "EV3_REMBOT")


task main()
{

	// Go straight
	setMotorSyncTime(leftMotor, rightMotor, 0, 5000, 50);

	// Turn 180 degrees
	setMotorSyncTime(leftMotor, rightMotor, 100, 1500, 50);

	// Go straight
	setMotorSyncTime(leftMotor, rightMotor, 0, 5000, 50);


}
