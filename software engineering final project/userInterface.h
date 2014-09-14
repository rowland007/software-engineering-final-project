 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: 
   Instructor: Dr. Rhonda G. Chicone
   Date: 9 September 2014
   Description: These are all void functions. All userInterface does is create
				the menus needed to request commands from the user. There is 
				also a function used to clear the previous menu from the screen
				and display a newly called userInterface function's menu.
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
10SEP2014	Corrected mainMenu() to display the correct company name.
14SEP2014	Added divisionSelection and employeeSpecialty methods.
 ************************************************************************/
#pragma once
#include <iostream>
#include <string>

using namespace std;

void clearScreen()
{
	cout << string( 100, '\n' );
}

void mainMenu()
{
	cout << "***      Welcome to Global Tech Industries Employee/Client System       ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  What would you like to do?" << endl;
	cout << endl;
	cout << "  1 - Add New Employee" << endl;
	cout << endl;
	cout << "  2 - Search or View All Employees" << endl;
	cout << endl;
	cout << "  3 - Add New Client" << endl;
	cout << endl;
	cout << "  4 - Search or View All Clients" << endl;
	cout << endl;
	cout << "  9 - Quit" << endl;
	cout << endl;
	cout << "  Please enter your selection: ";
}

void searchEmployeeMenu()
{
	cout << "***                      Employee Search                                ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  What would you like to do?" << endl;
	cout << endl;
	cout << "  1 - Search Employee by ID" << endl;
	cout << endl;
	cout << "  2 - View All Employees" << endl;
	cout << endl;
	cout << "  9 - Return to Main Menu" << endl;
	cout << endl;
	cout << "  Please enter your selection: ";
}

void searchEmployeeByID()
{
	cout << "***                      Employee Search                                ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  Enter Employee's ID or Press 9 to Return to Main Menu" << endl;
	cout << endl;
	cout << "  Please Enter Your Search or 9: ";
}

void viewAllEmployees()
{
	cout << "***                     View All Employees                              ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  ID Number     Last Name, First Name" << endl;
	cout << " --------------------------------------------------------------------------" << endl;
}

void searchClientMenu()
{
	cout << "***                        Client Search                                ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  What would you like to do?" << endl;
	cout << endl;
	cout << "  1 - Search Client by ID" << endl;
	cout << endl;
	cout << "  2 - View All Clients" << endl;
	cout << endl;
	cout << "  9 - Return to Main Menu" << endl;
	cout << endl;
	cout << "  Please enter your selection: ";
}

void searchClientByID()
{
	cout << "***                        Client Search                                ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  Enter Client's ID or Press 9 to Return to Main Menu" << endl;
	cout << endl;
	cout << "  Please Enter Your Search or 9: ";
}

void viewAllClients()
{
	cout << "***                       View All Clients                              ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  ID Number     Last Name, First Name" << endl;
	cout << " --------------------------------------------------------------------------" << endl;
}

void divisionSelection(string divisionOne, string divisionTwo, string divisionThree)
{
	cout << "***                   Add Employee to Division                          ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  Which division will this employee work at?" << endl;
	cout << endl;
	cout << "  1 - " << divisionOne << endl;
	cout << endl;
	cout << "  2 - " << divisionTwo << endl;
	cout << endl;
	cout << "  3 - " << divisionThree << endl;
	cout << endl;
	cout << "  Please enter your selection: ";
}

void employeeSpecialty()
{
	cout << "***                          Add Employee                               ***" << endl;
	cout << "***************************************************************************" << endl;
	cout << endl;
	cout << "  Does any of the following apply to this employee?" << endl;
	cout << endl;
	cout << "  1 - Regular Employee [No Special Qualifications]" << endl;
	cout << endl;
	cout << "  2 - Secure Employee" << endl;
	cout << endl;
	cout << "  3 - Support Employee" << endl;
	cout << endl;
	cout << "  9 - Division Supervisior" << endl;
	cout << endl;
	cout << "  Please enter your selection: ";
}