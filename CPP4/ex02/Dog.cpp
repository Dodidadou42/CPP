#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"){
	std::cout << this->_type << " Object Created" << std::endl;
	this->_brain = new Brain();
}
Dog::~Dog(){
	delete this->_brain;
	std::cout << this->_type << " Object Destroyed" << std::endl;
}
Dog::Dog(const Dog &ref){
	std::cout << this->_type << " Object Created via Copy" << std::endl;
	*this = ref;
}
Dog& Dog::operator=(const Dog &ref){
	std::cout << this->_type << " Assignment Operator Called" << std::endl;
	if (this != &ref)
	{		
		this->_type = ref._type;
		this->_brain = new Brain(*ref._brain);
	}
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Woufwouf tu coco" << std::endl;
}