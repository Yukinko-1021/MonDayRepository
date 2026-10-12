#pragma once
#include"Character2.h"
class Boss:public Character2
{
public:
	Boss(std::string name);
	void Action() override;
};

