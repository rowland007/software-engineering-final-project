#include <iostream>
#include <string>
#include "SpecializedEmployee.h"
#include "Division.h"
#include "UserInterface.h"

using namespace std;

void pause();

int main()
{	
	char answer;
	int c_id;
	string c_firstName;
	string c_lastName;
	const long long int PHONE_NUMBER = 6053903658;
	const int SECURITY_LEVEL = 5;
	string FIRST_DIVISION = "Robotics";
	string SECOND_DIVISION = "Fiber Optics";
	string THIRD_DIVISION = "Fluid Delivery Systems";
	Division robotics(FIRST_DIVISION);
	Division fiberOptics(SECOND_DIVISION);
	Division fluidDeliverySystems(THIRD_DIVISION);

	cout << "There are 3 Divisions: " << robotics.getDivisionName() << ", " << fiberOptics.getDivisionName() << ", & " << fluidDeliverySystems.getDivisionName() << endl;
	
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
		
		robotics.addEmployeeToDivision(employee);

		cout << "Is this employee a Division Supervisor? (Y or N)" << endl;
		cin >> answer;
		if(answer == 'Y')
		{
			employee.setIsDivisionSupervisor(true);
			robotics.setDivisionSupervisor();
			robotics.setIsThereCurrentSupervisor(true);
		}
		else
		{
			employee.setIsDivisionSupervisor(false);
			robotics.setIsThereCurrentSupervisor(false);
		}

	robotics.setRevenue(34890.50);

	if(robotics.getIsThereCurrentSupervisor())
	{
		cout << robotics.getDivisionName() << " Division Supervisor: " << robotics.getDivisionSupervisor()->getFirstName() << " " << robotics.getDivisionSupervisor()->getLastName() << endl << endl;
	}
	viewAllEmployees();
	robotics.printAllEmployeesWithinDivision();
	cout << endl << "REVENUE: $" << robotics.getRevenue();



	pause();
	return 0;
}

void pause()
{
	cin.sync(); // Flush The Input Buffer Just In Case
	cin.ignore(); // There's No Need To Actually Store The Users Input
	system("PAUSE");
}