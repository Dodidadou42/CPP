#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << "WrongAnimal Object Created" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : _type(type){
	std::cout << "WrongAnimal Object Created : " << type << std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Object Destroyed" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &ref){
	std::cout << "WrongAnimal Object Created via Copy" << std::endl;
	*this = ref;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref){
	std::cout << "WrongAnimal Assignment Operator Called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

void	WrongAnimal::makeSound() const{
	std::cout << "*Random " << this->_type << " noise*" << std::endl;
}
std::string WrongAnimal::getType() const{
	return this->_type;
}
