#pragma platform(VEX)


#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"

void pre_auton()
{

  bStopTasksBetweenModes = true;


}


task autonomous()
{

	AutonomousCodePlaceholderForTesting();



task usercontrol()
{


	while (true)
	{

	  UserControlCodePlaceholderForTesting(); // Remove this function call once you have "real" code.
	}
}
