#pragma config(StandardModel, "EV3_REMBOT")

void turn(){

	setMotorSync(leftMotor, rightMotor, 100, 30);
	sleep(575);

}

void forward(){

	setMotorSync(leftMotor, rightMotor, 0, 30);
	sleep(3000);

}

task main()
{


	forward();
	turn();

	forward();
	turn();

	forward();
	turn();

	forward();
	turn();

}
