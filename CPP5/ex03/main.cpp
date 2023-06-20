#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
	AForm* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Sender");
	std::cout << *rrf << std::endl;

	AForm* rrf2;
	rrf2 = someRandomIntern.makeForm("dbhdcwb", "Sender");
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
}