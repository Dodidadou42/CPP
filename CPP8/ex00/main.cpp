#include "easyfind.hpp"


int main(){
	int tab[] = {1, 5, 10, 20, 35, 50, 100};

	try
	{
		std::vector<int> v(tab, tab + (sizeof(tab) / sizeof(int)));
		std::cout << "Looking for 50 and 3 in vector" << std::endl;
		easyfind(v, 50);
		easyfind(v, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::list<int> l(tab, tab + (sizeof(tab) / sizeof(int)));
		std::cout << "Looking for 50 and 3 in list" << std::endl;
		easyfind(l, 50);
		easyfind(l, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

	

	