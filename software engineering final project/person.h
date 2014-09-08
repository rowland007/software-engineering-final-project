#pragma once

#include <string>
using namespace std;

class person
{
public:
	person(const string &, const string &);

	void setFirstName(const string &);
	string getFirstName() const;

	void setLastName(const string &);
	string getLastName() const;

	~person(void);

	//virtual function
	virtual void printFullName() const = 0;

private:
	string firstName;
	string lastName;
};
