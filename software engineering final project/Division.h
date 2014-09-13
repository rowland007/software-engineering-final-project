 /************************************************************************
   Program: Software Engineering Final Project
   Author: Randall D. Rowland Jr.
   Class: Division
   Instructor:
   Date: 13 September 2014
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
#include <vector>
#include <string>
#include "SpecializedEmployee.h"

class Division
{
public:
	Division(void);
	void setDivisionName(string);
	string getDivisionName() const;
	void setDivisionSupervisor();
	SpecializedEmployee getDivisionSupervisor() const;
	void setRevenue(double);
	double getRevenue() const;
	~Division(void);
private:
	string divisionName_;
	vector< SpecializedEmployee > employees_;
	double revenue_;
	SpecializedEmployee* divisionSupervisor_;
};
