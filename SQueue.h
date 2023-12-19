#pragma once
#include "SBase.h"
#include <vector>

class SQueue : public SBase
{
	std::vector<int> que;
	int length, current;
public:
	SQueue(int length);
	int Get() override;
};
