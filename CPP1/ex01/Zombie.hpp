#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public :
		Zombie();
		~Zombie();
		void announce(void);
		void set_name(std::string name);
	private : 
		std::string _name;
		
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
Zombie*	zombieHorde(int n, std::string name);

#endif