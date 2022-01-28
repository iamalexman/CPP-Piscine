#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	static const int ideasAmount = 100;
	std::string ideas[ideasAmount];

public:
	Brain();
	Brain(const Brain& _brain);
	~Brain();

	Brain& operator=(const Brain& _brain);
};

#endif
