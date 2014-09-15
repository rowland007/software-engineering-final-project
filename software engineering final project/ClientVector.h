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
#pragma once
#include <vector>
#include <string>
#include "Client.h"

class ClientVector
{
public:
	ClientVector(const string &);
	void addClient(Client);
	bool isClientFound(const string);
	void printFullClient(const string);
	void printAllClients() const;
	~ClientVector(void);
private:
	string vectorName_;
	vector< Client > clients_;
};
