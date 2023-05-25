#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

std::string const & Weapon::getType(void)
{
	return this->_type;
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}