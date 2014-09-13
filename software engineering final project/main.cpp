#include <iostream>
#include <string>
#include "Client.h"

using namespace std;

void pause();

int main()
{	
	string c_id;
	string c_firstName;
	string c_lastName;

	cout << "Create Client! Enter ID Num: ";
	cin >> c_id;
	cout << "Enter First Name: ";
	cin >> c_firstName;
	cout << "Enter Last Name: ";
	cin >> c_lastName;

	Client client(c_firstName, c_lastName);
	client.setClientID(c_id);

	cout << "Is this correct?" << endl;
	client.printFullName();

	pause();
	return 0;
}

void pause()
{
	cin.sync(); // Flush The Input Buffer Just In Case
	cin.ignore(); // There's No Need To Actually Store The Users Input
	system("PAUSE");
}