#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		try
		{
			std::cout << "TEST 1" << std::endl;
			Bureaucrat *a = new Bureaucrat("Bob", 150);
			AForm *z = new RobotomyRequestForm("Robot1");
			std::cout << *a << std::endl << *z << std::endl;
			a->signForm(*z);
			a->executeForm(*z);
			delete a;
			delete z;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "TEST 2" << std::endl;
			Bureaucrat *a = new Bureaucrat("Bob", 1);
			AForm *z = new RobotomyRequestForm("Robot2");
			std::cout << *a << std::endl << *z << std::endl;
			a->signForm(*z);
			a->executeForm(*z);
			delete a;
			delete z;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "TEST 3" << std::endl;
			Bureaucrat *a = new Bureaucrat("Bob", 140);
			AForm *z = new ShrubberyCreationForm("Garden1");
			std::cout << *a << std::endl << *z << std::endl;
			a->signForm(*z);
			a->executeForm(*z);
			delete a;
			delete z;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "TEST 4" << std::endl;
			Bureaucrat *a = new Bureaucrat("Bob", 1);
			AForm *z = new ShrubberyCreationForm("Garden2");
			std::cout << *a << std::endl << *z << std::endl;
			a->signForm(*z);
			a->executeForm(*z);
			delete a;
			delete z;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "TEST 5" << std::endl;
			Bureaucrat *a = new Bureaucrat("Bob", 1);
			AForm *z = new PresidentialPardonForm("Pardon1");
			std::cout << *a << std::endl << *z << std::endl;
			a->executeForm(*z);
			delete a;
			delete z;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "TEST 6" << std::endl;
			Bureaucrat *a = new Bureaucrat("Bob", 1);
			AForm *z = new PresidentialPardonForm("Pardon2");
			std::cout << *a << std::endl << *z << std::endl;
			a->signForm(*z);
			a->executeForm(*z);
			delete a;
			delete z;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	
}