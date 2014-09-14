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
13SEP2014	Modified class variable to follow coding guidelines.
			Added hireDate variable and methods.
			Made both variables unsigned.
 ************************************************************************/
#pragma once
#include "Person.h"

class Employee : public Person
{
public:
	Employee(const string &, const string &);
	void setIdNum(unsigned long long int);
	unsigned long long int getIdNum() const;
	void setHireDate(int);
	int getHireDate() const;
	~Employee(void);
	
	//Virtual functions to be overriden
	virtual void printFullName() const;
private:
	unsigned long long int idNum_;
	unsigned int hireDate_;
};