#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	int i = 0;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (level.compare(levels[i]) && i < 4)
		i++;
	switch (i)
	{
		case 4 :
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		}
		case 0 : 
			this->_debug();
		case 1 :
			this->_info();
		case 2 : 
			this->_warning();
		case 3 :
			this->_error();
	}

}

void	Harl::_debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do !" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}



