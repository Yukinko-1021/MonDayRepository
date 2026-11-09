#pragma once
#include<string>
using namespace std;
class Enemy
{
private:
	string Name;
	int hp;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="name">敵の名前</param>
	Enemy(const string& name);

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Enemy();

	/// <summary>
	/// HPを取得
	/// </summary>
	/// <returns>HP</returns>
	int GetHp() const;

	/// <summary>
	/// 敵の情報表示
	/// </summary>
	void Draw() const;



};

