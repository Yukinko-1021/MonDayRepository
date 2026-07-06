#include<iostream>
#include"20260706_Header2_yuji.h"
#include"20260706_Config2_yuji.h"
using namespace std;

//経験値の増減
void Add(int& num)
{
	num += rand() % 15 + 1;
	cout << "経験値を" << num << "獲得しました。" << endl;
}

//入力チェック
int InputCheck(int min, int max)
{
	int choice;
	cout << "じゃんけんで勝負\n0:グー　1:チョキ　2:パーです。数字を入力してください。" << endl;

	while (true)
	{
		cin >> choice;
		if (min > choice || max < choice)
		{
			cout << "入力範囲外。再度入力。" << endl;
		}
		else
		{
			break;
		}
	}

	return choice;

}

//ゲーム関数
void Game()
{
	int playerHand = 0;
	int cpuHand = 0;
	int jug = 0;
	int level = ConstNumber::START_LEVEL;
	int exp = 0;

	//乱数の初期化
	srand((unsigned int)time(NULL));

	cout << "レベルが5になればゲームクリア。経験値が20たまればレベルが1上がる。" << endl;

	while(level > ConstNumber::GAMEEND_LEVEL)

	//CPUの手をランダム生成
	cpuHand = rand() % 3;
	
	playerHand = InputCheck(ConstNumber::CHOICEHAND_MIN, ConstNumber::CHOICEHAND_MAX);

	jug = playerHand - cpuHand;

	if (jug == -1, 2)
	{
		cout << "あなたの勝利！\n";
		Add(exp);
	}
}
