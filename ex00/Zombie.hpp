#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(const std::string &name);
	Zombie(const Zombie &other);
	~Zombie();
	Zombie &operator=(const Zombie &other);
	void announce(void) const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
