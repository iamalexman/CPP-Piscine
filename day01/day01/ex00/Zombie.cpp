#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

void Zombie::announce() const {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << '\n';
}
Zombie::~Zombie(){
	std::cout << this->_name << " is died" << '\n';
}
