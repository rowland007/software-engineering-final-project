#include <iostream>
#include "userInterface.h"
#include "person.h"

using namespace std;

void pause();
//Function Declaration, You Cannot Declare Attributes Without This

int main()
{
	mainMenu();

	pause();
	clearScreen();

	searchEmployeeMenu();
	
	pause();
	clearScreen();

	searchEmployeeByID();

	pause();
	clearScreen();

	viewAllEmployees();

	pause();
	clearScreen();

	searchClientMenu();

	pause();
	clearScreen();

	searchClientByID();

	pause();
	clearScreen();

	viewAllClients();

	pause();
	clearScreen();
	pause();

	return 0;
}

void pause()
{
	cin.sync(); // Flush The Input Buffer Just In Case
	cin.ignore(); // There's No Need To Actually Store The Users Input
	system("PAUSE");
}