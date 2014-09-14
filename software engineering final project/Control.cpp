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
#pragma once
#include <iostream>
#include <string>
#include "Control.h"
#include "UserInterface.h"
#include "Client.h"
#include "SpecializedEmployee.h"
#include "Division.h"

using namespace std;

 /************************************************************************
   Function: mainMenuControl()
   Author: Randall D. Rowland Jr.
   Description: This is the main control. From you it will take you to
				other menu controls or you can exit the program. All other
				control will eventually return here.
 ************************************************************************/
void mainMenuControl()
{	
	int choice;

	clearScreen();	//Used because other methods will return you here.
	mainMenu();		//Displays menu selection.
	cin >> choice;
	switch(choice)
	{
	case 1:
		Control::addNewEmployeeControl();
		break;
	case 2:
		Control::searchViewAllEmployeesControl();
		break;
	case 3:
		addNewClientControl();
		break;
	case 4:
		searchViewAllClientsControl();
		break;
	case 9:
		exit 0;
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
void addNewEmployeeControl()
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

	//Push employee into a divison vector

	pause();
	mainMenuControl();
}

 /************************************************************************
   Function: searchViewAllEmployeesControl()
   Author: Randall D. Rowland Jr.
   Description: Displays menu and control which employee menu to take you 
				to next depending on selection.    
 ************************************************************************/
void searchViewAllEmployeesControl()
{
	clearScreen();

	//GOTO searchEmployeeControl() || viewAllEmployeesControl()
}

 /************************************************************************
   Function: searchEmployeeControl()
   Author: Randall D. Rowland Jr.
   Description: Brings up the menu to search for an employee and print that
				employee's information to the scren in an easy to read 
				format. After execution returns you to main menu to make 
				another selection.    
 ************************************************************************/
void searchEmployeeControl()
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
void viewAllEmployeesControl()
{
	clearScreen();

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
void addNewClientControl()
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
void searchViewAllClientControl()
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
void searchClientControl()
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
void viewAllClientControl()
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
void pause()
{
	cin.sync();
	cin.ignore();
	system("PAUSE");	//Using system is bad but right now we're in a hurry.
}