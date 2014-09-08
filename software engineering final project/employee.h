 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: employee
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
 ************************************************************************/
#pragma once
#include "person.h"
#include <ctime>

class employee :
	public person
{
public:
	employee(const string &, const string &);
	void setIdNum(int);
	int getIdNum() const;
	~employee(void);
	
	//Virtual functions to be overriden
	virtual void printFullName() const;
private:
	int idNum;
	struct hireDate{
		int tm_year;
		int tm_month;
		int tm_mday;
	}
};
