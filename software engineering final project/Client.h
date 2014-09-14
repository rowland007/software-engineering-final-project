 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: Client
   Instructor: Dr. Rhonda G. Chicone
   Date: 13 September 2014
   Description:	Class to create a client inherited from the Person class.
				This will give you First Name, Last Name, a Client ID Code
				Virtual function is overriden to provide: 
				"ID Code  LastName, FirstName".
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
#include "Person.h"

class Client : 	public Person
{
public:
	Client(const string &, const string &);
	void setClientID(string);
	string getClientID() const;
	~Client(void);

	//Virtual functions to be overriden
	virtual void printFullName() const;
private:
	string clientID_;
};
