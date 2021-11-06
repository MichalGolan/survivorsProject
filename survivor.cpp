#include "survivor.h"
//set name eith legitimacy tests
void Survivor::init(const char* name, int age, int status)
{
	_age = age;
	strcpy(_name, name);
	_status = (eFamilyStatus)status;

	//use sets
}

void Survivor::print()
{
	cout << "Name: " << _name << endl;
	cout << "Age: " << _age << endl;
	cout << "Family status: " << familyStatusStr[_status] << endl;
}

int Survivor::getAge()
{
	return _age;
}

eFamilyStatus Survivor::getFamilyStatus()
{
	return _status;
}

const char* Survivor::getName()
{
	return _name;
}