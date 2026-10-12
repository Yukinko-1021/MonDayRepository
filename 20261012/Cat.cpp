#include "Cat.h"
#include<iostream>
Cat::Cat(std::string name) :Animal(name)
{

}

void Cat::Speak()
{
	std::cout << "にゃんにゃん♡" << std::endl;
}
