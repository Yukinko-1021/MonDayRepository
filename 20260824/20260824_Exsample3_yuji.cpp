#include<iostream>
using namespace std;

int main(void)
{
	//配列
	int number[5] = { 35,82,17,96,54 };
	int maxNumber;
	int* pNumber;

	//配列の先頭アドレスを取得する
	pNumber = number;
	//一時的に最初の数字を最大値に置いておく
	maxNumber = number[0];

	//配列の数字五つを表示させる
	for (int i = 0; i < 5; i++)
	{
		cout << *(pNumber + i) << endl;
	}

	//最初に最大値と仮定しておいた数字とそのほかの数字を比較させ、大きければその数字を最大値に置き換える。
	for (int i = 0; i < 5; i++)
	{
		if (maxNumber < *(pNumber + i))
		{
			maxNumber = *(pNumber + i);
		}
	}

	//結果表示
	cout << "最大値 : " << maxNumber << endl;

	return 0;
}