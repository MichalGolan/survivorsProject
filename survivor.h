#pragma once
#include <iostream>
using namespace std;

#pragma warning(disable: 4996)


const int LEN = 20;

class Survivor
{

	enum eFamilyStatus { SINGLE, MARRIED, IN_A_RELATIONSHIP };
	static const char* familyStatusStr[] = { "Single", "Married", "In a relationship" };

	char _name[LEN];
	int _age;
	eFamilyStatus _status;

public:
	inline void init(const char* name, int age, int status);
	inline void print();

	int getAge();
	eFamilyStatus getFamilyStatus();
	const char* getName();

	//inline void getterim
};