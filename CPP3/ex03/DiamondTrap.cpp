#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name), ScavTrap(name), FragTrap(name){
	std::cout << "DiamondTrap object created : " << name << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hp = FragTrap::getHp();
	this->_ep = ScavTrap::getEp();
	this->_dmg = FragTrap::getDmg();
}
DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap object destroyed : " << this->_name << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ref){
	std::cout << "DiamondTrap Copy Assignment Operator Called" << std::endl;
	if (this != &ref){
		this->_hp = ref.getHp();
		this->_ep = ref.getEp();
		this->_dmg = ref.getDmg();
	}
	return *this;
}
DiamondTrap::DiamondTrap(const DiamondTrap &ref) : ClapTrap(ref), ScavTrap(ref), FragTrap(ref){
	*this = ref;
}

void	DiamondTrap::whoAmI(){
	std::cout << "I am " << this->_name << ", also known as " << this->ClapTrap::getName() << std::endl; 
}

