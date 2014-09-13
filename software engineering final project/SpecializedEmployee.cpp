 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: SpecializedEmployee
   Instructor:
   Date: 13 September 2014
   Description:	This class stores the status of employees if they are
				an employee with a security level, support employee, or
				a division supervisor. Also holds what their security
				level is and their phone number.
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
#include "SpecializedEmployee.h"

 /************************************************************************
   Function: SpecializedEmployee()
   Author: Randall D. Rowland Jr.
   Description:	Constructor that uses the inherited Employee class constructor.
   @param	first	The actual value to be stored in the inherited class variable.
   @param	last	The actual value to be stored in the inherited class variable.
 ************************************************************************/
SpecializedEmployee::SpecializedEmployee(const string &first, const string &last) : Employee(first, last)
{
}

 /************************************************************************
   Function: setDivisionSupervisor()
   Author: Randall D. Rowland Jr.
   Description:	Sets the value of the parameter to the class variable.
   @param	isSupervisor	The value that is assigned to the class variable.
 ************************************************************************/
void SpecializedEmployee::setIsDivisionSupervisor(bool isSupervisor)
{
	isDivisionSupervisor_ = isSupervisor;
}

 /************************************************************************
   Function: Employee()
   Author: Randall D. Rowland Jr.
   Description:	Returns the value stored within the class variable.
 ************************************************************************/
bool SpecializedEmployee::getIsDivisionSupervisor() const
{
	return isDivisionSupervisor_;
}

 /************************************************************************
   Function: setIsSecureEmployee()
   Author: Randall D. Rowland Jr.
   Description:	Sets the value of the parameter to the class variable.
   @param	isSecure	The value that is assigned to the class variable.
 ************************************************************************/
void SpecializedEmployee::setIsSecureEmployee(bool isSecure)
{
	isSecureEmployee_ = isSecure;
}

 /************************************************************************
   Function: getIsSecureEmployee()
   Author: Randall D. Rowland Jr.
   Description:	Returns the value stored within the class variable.
 ************************************************************************/
bool SpecializedEmployee::getIsSecureEmployee() const
{
	return isSecureEmployee_;
}

 /************************************************************************
   Function: setIsSupportEmployee()
   Author: Randall D. Rowland Jr.
   Description:	Sets the value of the parameter to the class variable.
   @param	isSupport	The value that is assigned to the class variable.
 ************************************************************************/
void SpecializedEmployee::setIsSupportEmployee(bool isSupport)
{
	isSupportEmployee_ = isSupport;
}

 /************************************************************************
   Function: getSupportEmployee()
   Author: Randall D. Rowland Jr.
   Description:	Returns the value stored within the class varaible.
 ************************************************************************/
bool SpecializedEmployee::getIsSupportEmployee() const
{
	return isSupportEmployee_;
}

 /************************************************************************
   Function: setSecurityLevel()
   Author: Randall D. Rowland Jr.
   Description:	Sets the value of the parameter to the class variable.
   @param	securityLevel	The value that is assigned to the class variable.
 ************************************************************************/
void SpecializedEmployee::setSecurityLevel(int securityLevel)
{
	securityLevel_ = securityLevel;
}

 /************************************************************************
   Function: getSecurityLevel()
   Author: Randall D. Rowland Jr.
   Description:	Returns the value stored within the class variable.
 ************************************************************************/
int SpecializedEmployee::getSecurtiyLevel() const
{
	return securityLevel_;
}

 /************************************************************************
   Function: setPhoneNumber()
   Author: Randall D. Rowland Jr.
   Description:	Sets the value of the parameter to the class variable.
   @param	phoneNumber	The value that is assigned to the class variable.
 ************************************************************************/
void SpecializedEmployee::setPhoneNumber(long long int phoneNumber)
{
	phoneNumber_ = phoneNumber;
}

 /************************************************************************
   Function: getPhoneNumber()
   Author: Randall D. Rowland Jr.
   Description:	Returns the value stored within the class variable.
 ************************************************************************/
long long int SpecializedEmployee::getPhoneNumber() const
{
	return phoneNumber_;
}


 /************************************************************************
   Function: ~SpecializedEmployee()
   Author: Randall D. Rowland Jr.
   Description:	Auto-generated deconstructor.
 ************************************************************************/
SpecializedEmployee::~SpecializedEmployee(void)
{
}