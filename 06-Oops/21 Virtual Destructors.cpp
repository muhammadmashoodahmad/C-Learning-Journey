#include<iostream>
using namespace std;

class Animal
{
	public:
		Animal()
		{
			cout << "Animal Constructor" << endl;
		}

		virtual ~Animal()
		{
			cout << "Animal Destructor" << endl;
		}
};

class Dog : public Animal
{
	public:
		Dog()
		{
			cout << "Dog Constructor" << endl;
		}

		~Dog()
		{
			cout << "Dog Destructor" << endl;
		}
};

int main()
{
	Animal *ptr = new Dog();

	delete ptr;

	return 0;
}
