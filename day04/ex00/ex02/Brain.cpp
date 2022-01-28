#include "Brain.hpp"

Brain::Brain() {}

Brain::Brain(const Brain& _brain) { *this = _brain; }

Brain::~Brain() {}

Brain& Brain::operator=(const Brain& _brain) {
	for (int i = 0; i < Brain::ideasAmount; ++i)
		this->ideas[i] = _brain.ideas[i];
	return (*this);
}
