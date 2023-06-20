#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(const Intern &ref){*this=ref;}
Intern& Intern::operator=(const Intern &ref){(void)ref;return *this;}
Intern::~Intern(){}

AForm* Intern::makeForm(std::string form, std::string target){
	std::string name[3] = {"robotomy request", "shrubbery request", "pardon request"};
	AForm* type[3] = {
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target),
		new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++)
		if (name[i] == form)
			return type[i];
	std::cout << "Couldn't create " << form << " form" << std::endl;
	return NULL;
}