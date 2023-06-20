#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private : 
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
	public :
		AForm(std::string name, int sgrade, int egrade);
		AForm(const AForm& ref);
		AForm& operator=(const AForm& ref);
		virtual ~AForm();

		const std::string	getName() const;
		bool				getSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;	

		void beSigned(const Bureaucrat &ref);
		void checkExecute(const Bureaucrat &executor) const;
		virtual void execute(const Bureaucrat &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public : 
				virtual const char* what() const throw()
				{
					return ("AForm : Grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("AForm : Grade too low");
				}
		};
		class NotSignedException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("AForm : Not signed");
				}
		};			
};

std::ostream& operator<<(std::ostream& os, const AForm &ref);	

#endif