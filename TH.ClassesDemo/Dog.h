#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog() { }

	Dog() : Animal("name", 5) { }

	virtual ~Dog() { } 
	
	virtual void Speak() const
	{
		std::cout << GetName() << " says woof!\n";
	}
	virtual void Move() const
	{
		std::cout << GetName() << " is running!\n";
	}
};