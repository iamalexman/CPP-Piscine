#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Name FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() { std::cout << "Default FragTrap destructor called" << std::endl; }

FragTrap &FragTrap::operator=(FragTrap const &other) {
	std::cout << "Assignement operator called" <<std::endl;
	std::cout << other << std::endl;
	return *this;
}

void FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap " << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage!" <<  std::endl;
}

void FragTrap::highFivesGuys() { std::cout << "High fives, dude!" << std::endl; }

