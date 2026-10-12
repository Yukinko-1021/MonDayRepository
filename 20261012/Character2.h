#pragma once
#include<string>
class Character2
{
private:
	std::string name;
public:

	Character2(std::string name);
	
	std::string GetName();

	virtual void Action();
};

