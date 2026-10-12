#pragma once
#include"Character2.h"
class Player:public Character2
{
public:
	Player(std::string name);
	void Action() override;

};

