#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Name ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &other) {
	std::cout << "Assignement operator called" <<std::endl;
	std::cout << other << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &myClass, ClapTrap const &instance) {
	myClass << "ClapTrap " << instance.getName();
	return myClass;
}

const std::string &ClapTrap::getName (void) const {return this->_name;}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage!" <<  std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_energyPoints -= amount;
	if (this->_energyPoints < 0)
		std::cout << "ClapTrap " << this->_name << " took " << amount << " critical damage " << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " took " << amount << " hit points " << this->_energyPoints << " energy points left "<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_energyPoints += amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " hit points " << this->_energyPoints << " energy points left "<< std::endl;
}
