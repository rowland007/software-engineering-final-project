 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: person
   Instructor:
   Date: 7 September 2014
   Description:
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
 ************************************************************************
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
*/