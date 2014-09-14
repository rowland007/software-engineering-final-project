 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: ClientVector
   Instructor: Dr. Rhonda G. Chicone
   Date: 14 September 2014
   Description:	Class to create a client vector to hold all the client
				objects.
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
#include "ClientVector.h"

 /************************************************************************
   Function: ClientVector()
   Author: Randall D. Rowland Jr.
   Description:	Auto-generated constructor.
 ************************************************************************/
ClientVector::ClientVector(const string &name) : vectorName_(name)
{
}

 /************************************************************************
   Function: addClient()
   Author: Randall D. Rowland Jr.
   Description:	This adds a client object to the vector.
 ************************************************************************/
void ClientVector::addClient(Client client)
{
	clients_.push_back(client);
}

 /************************************************************************
   Function: printAllClients()
   Author: Randall D. Rowland Jr.
   Description:	Prints all clients within the vector using an iterator.
 ************************************************************************/
void ClientVector::printAllClients() const
{	
	vector< Client >::const_iterator tempIterator;
	for(tempIterator = clients_.begin(); tempIterator != clients_.end(); ++tempIterator)
		(*tempIterator).printFullName();
}

 /************************************************************************
   Function: ~ClientVector()
   Author: Randall D. Rowland Jr.
   Description:	Auto-generated destructor.
 ************************************************************************/
ClientVector::~ClientVector(void)
{
}
