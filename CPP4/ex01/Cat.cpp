#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << this->_type << " Object Created" << std::endl;
	this->_brain = new Brain();
}
Cat::~Cat(){
	delete this->_brain;
	std::cout << this->_type << " Object Destroyed" << std::endl;
}
Cat::Cat(const Cat &ref){
	std::cout << this->_type << " Object Created via Copy" << std::endl;
	*this = ref;
}
Cat& Cat::operator=(const Cat &ref){
	std::cout << this->_type << " Assignment Operator Called" << std::endl;
	if (this != &ref)
	{
		this->_type = ref._type;
		this->_brain = new Brain(*ref._brain);
	}
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Miaou le s" << std::endl;
}