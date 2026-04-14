#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(const Weapon &other)
{
	*this = other;
}

Weapon &Weapon::operator=(const Weapon &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Weapon::~Weapon(){};

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(const std::string type)
{
	this->type = type;
}
