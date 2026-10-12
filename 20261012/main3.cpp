#include<iostream>
#include"Cat.h"
using namespace std;

int main(void)
{
	Cat cat("‚¨‚©‚ä");
	cout << cat.GetName() << endl;

	cat.Speak();
}