#pragma once
#include"Animal.h"
class Cat:public Animal
{
public:
	Cat(std::string name);
	void Speak() override;
};

