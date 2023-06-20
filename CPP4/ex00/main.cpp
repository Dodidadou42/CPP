#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat();

std::cout << std::endl << meta->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl << std::endl;

meta->makeSound(); 
i->makeSound(); 
j->makeSound();
k->makeSound();

std::cout << std::endl;

delete meta;
delete i;
delete j;
delete k;

return 0;
}