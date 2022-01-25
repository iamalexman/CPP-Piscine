#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string _name;

public:
	void announce(void) const;
	Zombie*
	newZombie(std::string name);

	Zombie(const std::string name);
	~Zombie();
};

void randomChump(std::string name);

#endif
