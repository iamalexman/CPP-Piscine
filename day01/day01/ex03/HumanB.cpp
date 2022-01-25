#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

void HumanB::attack() const {
	std::cout << _name << " attack with his " << _weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }
