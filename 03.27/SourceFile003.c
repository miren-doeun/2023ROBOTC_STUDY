#pragma config(Motor,  motorB,          L,             tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          R,             tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main(){
	moveMotorTarget(motorB, 2253,50);
	moveMotorTarget(motorC, 2253,50);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
}
