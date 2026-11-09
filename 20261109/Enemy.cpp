#include<iostream>
#include"Enemy.h"
using namespace std;

//コンストラクタ
Enemy::Enemy(const string& name) :Name(name), hp(100)
{
	cout << name << "が出現しました。\n";
}

//デストラクタ
Enemy::~Enemy()
{
	cout << Name << "を破棄しました。\n";
}

int Enemy::GetHp() const
{
	return hp;
}

void Enemy::Draw() const
{
	cout << "名前：" << Name << endl;
	cout << "HP :" << hp << endl;
}