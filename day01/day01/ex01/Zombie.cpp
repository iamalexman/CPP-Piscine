#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie() {
	std::cout << this->_name << " is died" << '\n';
}

void Zombie::announce() const {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << '\n';
}

void Zombie::setName(std::string name) {
	this->_name = name;
}
