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
#pragma once
#include "Employee.h"

class SpecializedEmployee :	public Employee
{
public:
	SpecializedEmployee(const string &, const string &);
	void setIsDivisionSupervisor(bool);
	bool getIsDivisionSupervisor() const;
	void setIsSecureEmployee(bool);
	bool getIsSecureEmployee() const;
	void setIsSupportEmployee(bool);
	bool getIsSupportEmployee() const;
	void setSecurityLevel(int);
	int getSecurtiyLevel() const;
	void setPhoneNumber(long long int);
	long long int getPhoneNumber() const;
	~SpecializedEmployee(void);
private:
	bool isDivisionSupervisor_;
	bool isSecureEmployee_;
	bool isSupportEmployee_;
	unsigned int securityLevel_;
	unsigned long long int phoneNumber_;
};
