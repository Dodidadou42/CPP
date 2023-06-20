#include "Character.hpp"

Character::Character(std::string name) : _name(name){
	std::cout << "Character Object Created : " << name << std::endl;
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
}
Character::Character(const Character &ref){
	std::cout << "Character Object Created via Copy : "<< this->_name << std::endl;
	*this = ref;
}
Character& Character::operator=(const Character &ref){
	std::cout << "Character Copy Assignment Operator Called" << std::endl;
	if (this != &ref)
	{
		this->_name = ref._name;
		for (int i = 0; i < 4; i++){
			if (this->_items[i])
				delete this->_items[i];
			this->_items[i] = ref._items[i];
		}
	}
	return *this;
}
Character::~Character(){
	std::cout << "Character Object Destructed : " << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_items[i])
			delete this->_items[i];
}

std::string const& Character::getName() const{
	return this->_name;
}
void Character::equip(AMateria *m){
	for (int i = 0; i < 4; i++)
	{
		if (!this->_items[i])
		{
			this->_items[i] = m;
			std::cout << "Character " << this->getName() << " equiped Slot "
				<< i << " with " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Character " << this->getName() << " can't equip item" << std::endl;
}
void Character::unequip(int idx){
	if (idx >= 0 && idx <= 3 && this->_items[idx])
	{
		this->_items[idx] = NULL;
		std::cout << "Character " << this->_name
			<< " unequiped Slot " << idx << std::endl;  
	}
	else
		std::cout << "Character " << this->_name
			<< " can't unequip Slot " << idx << std::endl;
}
void Character::use(int idx, ICharacter& target){
	if (this->_items[idx]){
		std::cout << "Character " << this->_name << " ";
		this->_items[idx]->use(target);
	} else
		std::cout << "Character " << this->_name << " can't use item" << std::endl;
}