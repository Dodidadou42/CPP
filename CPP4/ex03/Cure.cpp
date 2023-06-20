#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure Object Created" << std::endl;
}
Cure::Cure(const Cure &ref) : AMateria("cure"){
	std::cout << "Cure Object Created via Copy" << std::endl;
	*this = ref;
}
Cure& Cure::operator=(const Cure &ref){
	std::cout << "Cure Copy Assignment Operator Called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}
Cure::~Cure(){
	std::cout << "Cure Object Destructed" << std::endl;
}

AMateria* Cure::clone() const{
	AMateria *ret = new Cure(*this);
	return ret;
}
void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}