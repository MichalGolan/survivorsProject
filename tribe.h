#pragma once
#include "survivor.h"

class tribe
{
	char _tribeName[LEN];
	int _maxNumOfSur;
	Survivor** _survivors;
	int _curSurNum;

public:

	void init(const char* name, int maxNumOfSur);
	void addSurvivor(Survivor& s);
	void print();
	void free();
	void elimination(Survivor& s);

	char* getTribeName();
	int getMaxNumOfSur();
	Survivor** getSurvivors();
	int getCurSurNum();
};