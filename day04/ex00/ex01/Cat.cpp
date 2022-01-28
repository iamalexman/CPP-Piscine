#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()) {};

Cat::Cat(const Cat& a) { this->brain = new Brain(*(a.brain)); }

Cat::~Cat() { delete this->brain; }

Cat& Cat::operator=(const Cat &a) {
	*(this->brain) = *(a.brain);
	return (*this);
}

void Cat::makeSound() const { std::cout << "Meow Meow" << std::endl; }
