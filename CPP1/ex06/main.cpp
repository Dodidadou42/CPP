#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		harl.complain(argv[1]);
	}
	else
		std::cout << "Complaining error. Enter a valid complaint level" << std::endl;
	return (0);
}