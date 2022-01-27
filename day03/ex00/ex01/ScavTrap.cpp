#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Name ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	std::cout << "Assignement operator called" <<std::endl;
	std::cout << other << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage!" <<  std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap enterred in Gate keeper mode!" << std::endl;
}
