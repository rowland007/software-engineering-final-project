 /************************************************************************
   Program: Cookie
   Author: Randall D. Rowland Jr.
   Class:
   Instructor:
   Date: 9 April 2012
   Description:    (program requirements)
   Input: cookie.txt
   Output: report.txt
   Compilation instructions:
   Usage:
   Known bugs/missing features:
   
   This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 
   Unported License. To view a copy of this license, visit 
   http://creativecommons.org/licenses/by-sa/3.0/ or send a letter to Creative 
   Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
   
   Modifications:
   Date                Comment            
   ----    ------------------------------------------------
 ************************************************************************/
#include "person.h"

person::person(const string &first, const string &last):firstName(first), lastName(last)
{
}

void person::setFirstName(const string &first)
{
	firstName = first;
}

string person::getFirstName() const
{
	return firstName;
}

void person::setLastName(const string &last)
{
	lastName = last;
}

string person::getLastName() const
{
	return lastName;
}

person::~person(void)
{
}
