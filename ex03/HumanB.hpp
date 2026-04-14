#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanB();
		HumanB(std::string name);
		HumanB(const HumanB &other);
		HumanB &operator=(const HumanB &other);
		~HumanB();

		void	setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif
