#include "ClapTrap.hpp"

int main()
{
	ClapTrap c1("Pika"), c2("Carap");
	c1.attack("Carap");
	c1.attack("Carap");
	c1.attack("Carap");
	c1.attack("Carap");
	c1.attack("Carap");
	c1.attack("Carap");
	c1.attack("Carap");
	c1.attack("Carap");
	c1.beRepaired(5);
	c1.beRepaired(5);
	c1.beRepaired(5);
	c1.beRepaired(5);
	c1.beRepaired(5);
	c1.beRepaired(5);
	c2.takeDamage(10);
}