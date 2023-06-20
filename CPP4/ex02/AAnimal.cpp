#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal"){
	std::cout << "AAnimal Object Created" << std::endl;
}
AAnimal::AAnimal(std::string type) : _type(type){
	std::cout << "AAnimal Object Created : " << this->_type << std::endl;
}
AAnimal::~AAnimal(){
	std::cout << "AAnimal Object Destroyed" << std::endl;
}
AAnimal::AAnimal(const AAnimal &ref){
	std::cout << "AAnimal Object Created via Copy" << std::endl;
	*this = ref;
}
AAnimal& AAnimal::operator=(const AAnimal &ref){
	std::cout << "AAnimal Assignment Operator Called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

std::string AAnimal::getType() const{
	return this->_type;
}