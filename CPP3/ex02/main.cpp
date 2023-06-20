#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clap("Pika");
	ScavTrap scav("Carap");
	FragTrap frag("Miaouss");
	clap.attack("Carap");
	scav.takeDamage(clap.getDmg());
	scav.attack("Pika");
	clap.takeDamage(scav.getDmg());
	scav.guardGate();
	frag.highFiveGuys();

}