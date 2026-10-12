#include<iostream>
#include"Character.h"
using namespace std;

int main(void)
{
	//コンストラクタ
	Character character("和田どん");          //キャラクタークラスからキャラクターオブジェクト作成
	cout << character.GetName() << endl;      //自由に決めたキャラクター名を表示

	character.Attack();

	return 0;
}