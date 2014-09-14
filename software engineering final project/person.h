 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: Person
   Instructor: Dr. Rhonda G. Chicone
   Date: 7 September 2014
   Description:	This class creates objects that will hold the first and 
				last name of a person. Also includes a virtual function
				that will allow you to print the name of the person.
				Needs to be overwritten so you can choose First Last or
				Last, First.
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

#include <string>
using namespace std;

class Person
{
public:
	Person(const string &, const string &);
	void setFirstName(const string &);
	string getFirstName() const;
	void setLastName(const string &);
	string getLastName() const;
	~Person(void);
	
	//virtual function
	virtual void printFullName() const = 0;

private:
	string firstName_;
	string lastName_;
};