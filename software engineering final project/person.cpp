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
