#include "Enemy.h"

Enemy::Enemy(const std::string& name) : name(name), hp(20)
{
	std::cout << name << "が出現した\n";
}

Enemy::~Enemy()
{
	std::cout << name << "は破棄されました\n";
}

void Enemy::Draw() const
{
	std::cout << "名前：" << name << "\n";
	std::cout << "HP：" << hp << "\n";
}
