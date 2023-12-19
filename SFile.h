#pragma once
#include "SBase.h"
#include <fstream>

class SFile : public SBase
{

	std::ifstream file;

public:

    SFile(const std::string& filename);

    int Get() override;

};
