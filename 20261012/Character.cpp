#include "Character.h"
#include<iostream>

Character::Character(std::string name)
{
	//これが無いと実行した際にキャラクター名が表示されない
	this->name = name;
}

std::string Character::GetName()
{
	//nameで返す
	return name;
}

void Character::Attack()
{
	std::cout << "攻撃を行いました。" << std::endl;
}
