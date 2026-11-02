#include<iostream>
using namespace std;

namespace player
{
	void showStatus()
	{
		cout << "プレイヤーの名前： Harry" << endl;
	}
}

namespace enemy
{
	void showStatus()
	{
		cout << "敵の名前： Ron" << endl;
	}
}

int main(void)
{
	//プレイヤーの詳細を表示
	player::showStatus();
	//敵の詳細を表示
	enemy::showStatus();
	return 0;

}