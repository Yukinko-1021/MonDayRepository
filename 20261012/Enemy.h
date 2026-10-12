#pragma once
#include"Character2.h"
class Enemy:public Character2
{
public:
	Enemy(std::string name);
	void Action()  override;
};

