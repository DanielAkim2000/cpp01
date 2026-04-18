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

void	Harl::complain(const std::string &level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	index;

	index = 0;
	while (index < 4 && levels[index] != level)
		index++;

	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
