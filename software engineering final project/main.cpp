#include <iostream>
#include <string>
#include "SpecializedEmployee.h"

using namespace std;

void pause();

int main()
{	
	int c_id;
	string c_firstName;
	string c_lastName;
	const long long int PHONE_NUMBER = 6053903658;
	const int SECURITY_LEVEL = 5;

	cout << "Create Employee! Enter ID Num: ";
	cin >> c_id;
	cout << "Enter First Name: ";
	cin >> c_firstName;
	cout << "Enter Last Name: ";
	cin >> c_lastName;

	SpecializedEmployee employee(c_firstName, c_lastName);
	employee.setIdNum(c_id);

	cout << "Is this correct?" << endl;
	employee.printFullName();

	employee.setIsDivisionSupervisor(true);
	employee.setIsSecureEmployee(true);
	employee.setIsSupportEmployee(true);

	employee.setPhoneNumber(PHONE_NUMBER);
	employee.setSecurityLevel(SECURITY_LEVEL);

	if(employee.getIsDivisionSupervisor())
	{
		cout << "Is a Division Supervisor!" << endl;
	}
	if(employee.getIsSecureEmployee())
	{
		cout << "Is a Secure Employee!" << endl;
		cout << "Security Level: " << employee.getSecurtiyLevel() << endl;
	}
	if(employee.getIsSupportEmployee())
	{
		cout << "Is a Support Employee!" << endl;
		cout << "Phone Number: " << employee.getPhoneNumber() << endl;
	}

	pause();
	return 0;
}

void pause()
{
	cin.sync(); // Flush The Input Buffer Just In Case
	cin.ignore(); // There's No Need To Actually Store The Users Input
	system("PAUSE");
}