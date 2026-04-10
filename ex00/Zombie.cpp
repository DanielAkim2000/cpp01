#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "Unnamed";
}

Zombie::Zombie(const std::string &name)
{
	this->name = name;
}

Zombie::Zombie(const Zombie &other)
{
	*this = other;
}

Zombie &Zombie::operator=(const Zombie &other)
{
	if (this != &other)
	{
		name = other.name;
	}
	return (*this);
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
