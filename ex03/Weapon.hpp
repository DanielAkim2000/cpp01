#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		Weapon(const Weapon &othter);
		Weapon &operator=(const Weapon &other);
		~Weapon();
		const std::string	&getType(void) const;
		void		setType(const std::string name);
};

#endif
