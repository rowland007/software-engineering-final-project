 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: Division
   Instructor: Dr. Rhonda G. Chicone
   Date: 13 September 2014
   Description:	Class that creates a business division. Used to store emloyees
				of that division without limits on the size. Stores the
				division supervisor that is within one of the employees. Also
				holds the division's revenue.
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
#include "Division.h"

 /************************************************************************
   Function: Division()
   Author: Randall D. Rowland Jr.
   Description:	Constructor that assigns the parameter to the class variable.
   @param	name	The actual value to be stored in the class variable.
 ************************************************************************/
Division::Division(const string &name) : divisionName_(name)
{
}

 /************************************************************************
   Function: setDivisionName()
   Author: Randall D. Rowland Jr.
   Description:	Assigns the parameter value to the class variable.
   @param	name	The actual value to be stored in the class variable.
 ************************************************************************/
void Division::setDivisionName(string name)
{
	divisionName_ = name;
}

 /************************************************************************
   Function: getDivisionName()
   Author: Randall D. Rowland Jr.
   Description:	Returns the value stored within the class variable.
 ************************************************************************/
string Division::getDivisionName() const
{
	return divisionName_;
}

 /************************************************************************
   Function: addEmployeeToDivision()
   Author: Randall D. Rowland Jr.
   Description:	This adds a Specialized Employee object to the vector.
 ************************************************************************/
void Division::addEmployeeToDivision(SpecializedEmployee employee)
{
	employees_.push_back(employee);
}

 /************************************************************************
   Function: setDivisionSupervisor()
   Author: Randall D. Rowland Jr.
   Description:	As soon as the SpecializedEmployee is added to the vector
				with Division Supervisor status. Call this method to have
				the last element of the vector set as Division Supervisor.
 ************************************************************************/
void Division::printAllEmployeesWithinDivision() const
{	
	vector< SpecializedEmployee >::const_iterator tempIterator;
	for(tempIterator = employees_.begin(); tempIterator != employees_.end(); ++tempIterator)
		(*tempIterator).printFullName();
}
 /************************************************************************
   Function: setDivisionSupervisor()
   Author: Randall D. Rowland Jr.
   Description:	As soon as the SpecializedEmployee is added to the vector
				with Division Supervisor status. Call this method to have
				the last element of the vector set as Division Supervisor.
 ************************************************************************/
void Division::setDivisionSupervisor()
{
	divisionSupervisor_ = &(employees_[employees_.size()]);
}

 /************************************************************************
   Function: getDivisionSupervisor()
   Author: Randall D. Rowland Jr.
   Description:	Returns the address of the element within the vector that
				is the Division Supervisor.
 ************************************************************************/
SpecializedEmployee* Division::getDivisionSupervisor() const
{
	return divisionSupervisor_;
}

 /************************************************************************
   Function: setRevenue()
   Author: Randall D. Rowland Jr.
   Description:	Assigns the value of the parameter to the class variable.
   @param	revenue		The value that is assigned to the class variable.
 ************************************************************************/
void Division::setRevenue(double revenue)
{
	revenue_ = revenue;
}

 /************************************************************************
   Function: getRevenue()
   Author: Randall D. Rowland Jr.
   Description:	Returns the value stored within the class variable.
 ************************************************************************/
double Division::getRevenue() const
{
	return revenue_;
}

 /************************************************************************
   Function: Client()
   Author: Randall D. Rowland Jr.
   Description:	Auto-generated destructor
 ************************************************************************/
Division::~Division(void)
{
}