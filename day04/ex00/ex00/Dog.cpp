#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {};

void Dog::makeSound() const {
	std::cout << "Bark Bark" << std::endl;
}
