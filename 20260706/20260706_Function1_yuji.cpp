#include<iostream>
#include"20260706_Header1_yuji.h"
#include"20260706_Config1_yuji.h"
using namespace std;

//回復させる数字(HP100に足すようにする)
//参照渡しのもと
void Add(int& num)
{
	num += 20;
	cout << "HPが20回復しました\n";
}

//入力チェック
int InputCheck(int min, int max)
{
	int num;
	cout << "1か2の数字を選んでください。\n1→20回復\n2→回復しない" << endl;

	//入力の結果から間違っていないか判定。間違っているなら正しくなるまでループ処理
	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力ミス。再度入力。" << endl;
		}
		else
		{
			break;
		}
	}

	//返り値
	return num;

}

//回復、実行関数(入力された数字から回復するかしないか判定)
void HealCheck()
{
	int hp = ConstNumber::PLAYER_HP;
	int num;
	
	cout << "あなたの現在のHPは100です。" << endl;

	//入力チェック関数に渡して、戻り値で選択肢を持ってくる
	num = InputCheck(ConstNumber::CHOICE_MIN,ConstNumber::CHOICE_MAX);

	//1→Yesにして20回復させて回復させて後のHPを表示
	if (num == 1)
	{
		Add(hp);  //回復関数にプレイヤーHPを返す
		cout << "Yes,現在のHP:" << hp << endl;
	}
	//2→Noにして回復をせずに終わらせ、現状維持のHPを表示
	else
	{
		cout << "No,現在のHP:" << hp << endl;
	}

}