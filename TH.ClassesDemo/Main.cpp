// Classes Demo
// Tyler Hanson

// Pillars of OOP
// 1. Encapsulation -- Put related things together
// 2. Inheritance -- Get things 'free' because of a relationship 
// 3. Polymorphism -- Treating objects like their base type.
// 4. Abstraction** -- We don't need to know how something works to use it 

#include <conio.h>
#include "Dog.h"
#include "Cat.h"
#include "Person.h"

int main()
{
	Dog princess;
	princess.SetAge(14);
	princess.SetName("Princess");
	princess.Display();
	princess.Speak();

	Cat pinky;
	pinky.SetAge(15);
	pinky.SetName("Pinky");
	pinky.Display();
	pinky.Speak();

	std::vector<Animal*> animals; 
	animals.push_back(&princess); // treating a dog like an animal
	animals.push_back(&pinky); // treating a cat like an animal

	for (Animal* pAnimal : animals)
	{
		pAnimal->Move();
	}



	/*Animal a;
	a.SetName("Fluffy");
	a.SetAge(4);
	a.Display();
	a.Speak();

	Person p("Tyler", 5);
	p.SetPet(&a);
	p.Display();


	Person p2;
	p2.SetAge(56);
	p2.SetName("Billy");
	p2.Display();

	Person* pPerson = new Person("Nicholas", 4);*/


	(void)_getch();
	return 0;
}