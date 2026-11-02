#pragma once
using namespace std;
class Character
{
private:
	int hp;

protected:

	/// <summary>
	/// 回復メソッド
	/// </summary>
	/// <param name="amount">回復数値</param>
	void RecoverHp(int amount);


public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="initialHp">HP初期値</param>
	Character(int initialHp);

	/// <summary>
	/// ステータス表示
	/// </summary>
	/// <param name="name">表示するキャラクター名</param>
	void ShowStatus(const std::string& name) const;

	/// <summary>
	/// ダメージを受ける
	/// </summary>
	/// <param name="damage">ダメージ数値</param>
	void TakeDamage(int damage);

	/// <summary>
	/// HPを取得
	/// </summary>
	/// <returns>HPを持たせる</returns>
	int GetHp() const;

};

