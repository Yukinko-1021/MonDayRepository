#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_Header2_yuji.h"
using namespace std;

//入力チェック関数
int InputCheck(int min, int max)
{
	int num;

	//正しい範囲の数字入力されるまでループを続ける。
	while (true)
	{
		cin >> num;

		if (min > num || max < num)
		{
			cout << "入力範囲外。再度入力。" << endl;
		}
		else
		{
			break;
		}

	}

	return num;

}

//じゃんけんの勝敗関数
int Judgement(int player, int cpu)
{
	int judg;

	//プレイヤーの出した手の数字から、CPUの出した手の数字を引く
	judg = player - cpu;

	return judg;
}

//経験値取得と一定値でレベルが上がるようにする関数（レベルアップ関数）
void LevelUp(int& exp, int& lv)
{
	//EXPERIENCE_MAXだけでは0～14の範囲になるため、EXPERIENCE_MINを足して範囲を1～15にしている。
	int expAcquisition = rand() % EXPERIENCE_POINT_MAX + EXPERIENCE_POINT_MIN;

	exp += expAcquisition;

	//獲得経験値が20以上を超えたら現在経験値から20を引いて、レベルを1上げる
	if (exp >= LEVEL_UP)
	{
		lv++;
		cout << "レベルが上がりました。\n";

		cout << "Lv:" << lv << "です。\n";

		exp -= 20;
	}
	//獲得経験値が20を超えてなければ、レベルを上げずに続ける。
	else
	{
		cout << expAcquisition << "獲得しました。\n";
	}
}

//互いに出した手を表示させる関数
void ShowHand(int hand)
{
	switch (hand)
	{
	case ROCK:
		cout << "グー\n";
		break;
	case SCISSORS:
		cout << "チョキ\n";
		break;
	case PAPER:
		cout << "パー\n";
		break;
	default:
		break;
	}
}

//ゲーム関数
void Game(int &exp, int &level)
{
	//変数宣言
	int player = 0;
	int cpu = 0;

	int judg = 0;


	cout << "じゃんけんゲームをしましょう。\n";
	cout << "選択する手は、「グー：0」「チョキ：1」「パー：2」とします。\n";
	cout << "勝つと経験値が獲得でき、経験値20につきレベルが上がります。\n";

	cout << "===================== Player Turn ====================\n";
	player = InputCheck(INPUT_MIN, INPUT_MAX);
	cpu = rand() % HAND_NUMBER;

	//playerとCPUがそれぞれ出した手の数字を表示
	cout << "PlayerHand\n";
	ShowHand(player);
	cout << "CPU Hand\n";
	ShowHand(cpu);

	//勝敗判定はジャッジメント関数から持ってくる
	judg = Judgement(player, cpu);

	//プレイヤーが勝利の場合
	if (judg == -1 || judg == 2)
	{
		cout << "Player Win" << endl;
		LevelUp(player, cpu);
	}
	//互いに同じ手を出した場合
	else if (judg == 0)
	{
		cout << "Draw" << endl;
	}
	//CPUが勝利の場合
	else
	{
		cout << "CPU Win" << endl;
	}

	

}