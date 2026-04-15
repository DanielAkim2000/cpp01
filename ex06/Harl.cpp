#include "Harl.hpp"

Harl::Harl() {}

Harl::Harl(const Harl &other)
{
	*this = other;
}

Harl &Harl::operator=(const Harl &other)
{
	if (this != &other)
	{

	}
	return (*this);
}

Harl::~Harl(void) {}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complaint(const std::string &level)
{
	int	index;

	index = -1;
	if (level == "DEBUG")
		index = 0;
	else if (level == "INFO")
		index = 1;
	else if (level == "WARNING")
		index = 2;
	else if (level == "ERROR")
		index = 3;

	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			debug();
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
