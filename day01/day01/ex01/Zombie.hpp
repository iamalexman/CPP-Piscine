#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

private:
	std::string _name;

public:
	void announce(void) const;
	void setName(std::string name);

	Zombie(void);
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
