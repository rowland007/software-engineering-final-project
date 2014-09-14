#include <iostream>
#include <string>
#include "Control.h"

using namespace std;

int main()
{	
	//Divison names that won't change passed to divison objects.
	const string FIRST_DIVISION = "Robotics";
	const string SECOND_DIVISION = "Fiber Optics";
	const string THIRD_DIVISION = "Fluid Delivery Systems";

	Division robotics(FIRST_DIVISION);
	Division fiberOptics(SECOND_DIVISION);
	Division fluidDeliverySystems(THIRD_DIVISION);

	mainMenuControl();
	
	return 0;
}