#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string cmd;
	do {
		std::cout << "Choose a Level :" << std::endl << "DEBUG INFO WARNING ERROR" << std::endl;
		if (!std::getline(std::cin, cmd))
			break ;
		harl.complain(cmd);
	} while (cmd.compare("exit"));
	return (0);
}