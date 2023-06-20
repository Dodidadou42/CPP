#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat *a = new Bureaucrat("Bob", 50);

		Form *z = new Form("Form1", 60, 60);
		Form *y = new Form("Form2", 40, 40);
		std::cout << *a << std::endl << *z << std::endl << *y << std::endl;

		a->signForm(*z);
		std::cout << *z << std::endl;
		a->signForm(*y);

		delete a;
		delete z;
		delete y;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
}