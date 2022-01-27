#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Name ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap() {
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Name ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() { std::cout << "Default ScavTrap destructor called" << std::endl; }

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	std::cout << "Assignement operator called" <<std::endl;
	std::cout << other << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage!" <<  std::endl;
}

void ScavTrap::guardGate() { std::cout << "ScavTrap " << this->_name << " enterred in Gate keeper mode!" << std::endl; }
