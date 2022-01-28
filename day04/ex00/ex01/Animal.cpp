#include "Animal.hpp"

Animal::Animal() : _type("empty") {}

Animal::Animal(const std::string &type) : _type(type) {}

Animal::Animal (const Animal& src) { *this = src; }

Animal::~Animal() {}

const std::string& Animal::getType() const { return (this->_type); }

Animal& Animal::operator=(const Animal& src) {
	this->_type = src._type;
	return *this;
}

void Animal::makeSound() const {};


