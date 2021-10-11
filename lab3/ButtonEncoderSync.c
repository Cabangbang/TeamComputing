#pragma config(StandardModel, "EV3_REMBOT")

void drive(long nMotorRatio, long dist, long power){

	long centimetres = 20.4627783975294 * dist;

	setMotorSyncEncoder(leftMotor, rightMotor, nMotorRatio, centimetres, power);
}


task main(){
	while(1)
	{
			if(getButtonPress(buttonEnter) == 0)
		{

			//when UP is pressed travel 10cm
			if(getButtonPress(buttonUp))
			{
				drive(0,10,random(50));
			}

			//when RIGHT is pressed travel 40cm
			else if(getButtonPress(buttonRight))
			{
				drive(0,40,random(50));
			}

			//when DOWN is pressed travel 60cm
			else if(getButtonPress(buttonDown))
			{
				drive(0,60,random(50));
			}

			//when LEFT is pressed travel 80cm
			else if(getButtonPress(buttonLeft))
			{
				drive(0,80,random(50));
			}
		}
	}
}
