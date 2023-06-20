#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected : 
		std::string _name;
		int			_hp;
		int			_ep;
		int			_dmg;

	public :
		ClapTrap(std::string);
		ClapTrap(const ClapTrap &clap);
		ClapTrap& operator=(const ClapTrap &clap);
		~ClapTrap(void);

		std::string getName(void) const;
		int			getHp(void) const;
		int			getEp(void) const;
		int			getDmg(void) const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};



#endif