#include<iostream>
#include"Dog.h"
using namespace std;

int main(void)
{
	Dog dog("ƒ„ƒ}ƒgƒŠƒm");
	cout << dog.GetName() << endl;

	dog.Speak();
}