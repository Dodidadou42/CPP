#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : AForm(ref){*this = ref;}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &ref){
	if (this != &ref)
		this->_target = ref._target;
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	this->checkExecute(executor);
	std::cout << this->_target << " was forgiven by Zaphob Beeblebrox" << std::endl;
}