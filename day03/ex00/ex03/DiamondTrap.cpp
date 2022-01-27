#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) {
	ClapTrap::_name = name + "_clap name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Name DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap() { std::cout << "Default DiamondTrap destructor called" << std::endl; }

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap() { std::cout << "Default DiamondTrap destructor called" << std::endl; }

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other) {
	std::cout << "Assignement operator called" <<std::endl;
	std::cout << other << std::endl;
	return *this;
}

void DiamondTrap::attack(const std::string &target) { ScavTrap::attack(target); }

void DiamondTrap::whoAmI() { std::cout << "My name is " << this->_name << " and my Parents name is " << ClapTrap::_name << std::endl; }
