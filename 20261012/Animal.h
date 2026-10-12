#pragma once
#include<string>
class Animal
{
private:
	std::string name;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Animal(std::string name);

	std::string GetName();
	//子クラスでも再定義できるメソッド
	/// <summary>
	/// 鳴く
	/// </summary>
	virtual void Speak();

};

