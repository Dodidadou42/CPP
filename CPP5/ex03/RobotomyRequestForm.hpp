#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <random>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
	private : 
		std::string _target;
	public :
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &ref);
		~RobotomyRequestForm();

		virtual void execute(const Bureaucrat &executor) const;
};

#endif