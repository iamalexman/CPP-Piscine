#include "Dog.hpp"

Dog::Dog() : Animal("Dog"),  brain(new Brain()) {};

Dog::Dog(const Dog & a) { this->brain = new Brain(*(a.brain)); }

Dog::~Dog() { delete this->brain; }

Dog& Dog::operator=(const Dog &a) {
	*(this->brain) = *(a.brain);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Bark Bark" << std::endl;
}
