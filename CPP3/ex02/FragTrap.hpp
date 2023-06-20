#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(std::string name);
		FragTrap(const FragTrap &scav);
		FragTrap& operator=(const FragTrap &scav);
		~FragTrap(void);

		void	attack(const std::string& target);
		void	highFiveGuys(void);
};

#endif