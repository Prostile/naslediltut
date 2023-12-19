#pragma once
#include "Freq.h"

class Diap : public Freq
{
	int min, max, CountOFNumbers;
public:
	Diap();
	void Calc(SBase* pobj);
	friend ostream& operator<<(ostream& stream, Diap& obj);
};
