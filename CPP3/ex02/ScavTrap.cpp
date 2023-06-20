#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap Constructor Called for " << name << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
}
ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav){
	std::cout << "Scavrap Copy Constructor Called for " << scav.getName() << std::endl;
	*this = scav;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &scav){
	std::cout << "ScavTrap Copy Assignment Operator Called" << std::endl;
	if (this != &scav){
		this->_hp = scav.getHp();
		this->_ep = scav.getEp();
		this->_dmg = scav.getDmg();
	}
	return *this;
}
ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap Destructor Called for " << this->_name << std::endl;
}

void	ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->_name << " entered GateKeeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (this->_hp > 0 && this->_ep > 0){
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing "
			<< this->getDmg() << " points of damage !" << std::endl;
		this->_ep--;
	} else 
		std::cout << "ScavTrap " << this->getName() << "is out of energy." << std::endl;
}