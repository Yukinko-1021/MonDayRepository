#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
using namespace std;

int main(void)
{
	//下のは自力で書いたは良いものの、先生の解答例と照らし合わせて全然違ってたものです。キャラクターの名前の入力をさせてなかった。

	/*Player player("プレイヤー");
	Enemy enemy("敵");
	Boss boss("ボス");

	cout << player.GetName() << endl;
	player.Action();

	cout << enemy.GetName() << endl;
	enemy.Action();

	cout << boss.GetName() << endl;
	boss.Action();*/


	string playerName;
	string enemyName;
	string bossName;
	cout << "名前を入力してください。" << endl;
	cout << "勇者" << endl;
	cin >> playerName;
	cout << "敵" << endl;
	cin >> enemyName;
	cout << "ボス" << endl;
	cin >> bossName;

	//コンストラクタ
	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(bossName);

	cout << "勇者の名前:" << player.GetName() << endl;
	cout << "敵の名前:" << enemy.GetName() << endl;
	cout << "ボスの名前:" << boss.GetName() << endl;

	player.Action();
	enemy.Action();
	boss.Action();
}

