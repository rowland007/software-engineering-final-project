#include <iostream>
#include <string>
#include "Control.h"
#include "Division.h"
#include "ClientVector.h"

using namespace std;

int main()
{	
	//Divison names that won't change passed to divison objects.
	const string FIRST_DIVISION = "Robotics";
	const string SECOND_DIVISION = "Fiber Optics";
	const string THIRD_DIVISION = "Fluid Delivery Systems";
	const string VECTOR = "Client Vector";

	Division robotics(FIRST_DIVISION);
	Division fiberOptics(SECOND_DIVISION);
	Division fluidDeliverySystems(THIRD_DIVISION);

	ClientVector clients(VECTOR);

	Control program(&robotics, &fiberOptics, &fluidDeliverySystems, &clients);

	program.mainMenuControl();
	
	return 0;
}