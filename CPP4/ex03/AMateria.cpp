#include "AMateria.hpp"

AMateria::AMateria() : _type(""){
	std::cout << "AMateria Object Created without a type" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type){
	std::cout << "AMateria Object Created with type : " << type << std::endl;
}
AMateria::AMateria(const AMateria &ref){
	std::cout << "AMateria Object Created via Copy with type : " << _type << std::endl;
	*this = ref;
}
AMateria& AMateria::operator=(const AMateria &ref){
	std::cout << "AMateria Copy Assignment Operator Called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}
AMateria::~AMateria(){
	std::cout << "AMateria Object Destructed : " << this->_type << std::endl;
}

std::string const& AMateria::getType() const{
	return this->_type;
}
void AMateria::use(ICharacter &target){
	std::cout << "* used a blanc materia on " << target.getName() << " *" << std::endl;
}

