#include "Character.h"
#include"Config.h"
#include<iostream>
using namespace std;

//コンストラクタ
Character::Character(int initialHp) :hp(initialHp)
{

}

//ステータス表示
void Character::ShowStatus(const string& name) const
{
	cout << name << "HP:" << hp << endl;
}

//ダメージを受ける
void Character::TakeDamage(int damage)
{
	hp -= damage;

	//HPが0より小さくなる場合はHPの値をマイナスにさせない
	if (hp < 0)
	{
		//HPの変数を0にする
		hp = 0;
	}
}

//HPを持たせる
int Character::GetHp() const
{
	//GetHpに変数hpの値を持たせる
	return hp;
}

//HPを回復させる
void Character::RecoverHp(int amount)
{
	hp += amount;

	//HPが最大値より大きくなる場合は最大HPを超えないようにする
	if (hp > Config::MAX_HP)
	{
		//HPを最大HPの定数100にする
		hp = Config::MAX_HP;
	}
}