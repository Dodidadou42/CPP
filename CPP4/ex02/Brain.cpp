#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Object Created" << std::endl;
}
Brain::Brain(const Brain &ref){
	std::cout << "Brain Object Created via copy" << std::endl;
	*this = ref;
}
Brain& Brain::operator=(const Brain &ref){
	std::cout << "Brain Assignment Operator Called" << std::endl;
	if (this != &ref)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = ref._ideas[i];
	}
	return *this;
}
Brain::~Brain(){
	std::cout << "Brain Object Destructed" << std::endl;
}