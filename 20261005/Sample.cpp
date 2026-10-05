#include<iostream>
#include<string>
using namespace std;

//基底クラス、親クラス（動物）
class Animal
{
//protectedは親クラスとクラスの継承先（子クラスでアクセス可能）
protected:
	//stringはクラスの紐づけられたもの（繋がった関係のようなもの）
	string eyes;
	string foot;

public:
	void bark()
	{
		cout << "動物は鳴きます\n";
	}

private:
	string name;

};

//派生クラス（犬）
class Dog:public Animal
{
public:
	//名前と目、足の情報は紐づけられている。（計算に使わない文字データはstringでまとめる）
	Dog(string Name, string Eyes, string Foot)
	{
		dogName = Name;
		eyes = Eyes;
		foot = Foot;
	}
	void bark()
	{
		cout << "わんわん" << endl;
	}
	void ShowName()
	{
		cout << "犬の名前:" << dogName << endl;
		cout << "目の色:" << eyes << endl;
		cout << "足の色:" << foot << endl;
	}

private:
	string dogName;

};

int main(void)
{
	string name;
	string eyesColor;
	string footColor;
	cout << "犬の名前を入力してください。" << endl;
	cin >> name;
	cout << "犬の目の色を入力してください。" << endl;
	cin >> eyesColor;
	cout << "犬の足の色を入力したください。" << endl;
	cin >> footColor;
	
	Dog mydog(name,eyesColor,footColor);

	mydog.ShowName();
	mydog.Animal::bark();
	mydog.bark();
	

	return 0;
}

