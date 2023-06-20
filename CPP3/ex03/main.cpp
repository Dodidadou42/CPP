#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap obj("Diam");
	std::cout << obj.getName() << obj.getHp() << std::endl;
	obj.attack("Bronz");
	obj.guardGate();
	obj.whoAmI();
}