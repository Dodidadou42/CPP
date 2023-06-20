#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << this->_type << " Object Created" << std::endl;
}
Dog::~Dog(){std::cout << this->_type << " Object Destroyed" << std::endl;}
Dog::Dog(const Dog &ref){
	std::cout << this->_type << " Object Created via Copy" << std::endl;
	*this = ref;
}
Dog& Dog::operator=(const Dog &ref){
	std::cout << this->_type << " Assignment Operator Called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Woufwouf tu coco" << std::endl;
}