#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Bureaucrat *a = new Bureaucrat("Bob", 50);
			std::cout << *a << std::endl;
			delete a;
			Bureaucrat *b = new Bureaucrat("Joe", 1);
			std::cout << *b << std::endl;
			b->gradeUp();
			std::cout << *b << std::endl;
			delete b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat *a = new Bureaucrat("Billy", 150);
			std::cout << *a << std::endl;
			a->gradeDown();
			delete a;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}