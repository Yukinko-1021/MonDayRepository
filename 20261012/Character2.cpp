#include "Character2.h"
#include<iostream>

Character2::Character2(std::string name)
{
	this->name = name;
}

std::string Character2::GetName()
{
	return name;
}

void Character2::Action()
{
	std::cout << "UŒ‚‚µ‚½" << std::endl;
}