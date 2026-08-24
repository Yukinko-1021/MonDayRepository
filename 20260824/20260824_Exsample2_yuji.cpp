#include<iostream>
using namespace std;

int main(void)
{
	//配列
	int number[5] = { 10,20,30,40,50 };
	//ポインター配列
	int* pNumber;

	//配列の数字がポインター配列の数字に変更できるようにする
	pNumber = number;
	//ポインター配列の数字を表示
	for (int i = 0; i < 5; i++)
	{
		cout << "pNumber : " << *(pNumber + i) << endl;
	}

	return 0;
}