#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout << "Animal Object Created" << std::endl;
}
Animal::Animal(std::string type) : _type(type){
	std::cout << "Animal Object Created : " << this->_type << std::endl;
}
Animal::~Animal(){
	std::cout << "Animal Object Destroyed" << std::endl;
}
Animal::Animal(const Animal &ref){
	std::cout << "Animal Object Created via Copy" << std::endl;
	*this = ref;
}
Animal& Animal::operator=(const Animal &ref){
	std::cout << "Animal Assignment Operator Called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

void	Animal::makeSound() const{
	std::cout << "*Random " << this->_type << " noise*" << std::endl;
}
std::string Animal::getType() const{
	return this->_type;
}