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
14SEP2014	Added a client vector to store clients.
			Added addClient to push object into vector.
			Added printAllClients to display objects within vector.
 ************************************************************************/
#include <iostream>
#include <string>
#include "Client.h"

 /************************************************************************
   Function: Client()
   Author: Randall D. Rowland Jr.
   Description:	Constructor that uses the inherited Person class constructor.
   @param	first	The actual value to be stored in the inherited class variable.
   @param	last	The actual value to be stored in the inherited class variable.
 ************************************************************************/
Client::Client(const string &first, const string &last) : Person(first, last)
{
}

 /************************************************************************
   Function: setClientID()
   Author: Randall D. Rowland Jr.
   Description: Assigns the value from the parameter to the class variable.
   @param	id		The actual value to be stored in the class variable.    
 ************************************************************************/
void Client::setClientID(string id)
{
		clientID_ = id;
}

 /************************************************************************
   Function: getClientID()
   Author: Randall D. Rowland Jr.
   Description: Returns the value stored within the class variable.    
 ************************************************************************/
string Client::getClientID() const
{
	return clientID_;
}

 /************************************************************************
   Function: ~Client()
   Author: Randall D. Rowland Jr.
   Description: Auto-generated destructor.   
 ************************************************************************/
Client::~Client(void)
{
}

 /************************************************************************
   Function: printFullName()
   Author: Randall D. Rowland Jr.
   Description: Overwritten virtual function. Prints class vairables to the screen.    
 ************************************************************************/
void Client::printFullName() const
{
	cout << "  " << getClientID() << "  " << getLastName() << ", " << getLastName() << endl;
}

 /************************************************************************
   Function: addClient()
   Author: Randall D. Rowland Jr.
   Description:	This adds a client object to the vector.
 ************************************************************************/
void Client::addClient(Client client)
{
	clients_.push_back(client);
}

 /************************************************************************
   Function: printAllClients()
   Author: Randall D. Rowland Jr.
   Description:	Prints all clients within the vector using an iterator.
 ************************************************************************/
void Client::printAllClients() const
{	
	vector< Client >::const_iterator tempIterator;
	for(tempIterator = clients_.begin(); tempIterator != clients_.end(); ++tempIterator)
		(*tempIterator).printFullName();
}