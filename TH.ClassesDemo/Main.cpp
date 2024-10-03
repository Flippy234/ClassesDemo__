// Classes Demo
// Tyler Hanson

#include <iostream>
#include <conio.h>

using namespace std;
class Animal
{

private:

	string m_name;
	int m_age = 0;

public:

	// mutator methods (setters)
	void SetName(string name) { m_name = name; }
	void SetAge(int age) { m_age = age; }

	// accessor methods (getters)
	string GetName() { return m_name; }
	int GetAge() { return m_age; }

	// others methods
	void Display()
	{
		cout << GetName() << " is " << GetAge() << " years old.";
	}
};

int main()
{
	Animal a;
	a.SetName("Fluffy");
	a.SetAge(4);
	a.Display();

	(void)_getch();
	return 0;
}