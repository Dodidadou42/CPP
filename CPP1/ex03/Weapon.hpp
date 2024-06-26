#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class	Weapon
{
	public : 
		Weapon(std::string type);
		~Weapon();
		std::string const & getType(void);
		void setType(std::string new_type);
	private : 
		std::string _type;
};

#include "HumanA.hpp"
#include "HumanB.hpp"

#endif