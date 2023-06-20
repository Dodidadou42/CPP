#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* animals[4] = { new Dog(), new Cat(), new Cat(), new Dog()}; 
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}