#pragma once
#include"Character.h"
#include"PlayerAction.h"
class Player:public Character
{
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Player();

	

	void Heal(int amount)const;

};

