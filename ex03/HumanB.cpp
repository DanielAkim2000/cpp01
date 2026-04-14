#include "HumanB.hpp"

HumanB::HumanB() : weapon(NULL), name("default")
{
}

HumanB::HumanB(std::string name) : weapon(NULL)
{
	this->name = name;
}

HumanB::HumanB(const HumanB &other)
{
	*this = other;
}

HumanB &HumanB::operator=(const HumanB &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->weapon = other.weapon;
	}
	return (*this);
}

HumanB::~HumanB(){}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their bare hands" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
