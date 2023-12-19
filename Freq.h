#pragma once
#include <iostream>
#include <map>
#include "SBase.h"
using namespace std;

class Freq
{
	int SumOfNumbrs;
protected:
	map<int, int> counts;
public:
	void Calc(SBase* pobj);
	friend ostream& operator<<(ostream& stream, Freq& obj);
};
