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
#include "Division.h"
#include "ClientVector.h"

class Control
{
public:
	Control(Division*, Division*, Division*, ClientVector*);
	void mainMenuControl();
	void addNewEmployeeControl();
	void searchViewAllEmployeesControl();
	void searchEmployeeControl();
	void viewAllEmployeesControl();
	void addNewClientControl();
	void searchViewAllClientControl();
	void searchClientControl();
	void viewAllClientControl();
	void pause();
	~Control(void);
private:
	Division* divisionOne_;
	Division* divisionTwo_;
	Division* divisionThree_;
	ClientVector* client_;
};