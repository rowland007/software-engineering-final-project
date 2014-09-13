#include <iostream>
#include <string>
#include "UserInterface.h"
#include "Employee.h"

using namespace std;

void pause();

int main()
{	
	unsigned int e_id;
	string e_firstName;
	string e_lastName;

	cout << "Create Employee! Enter ID Num: ";
	cin >> e_id;
	cout << "Enter First Name: ";
	cin >> e_firstName;
	cout << "Enter Last Name: ";
	cin >> e_lastName;

	Employee employee(e_firstName, e_lastName);
	employee.setIdNum(e_id);

	cout << "Is this correct?" << endl;
	employee.printFullName();

	pause();
	return 0;
}

void pause()
{
	cin.sync(); // Flush The Input Buffer Just In Case
	cin.ignore(); // There's No Need To Actually Store The Users Input
	system("PAUSE");
}