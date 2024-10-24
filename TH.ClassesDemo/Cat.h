#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	void Speak()
	{
		std::cout << GetName() << " says meow!\n";
	}
	virtual void Move() const
	{
		std::cout << GetName() << " is pouncing!\n";
	}
};