 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: Person
   Instructor:
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
13SEP2014	Completed comments.
			Modified the class variable names to follow coding guideline standards.
 ************************************************************************/
#include "Person.h"

 /************************************************************************
   Function: Person()
   Author: Randall D. Rowland Jr.
   Description:	Constructor that takes two parameters and assigns them to
				the class variables.
   @param	first	The actual value to be stored in the class variable.
   @param	last	The actual value to be stored in the class variable.
         
 ************************************************************************/
Person::Person(const string &first, const string &last) : firstName_(first), lastName_(last)
{
}

 /************************************************************************
   Function: setFirstName()
   Author: Randall D. Rowland Jr.
   Description: Assigns the value from the parameter to the class variable.
   @param	first	The actual value to be stored in the class variable.    
 ************************************************************************/
void Person::setFirstName(const string &first)
{
	firstName_ = first;
}

 /************************************************************************
   Function: getFirstName()
   Author: Randall D. Rowland Jr.
   Description: Returns the value stored within the class variable.         
 ************************************************************************/
string Person::getFirstName() const
{
	return firstName_;
}

 /************************************************************************
   Function: setLastName()
   Author: Randall D. Rowland Jr.
   Description: Assigns the value from the parameter to the class variable.
   @param	last	The actual value to be stored in the class variable.			     
 ************************************************************************/
void Person::setLastName(const string &last)
{
	lastName_ = last;
}

 /************************************************************************
   Function: getLastName()
   Author: Randall D. Rowland Jr.
   Description: Returns the value stored within the class variable.     
 ************************************************************************/
string Person::getLastName() const
{
	return lastName_;
}

 /************************************************************************
   Function: ~Person()
   Author: Randall D. Rowland Jr.
   Description: Auto-generated destructor.      
 ************************************************************************/
Person::~Person(void)
{
}
