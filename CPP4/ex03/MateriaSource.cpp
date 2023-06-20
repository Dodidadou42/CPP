#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource Object Created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_stock[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &ref){
	std::cout << "MateriaSource Object Created via Copy" << std::endl;
	*this = ref;
}
MateriaSource& MateriaSource::operator=(const MateriaSource &ref){
	std::cout << "MateriaSource Copy Assignment Operator Called" << std::endl;
	if (this != &ref){
		for (int i = 0; i < 4; i++){
			if (this->_stock[i])
				delete this->_stock[i];
			this->_stock[i] = ref._stock[i];
		}
	}
	return *this;
}
MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource Object Destructed" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_stock[i])
			delete this->_stock[i];
}

void MateriaSource::learnMateria(AMateria *m){
	for (int i = 0; i < 4; i++){
		if (!this->_stock[i]){
			this->_stock[i] = m;
			std::cout << "MateriaSource stocked item *" << m->getType() << "* in Slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource couldn't stock item *" << m->getType() << "*" << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const& type){
	for (int i = 0; i < 4; i++)
		if (this->_stock[i] && this->_stock[i]->getType() == type){
			std::cout << "MateriaSource created item of type " << type << std::endl;
			return this->_stock[i]->clone();
		}
	std::cout << "MateriaSource couldn't create item " << type << std::endl;
	return 0;
}