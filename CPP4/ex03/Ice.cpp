#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice Object Created" << std::endl;
}
Ice::Ice(const Ice &ref) : AMateria("ice"){
	std::cout << "Ice Object Created via Copy" << std::endl;
	*this = ref;
}
Ice& Ice::operator=(const Ice &ref){
	std::cout << "Ice Copy Assignment Operator Called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}
Ice::~Ice(){
	std::cout << "Ice Object Destructed" << std::endl;
}

AMateria* Ice::clone() const{
	AMateria *ret = new Ice(*this);
	return ret;
}
void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


