#include <iostream>
using namespace std;

const int LEN = 20;

struct Survivor
{
	char name[LEN];
	int age;
	int stat;
};

struct Tribe
{
	char tribeName[LEN];
	int maxNumOfSur;
	Survivor** survivors;
	int curSurNum;
};

void getSurvivor(Survivor& s);
void printSurvivor(Survivor& s);
void newTribe(Tribe& t);
void addSurvivorToTribe(Tribe& t);
void printTribe(Tribe& t);
void deleteTribe(Tribe& t);
void elimination(Survivor& s, Tribe& t);

int main()
{
	Tribe t1, t2;
	t1
	//two tribes
	//init for tribes
	//read tribes for both
	//elimination
	//free both
	int i;

	newTribe(tribe1);
	addSurvivorToTribe(tribe1);

	newTribe(tribe2);
	addSurvivorToTribe(tribe2);

	printTribe(tribe1);
	printTribe(tribe2);

	deleteTribe(tribe1);
	deleteTribe(tribe2);
}

void getSurvivor(Survivor& s)
{
	cout << "please enter Survivor's name:" << endl;
	cin >> s.name;
	cout << "please enter Survivor's age:" << endl;
	cin >> s.age;
	cout << "please enter Survivor's status:" << endl;
	cin >> s.stat;
}

void printSurvivor(Survivor& s)
{
	cout << "Name: " << s.name << ", ";
	cout << "Age: " << s.age << ", ";
	cout << "status: " << s.stat << endl;
}

void newTribe(Tribe& t)
{
	cout << "enter name for the tribe:" << endl;
	cin >> t.tribeName;

	cout << "please enter max amount of survivors in the tribe: " << endl;
	cin >> t.maxNumOfSur;

	t.survivors = new Survivor * [t.maxNumOfSur]; //allocate array of pointers to survivors
	t.curSurNum = 0;
}

void addSurvivorToTribe(Tribe& t)
{
	int i;
	for (i = 0; i < t.maxNumOfSur; i++)
	{
		t.survivors[i] = new Survivor; // allocate new survivor
		getSurvivor(*(t.survivors[i])); // fill allocated survivor
		(t.curSurNum)++;
	}
}

void printTribe(Tribe& t)
{
	int i;
	for (i = 0; i < t.curSurNum; i++)
	{
		printSurvivor(*(t.survivors)[i]);
	}
}

void deleteTribe(Tribe& t)
{
	int i;
	for (i = 0; i < t.curSurNum; i++)
	{
		delete t.survivors[i];
	}
	delete[]t.survivors;
}

void elimination(Survivor& s, Tribe& t)
{
	int i = 0, j;
	Survivor tmp;
	while (strcmp(s.name, t.survivors[i]->name) != 0) //loop to find wanted survivor in array
	{
		i++;
	}
	delete t.survivors[i]; // delete the survivor 

	for (j = i + 1; j < t.curSurNum; j++, i++) //advance next survivors by 1  
	{
		t.survivors[i]->age = t.survivors[j]->age;
		strcmp(t.survivors[i]->name, t.survivors[j]->name);
		t.survivors[i]->stat = t.survivors[j]->stat;
	}
	(t.curSurNum)--;
}