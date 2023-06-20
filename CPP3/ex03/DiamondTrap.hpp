#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string _name;
	public : 
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &ref);
		DiamondTrap& operator=(const DiamondTrap &ref);
		~DiamondTrap();
		using ScavTrap::attack;
		void	whoAmI();
		
};


#endif