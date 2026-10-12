#include"Animal.h"
#include<iostream>

Animal::Animal(std::string name)
{
	this->name = name;
}

std::string Animal::GetName()
{
	//name‚É•Ô‚·
	return name;
}

void Animal::Speak()
{
	std::cout << "“®•¨‚Ì–Â‚«º" << std::endl;
}