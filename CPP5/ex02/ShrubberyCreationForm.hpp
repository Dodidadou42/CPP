#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private : 
		std::string _target;
	public :
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &ref);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &ref);
		~ShrubberyCreationForm();

		virtual void execute(const Bureaucrat &executor) const;
};

#endif