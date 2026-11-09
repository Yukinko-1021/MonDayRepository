#include<iostream>
#include<memory>
#include"Enemy.h"
using namespace std;

void ShowEnemy(const Enemy& enemy)
{
	cout << "関数内のEnemyを表示する" << endl;
}

int main(void)
{
	//unique_ptrでEnemyを生成
	unique_ptr<Enemy> enemy = make_unique<Enemy>("スライム");

	cout << "生成した敵は" << endl;

	enemy->Draw();

	ShowEnemy(*enemy);

	cout << "関数を呼び出した後" << endl;
	enemy->Draw();

	return 0;
}