#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {};

void Cat::makeSound() const { std::cout << "Meow Meow" << std::endl; }
