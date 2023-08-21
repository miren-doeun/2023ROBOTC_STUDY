#pragma config(Sensor, S1,     T,              sensorEV3_Touch)
#pragma config(Sensor, S3,     C,              sensorEV3_Color, modeEV3Color_Color)
#pragma config(Motor,  motorA,          M,             tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorD,          L,             tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1){
		setSensorMode(C,2);
		switch(SensorValue[S3])
		{
			case 2: playSoundFile("Blue");
							displayCenteredBigTextLine(7,"Blue");
							wait1Msec(500);
							break;
			case 3: playSoundFile("Green");
							displayCenteredBigTextLine(7,"Green");
							wait1Msec(500);
							break;
			case 4: playSoundFile("Yellow");
							displayCenteredBigTextLine(7,"Yellow");
							wait1Msec(500);
							break;
			case 5: playSoundFile("Red");
							displayCenteredBigTextLine(7,"Red");
							wait1Msec(500);
							break;
			default : displayCenteredBigTextLine(7," ");
		}
	}



}