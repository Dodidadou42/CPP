#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private : 
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
	public :
		Form(std::string name, int sgrade, int egrade);
		Form(const Form& ref);
		Form& operator=(const Form& ref);
		~Form();

		const std::string	getName() const;
		bool				getSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;	

		void beSigned(const Bureaucrat &ref);

	class GradeTooHighException : public std::exception
		{
			public : 
				virtual const char* what() const throw()
				{
					return ("Form : Grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Form : Grade too low");
				}
		};					
};

std::ostream& operator<<(std::ostream& os, const Form &ref);	

#endif