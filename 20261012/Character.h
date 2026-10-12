#pragma once
#include<string>
class Character
{
private:
	//privateにnameを書いて他で使えないようにする（勝手に名前が変えられないようにするためと思えばいい）
	std::string name;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Character(std::string name);

	std::string GetName();
	//子クラスでも再定義出来るメソッド
	/// <summary>
	/// 攻撃
	/// </summary>
	virtual void Attack();
};

