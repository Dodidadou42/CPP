#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _dmg(0){
	std::cout << "ClapTrap Constructor Called for " << name <<std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &clap){
	*this = clap;
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &clap){
	std::cout << "ClapTrap Copy Assignment Operator Called" << std::endl;
	if (this != &clap){
		this->_name = clap.getName();
		this->_hp = clap.getHp();
		this->_ep = clap.getEp();
		this->_dmg = clap.getDmg();
	}
	return *this;
}
ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap Destructor Called for " << this->_name << std::endl;
}

std::string	ClapTrap::getName(void)const {return this->_name;}
int			ClapTrap::getHp(void) const {return this->_hp;}
int			ClapTrap::getEp(void) const {return this->_ep;}
int			ClapTrap::getDmg(void) const {return this->_dmg;}

void	ClapTrap::attack(const std::string& target){
	if (this->_hp > 0 && this->_ep > 0){
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing "
			<< this->getDmg() << " points of damage !" << std::endl;
		this->_ep--;
	} else 
		std::cout << "ClapTrap " << this->getName() << "is out of energy." << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount){
	this->_hp -= amount;
	std::cout << "ClapTrap " << this->getName() << " loses " << amount
		<< "HP." << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_ep > 0){
		this->_hp += amount;
		this->_ep--;
		std::cout << "ClapTrap " << this->getName() << " heals " << amount
		<< "HP." << std::endl;
	} else 
		std::cout << "ClapTrap " << this->getName() << " is out of energy." << std::endl;
}
