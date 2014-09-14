 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: Control
   Instructor: Dr. Rhonda G. Chicone
   Date: 14 September 2014
   Description: This pulls everything together to create how the program
				works within a specific area. Uses UserInterface to create
				menus and this controls what those menus do. Can create
				Employee, Client, or Division objects from here.
   Input:
   Output: 
   Compilation instructions:
   Usage:
   Known bugs/missing features:
   
   This work is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 
   International Public License. To view a copy of this license, visit 
   https://creativecommons.org/licenses/by-nc-sa/4.0/ or send a letter to Creative 
   Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
   
   Modifications:
   Date                Comment            
   ----    ------------------------------------------------
 ************************************************************************/
#include <iostream>
#include <string>
#include "Control.h"
#include "UserInterface.h"
#include "Client.h"
#include "SpecializedEmployee.h"
#include "Division.h"

using namespace std;

 /************************************************************************
   Function: Control()
   Author: Randall D. Rowland Jr.
   Description: Auto-generated constructor.
 ************************************************************************/
Control::Control(Division *divisionOne, Division *divisionTwo, Division *divisionThree)
{
	divisionOne_ = divisionOne;
	divisionTwo_ = divisionTwo;
	divisionThree_ = divisionThree;
}

 /************************************************************************
   Function: mainMenuControl()
   Author: Randall D. Rowland Jr.
   Description: This is the main control. From you it will take you to
				other menu controls or you can exit the program. All other
				control will eventually return here.
 ************************************************************************/
void Control::mainMenuControl()
{	
	int choice;

	clearScreen();	//Used because other methods will return you here.
	mainMenu();		//Displays menu selection.
	cin >> choice;
	switch(choice)
	{
	case 1:
		addNewEmployeeControl();
		break;
	case 2:
		searchViewAllEmployeesControl();
		break;
	case 3:
		addNewClientControl();
		break;
	case 4:
		searchViewAllClientControl();
		break;
	case 9:
		exit(0);
	default:
		cout << "Invalid Selection!" << endl;
		pause();
		mainMenuControl();
	}
}

 /************************************************************************
   Function: addNewEmployeeControl()
   Author: Randall D. Rowland Jr.
   Description: Lets you create a new Employee object and ensures data is
				in the correct format. After new employee is created it 
				pushs it into a division vector based upon selection. Then 
				returns you to the main menu.    
 ************************************************************************/
void Control::addNewEmployeeControl()
{	
	//Setup local vairables and initialize them to keep a consistant state.
	string firstName = "John";
	string lastName = "Doe";
	unsigned long long int ID = 123456789;
	unsigned long long int phoneNumber = 5555555555;
	int secureLevel = 0;
	bool isCorrect = false;
	int choice;

	//Clear screen and being to request information to create object.
	clearScreen();
	cout << "Add new employee's first name: ";
	cin >> firstName;
	cout << "Add new employee's last name: ";
	cin >> lastName;
	
	//Loop until the employee ID is correct.
	while(!isCorrect)
	{
		cout << "Enter an employee ID number [100000000 - 999999999]: ";
		cin >> ID;
		if(100000000 <= ID && ID <= 999999999)
			isCorrect = true;
		else
		{	
			clearScreen();
			cout << "Invalid employee ID! Try again." << endl;
		}
	}

	//Reset control flag
	isCorrect = false;

	//Create employee object.
	SpecializedEmployee employee(firstName, lastName);
	employee.setIdNum(ID);

	//Determine if employee has a specialty
	clearScreen();
	while(!isCorrect)
	{
		employeeSpecialty();
		cin >> choice;
		switch(choice)
		{
		case 1:		//Regular Employee
			employee.setIsSecureEmployee(false);
			employee.setIsSupportEmployee(false);
			employee.setIsDivisionSupervisor(false);
			isCorrect = true;
			break;
		case 2:		//Secure Employee
			employee.setIsSecureEmployee(true);
			employee.setIsSupportEmployee(false);
			employee.setIsDivisionSupervisor(false);
			isCorrect = true;
			break;
		case 3:		//Support Employee
			employee.setIsSecureEmployee(false);
			employee.setIsSupportEmployee(true);
			employee.setIsDivisionSupervisor(false);
			isCorrect = true;
			break;
		case 9:		//Division Supervisor
			employee.setIsSecureEmployee(false);
			employee.setIsSupportEmployee(false);
			employee.setIsDivisionSupervisor(true);
			isCorrect = true;
			break;
		default:
			clearScreen();
			cout << "Invalid selection! Try again." << endl;
		}
	}

	//Reset control flag
	isCorrect = false;

	//Collect additional information based on specialty.
	if(employee.getIsSecureEmployee())
	{
		clearScreen();
		while(!isCorrect)
		{
			cout << "Employee has a security level! Please enter their level [1 - 9]: ";
			cin >> secureLevel;
			if(0 < secureLevel && secureLevel < 10)
			{
				employee.setSecurityLevel(secureLevel);
				isCorrect = true;
			}
			else
			{
				clearScreen();
				cout << "Invalid security level. Please try again." << endl;
			}
		}
	}
	if(employee.getIsSupportEmployee())
	{
		clearScreen();
		while(!isCorrect)
		{
			cout << "Employee is support! Please enter their 10-digit phone number without dashes or spaces [8885551234]: ";
			cin >> phoneNumber;
			if(999999999 < phoneNumber && phoneNumber < 10000000000)
			{
				employee.setPhoneNumber(phoneNumber);
				isCorrect = true;
			}
			else
			{
				clearScreen();
				cout << "Invalid phone number. Please try again." << endl;
			}
		}
	}

	//Reset control flag
	isCorrect = false;

	//Push employee into a divison vector
	clearScreen();
	while(!isCorrect)
	{
		divisionSelection(divisionOne_->getDivisionName(), divisionTwo_->getDivisionName(), divisionThree_->getDivisionName());
		cin >> choice;
		switch(choice)
		{
		case 1:
			divisionOne_->addEmployeeToDivision(employee);
			if(employee.getIsDivisionSupervisor())
			{
				divisionOne_->setDivisionSupervisor();
				divisionOne_->setIsThereCurrentSupervisor(true);
			}
			isCorrect = true;
			break;
		case 2:
			divisionTwo_->addEmployeeToDivision(employee);
			if(employee.getIsDivisionSupervisor())
			{
				divisionTwo_->setDivisionSupervisor();
				divisionTwo_->setIsThereCurrentSupervisor(true);
			}
			isCorrect = true;
			break;
		case 3:
			divisionThree_->addEmployeeToDivision(employee);
			if(employee.getIsDivisionSupervisor())
			{
				divisionThree_->setDivisionSupervisor();
				divisionThree_->setIsThereCurrentSupervisor(true);
			}
			isCorrect = true;
			break;
		default:
			clearScreen();
			cout << "Invalid selection. Please try again." << endl;
			break;
		}
	}

	//Employee should be created and added to a division vector by this point
	cout << "Employee successfully added to system. Returning to main menu." << endl;
	pause();
	mainMenuControl();
}

 /************************************************************************
   Function: searchViewAllEmployeesControl()
   Author: Randall D. Rowland Jr.
   Description: Displays menu and control which employee menu to take you 
				to next depending on selection.    
 ************************************************************************/
void Control::searchViewAllEmployeesControl()
{
	bool isCorrect = false;
	int choice = 0;

	clearScreen();
	while(!isCorrect)
	{
		searchEmployeeMenu();
		cin >> choice;
		switch(choice)
		{
		case 1:
			searchEmployeeControl();
			isCorrect = true;
			break;
		case 2:
			viewAllEmployeesControl();
			isCorrect = true;
			break;
		case 9:
			mainMenuControl();
			isCorrect = true;
			break;
		default:
			clearScreen();
			cout << "Invalid selection. Try again. " << endl;
			break;
		}
	}
}

 /************************************************************************
   Function: searchEmployeeControl()
   Author: Randall D. Rowland Jr.
   Description: Brings up the menu to search for an employee and print that
				employee's information to the scren in an easy to read 
				format. After execution returns you to main menu to make 
				another selection.    
 ************************************************************************/
void Control::searchEmployeeControl()
{
	clearScreen();

	pause();
	mainMenuControl();
}

 /************************************************************************
   Function: viewAllEmployeesControl()
   Author: Randall D. Rowland Jr.
   Description: Clears the screen and creates a user interface that easily
				displays all employees. After complete it returns you to 
				the main menu to make more selections.    
 ************************************************************************/
void Control::viewAllEmployeesControl()
{
	bool isCorrect = false;
	int choice = 0;

	clearScreen();
	while(!isCorrect)
	{
		viewEmployeesFromDivision(divisionOne_->getDivisionName(), divisionTwo_->getDivisionName(), divisionThree_->getDivisionName());
		cin >> choice;
		switch(choice)
		{
		case 1:
			clearScreen();
			viewAllEmployees();
			divisionOne_->printAllEmployeesWithinDivision();
			isCorrect = true;
			break;
		case 2:
			clearScreen();
			viewAllEmployees();
			divisionTwo_->printAllEmployeesWithinDivision();
			isCorrect = true;
			break;
		case 3:
			clearScreen();
			viewAllEmployees();
			divisionThree_->printAllEmployeesWithinDivision();
			isCorrect = true;
			break;
		case 4:
			clearScreen();
			viewAllEmployees();
			divisionOne_->printAllEmployeesWithinDivision();
			divisionTwo_->printAllEmployeesWithinDivision();
			divisionThree_->printAllEmployeesWithinDivision();
			isCorrect = true;
			break;
		default:
			clearScreen();
			cout << "Invalid selection. Please try again." << endl;
			break;
		}
	}
	pause();
	mainMenuControl();
}

 /************************************************************************
   Function: addNewClientControl()
   Author: Randall D. Rowland Jr.
   Description: Lets you create a new Client object and ensures data is
				in the correct format. After new client is created it pushs
				it into the vector. Then returns you to the main menu.
 ************************************************************************/
void Control::addNewClientControl()
{
	clearScreen();

	pause();
	mainMenuControl();
}

 /************************************************************************
   Function: searchViewAllClientControl()
   Author: Randall D. Rowland Jr.
   Description: Displays menu and control which client menu to take you to
				next depending on selection.
 ************************************************************************/
void Control::searchViewAllClientControl()
{
	clearScreen();

	//GOTO searchClientControl || viewAllClientControl
}

 /************************************************************************
   Function: searchClientControl()
   Author: Randall D. Rowland Jr.
   Description: Brings up the menu to search for a client and print that
				client's information to the scren in an easy to read format.
				After execution returns you to main menu to make another
				selection.
 ************************************************************************/
void Control::searchClientControl()
{
	clearScreen();

	pause();
	mainMenuControl();
}

 /************************************************************************
   Function: viewAllClientControl()
   Author: Randall D. Rowland Jr.
   Description: Clears the screen and creates a user interface that easily
				displays all clients. After complete it returns you to the
				main menu to make more selections.
 ************************************************************************/
void Control::viewAllClientControl()
{
	clearScreen();

	pause();
	mainMenuControl();
}

 /************************************************************************
   Function: pause()
   Author: Randall D. Rowland Jr.
   Description: Used to clean the input buffer and ignore any input. Then
				pauses the system and waits for any key press before you
				can continue execution.
 ************************************************************************/
void Control::pause()
{
	cin.sync();
	cin.ignore();
	system("PAUSE");	//Using system is bad but right now we're in a hurry.
}

 /************************************************************************
   Function: ~Control()
   Author: Randall D. Rowland Jr.
   Description: Auto-generated destructor.
 ************************************************************************/
Control::~Control(void)
{
}