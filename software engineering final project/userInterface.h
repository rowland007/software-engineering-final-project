#include <iostream>
#include <string>

using namespace std;

void clearScreen()
{
	cout << string( 100, '\n' );
}

void mainMenu()
{
	cout << "*** Welcome to XXXXXXXXXXX XXXXXXXXXXXXX XXXXXXX Employee/Client System ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "What would you like to do?" << endl;
	cout << endl;
	cout << "1 - Add New Employee" << endl;
	cout << endl;
	cout << "2 - Search or View All Employees" << endl;
	cout << endl;
	cout << "3 - Add New Client" << endl;
	cout << endl;
	cout << "4 - Search or View All Clients" << endl;
	cout << endl;
	cout << "9 - Quit" << endl;
	cout << endl;
	cout << "Please enter your selection: ";
}

void searchEmployeeMenu()
{
	cout << "***                      Employee Search                                ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "What would you like to do?" << endl;
	cout << endl;
	cout << "1 - Search Employee by ID" << endl;
	cout << endl;
	cout << "2 - View All Employees" << endl;
	cout << endl;
	cout << "9 - Return to Main Menu" << endl;
	cout << endl;
	cout << "Please enter your selection: ";
}

void searchEmployeeByID()
{
	cout << "***                      Employee Search                                ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "Enter Employee's ID or Press 9 to Return to Main Menu" << endl;
	cout << endl;
	cout << "Please Enter Your Search or 9: ";
}

void viewAllEmployees()
{
	cout << "***                     View All Employees                              ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "Enter Employee's ID or Press 9 to Return to Main Menu" << endl;
	cout << endl;
	cout << "Please Enter Your Search or 9: ";
}

void searchClientMenu()
{
	cout << "***                        Client Search                                ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "What would you like to do?" << endl;
	cout << endl;
	cout << "1 - Search Client by ID" << endl;
	cout << endl;
	cout << "2 - View All Clients" << endl;
	cout << endl;
	cout << "9 - Return to Main Menu" << endl;
	cout << endl;
	cout << "Please enter your selection: ";
}

void searchClientByID()
{
	cout << "***                        Client Search                                ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "Enter Client's ID or Press 9 to Return to Main Menu" << endl;
	cout << endl;
	cout << "Please Enter Your Search or 9: ";
}

void viewAllClients()
{
	cout << "***                       View All Clients                              ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "Enter Client's ID or Press 9 to Return to Main Menu" << endl;
	cout << endl;
	cout << "Please Enter Your Search or 9: ";
}
