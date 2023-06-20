#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(const Intern &ref);
		Intern& operator=(const Intern &ref);
		~Intern();

		AForm* makeForm(std::string form, std::string target);
};

#endif