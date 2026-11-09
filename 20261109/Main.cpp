#include<iostream>
#include"Enemy.h"
using namespace std;

int main(void)
{

	cout << "開始" << endl;

	//Enemyを生成
	unique_ptr<Enemy> enemy = make_unique<Enemy>();

	//Enemyの更新
	enemy->Update();
	//Enemyの描画
	enemy->Draw();

	//Enemyは自動で破棄される

	return 0;
}