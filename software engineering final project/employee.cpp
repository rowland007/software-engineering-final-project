 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: Employee
   Instructor: Dr. Rhonda G. Chicone
   Date: 7 September 2014
   Description:	Class to create an employee inherited from the Person class.
				This will give you First Name, Last Name, an Employee ID
				Number, and a hire date.  Virtual function is overriden to
				provide: "ID Num  LastName, FirstName".
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
10SEP2014	Constructor now passes to person constructor.
			Added virtual method functionality.
13SEP2014	Modified variable names to follow coding guideline standards.
			Fixed printFullName method. Was printing two last names.
 ************************************************************************/
#include <iostream>
#include "Employee.h"

 /************************************************************************
   Function: Employee()
   Author: Randall D. Rowland Jr.
   Description:	Constructor that uses the inherited Person class constructor.
   @param	first	The actual value to be stored in the inherited class variable.
   @param	last	The actual value to be stored in the inherited class variable.
 ************************************************************************/
Employee::Employee(const string &first, const string &last) : Person(first, last)
{
}

 /************************************************************************
   Function: setIdNum()
   Author: Randall D. Rowland Jr.
   Description: Assigns the value from the parameter to the class variable.
   @param	id		The actual value to be stored in the class variable.    
 ************************************************************************/
void Employee::setIdNum(int id)
{
		idNum_ = id;
}

 /************************************************************************
   Function: getIdNum()
   Author: Randall D. Rowland Jr.
   Description: Returns the value stored within the class variable.    
 ************************************************************************/
int Employee::getIdNum() const
{
	return idNum_;
}

 /************************************************************************
   Function: setHireDate()
   Author: Randall D. Rowland Jr.
   Description: Assigns the value from the parameter to the class variable.
   @param	date	The actual value to be stored in the class variable.    
 ************************************************************************/
void Employee::setHireDate(int date)
{
	hireDate_ = date;
}

 /************************************************************************
   Function: getHireDate()
   Author: Randall D. Rowland Jr.
   Description: Returns the value stored within the class variable.   
 ************************************************************************/
int Employee::getHireDate() const
{
	return hireDate_;
}

 /************************************************************************
   Function: ~Employee()
   Author: Randall D. Rowland Jr.
   Description: Auto-generated destructor.   
 ************************************************************************/
Employee::~Employee(void)
{
}

 /************************************************************************
   Function: printFullName()
   Author: Randall D. Rowland Jr.
   Description: Overwritten virtual function. Prints class vairables to the screen.    
 ************************************************************************/
void Employee::printFullName() const
{
	cout << "  " << getIdNum() << "         " << getLastName() << ", " << getFirstName() << endl;
}