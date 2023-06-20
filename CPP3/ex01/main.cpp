#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Pika");
	ScavTrap scav("Carap");
	clap.attack("Carap");
	scav.takeDamage(clap.getDmg());
	scav.attack("Pika");
	clap.takeDamage(scav.getDmg());
	scav.guardGate();

}