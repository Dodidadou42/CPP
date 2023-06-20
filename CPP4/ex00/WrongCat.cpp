#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << this->_type << " Object Created" << std::endl;
}
WrongCat::~WrongCat(){std::cout << this->_type << " Object Destroyed" << std::endl;}
WrongCat::WrongCat(const WrongCat &ref){
	std::cout << this->_type << " Object Created via Copy" << std::endl;
	*this = ref;
}
WrongCat& WrongCat::operator=(const WrongCat &ref){
	std::cout << this->_type << " Assignment Operator Called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

void	WrongCat::makeSound() const{
	std::cout << "Wrong Miaou le s" << std::endl;
}