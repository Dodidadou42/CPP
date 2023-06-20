#ifndef PRESIDENTIALPARDON_HPP
#define PRESIDENTIALPARDON_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private : 
		std::string _target;
	public :
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &ref);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &ref);
		~PresidentialPardonForm();

		virtual void execute(const Bureaucrat &executor) const;
};

#endif