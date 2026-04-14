#ifndef ZOMBIE_H
# define ZOMBIE_H

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

	void	announce(void) const;
	void	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
