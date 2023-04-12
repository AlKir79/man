#pragma once
#include <string>
using namespace std;
class Human
{
private:
	int socialID;
	char* lastName;
	char* firstName;
	char* middleName;
public:
	Human(int socialID, char* lastName, char* firstName, char* middleName) {
		this->socialID = socialID;
		this->lastName = lastName;
		this->firstName = firstName;
		this->middleName = middleName;
	}
	Human() : Human {12345,"Ivanov","Ivan","Ivanovich" } {};

};

