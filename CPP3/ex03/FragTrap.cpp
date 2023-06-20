#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap Constructor Called for " << name << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_dmg = 30;
}
FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag){
	std::cout << "FragTrap Copy Constructor Called for " << frag.getName() << std::endl;
	*this = frag;
}
FragTrap& FragTrap::operator=(const FragTrap &frag){
	std::cout << "FragTrap Copy Assignment Operator Called" << std::endl;
	if (this != &frag){
		this->_hp = frag.getHp();
		this->_ep = frag.getEp();
		this->_dmg = frag.getDmg();
	}
	return *this;
}
FragTrap::~FragTrap(void){
	std::cout << "FragTrap Destructor Called for " << this->_name << std::endl;
}

void	FragTrap::attack(const std::string& target){
	if (this->_hp > 0 && this->_ep > 0){
		std::cout << "FragTrap " << this->getName() << " attacks " << target << " causing "
			<< this->getDmg() << " points of damage !" << std::endl;
		this->_ep--;
	} else 
		std::cout << "FragTrap " << this->getName() << "is out of energy." << std::endl;
}
void	FragTrap::highFiveGuys(void){
	std::cout << this->getName() << " is asking for high fives" << std::endl;
}