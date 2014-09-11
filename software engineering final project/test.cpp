#include <iostream>
#include "employee.h"
#include "person.h"
#include "userInterface.h"

using namespace std;

void pause() __attribute__((destructor));
//Function Declaration, You Cannot Declare Attributes Without This

int main()
{
	void mainMenu ();


	pause();

	return 0;
}

void pause()
{
   std::cin.sync(); // Flush The Input Buffer Just In Case
   std::cin.ignore(); // There's No Need To Actually Store The Users Input
}