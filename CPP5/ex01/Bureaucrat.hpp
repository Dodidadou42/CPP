#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private :
		const std::string _name;
		int _grade;
	public :
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &ref);
		Bureaucrat& operator=(const Bureaucrat &ref);
		~Bureaucrat();

		const std::string getName() const;
		int getGrade() const;

		void gradeUp();
		void gradeDown();

		void signForm(Form &ref);

		class GradeTooHighException : public std::exception
		{
			public : 
				virtual const char* what() const throw()
				{
					return ("Bureaucrat : Grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Bureaucrat : Grade too low");
				}
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const &ref);

#endif