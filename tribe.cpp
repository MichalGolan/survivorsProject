#include "tribe.h"

void tribe::init(const char* name, int maxNumOfSur)
{
	_maxNumOfSur = maxNumOfSur;
	_curSurNum = 0;
	_survivors = new Survivor * [_maxNumOfSur];
	strcpy(_tribeName, name);
	
}

void tribe::addSurvivor(Survivor& s)
{
	//test if enouh space for another sur
}
void  tribe::print()
{
	int i;
	for (i = 0; i < _curSurNum; i++)
	{
		printSurvivor(*(t.survivors)[i]);
	}
}

void  tribe::free()
{
	int i;
	for (i = 0; i < t.curSurNum; i++)
	{
		delete t.survivors[i];
	}
	delete[]t.survivors;
}

void  tribe::elimination(Survivor& s)
{

}
char* tribe::getTribeName()
{
	return _tribeName;
}
int tribe::getMaxNumOfSur()
{
	return _maxNumOfSur;
}
Survivor** tribe::getSurvivors()
{
	return _survivors;
}
int tribe::getCurSurNum()
{
	return _curSurNum;
}