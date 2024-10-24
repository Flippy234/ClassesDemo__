#pragma once
#include <iostream>

class Person;

class Animal
{

private:

	std::string m_name;
	int m_age = 0;

public:

	// constructor
	Animal() { }  // default

	Animal(const std::string& name, const int age)
	{
		// Both are the same way
		/*SetName(name);
		SetAge(age);*/
		m_name = name;
		m_age = age;
	}

	virtual ~Animal() { }

	// mutator methods (setters)
	virtual void SetName(std::string name) { m_name = name; }
	virtual void SetAge(int age) { m_age = age; }
	virtual void SetOwner(Person* pOwner) { m_pOwner = pOwner; }
	//void SetPet(Animal* pPet) { m_pPet = pPet; }

	// accessor methods (getters)
	std::string GetName() { return m_name; }
	int GetAge() { return m_age; }

	// others methods
	virtual void Display() const;

	// virtual -- method CAN be overridden by derived classes
	virtual void Speak() const { }


	// "= 0" makes the method "abstract" 
	// "pure-virtual" -- MUST be overridden by derived class
	virtual void Move() const = 0;
};