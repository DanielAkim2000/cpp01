#include "HumanA.hpp"

static Weapon &getDefaultWeapon()
{
	static Weapon defaultWeapon("bare hands");
	return (defaultWeapon);
}

HumanA::HumanA() : weapon(getDefaultWeapon()), name("default")
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::HumanA(const HumanA &other) : weapon(other.weapon), name(other.name)
{
}

HumanA &HumanA::operator=(const HumanA &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->weapon = other.weapon;
	}
	return (*this);
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
