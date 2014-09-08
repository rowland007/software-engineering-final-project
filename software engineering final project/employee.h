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
