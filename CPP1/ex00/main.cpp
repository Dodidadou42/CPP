#include "Zombie.hpp"

int main(void)
{
	Zombie	*z1 = newZombie("Socrate");
	z1->announce();
	randomChump("Platon");
	delete z1;
}