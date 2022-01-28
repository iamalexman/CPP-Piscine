#include "Character.hpp"

// constr, destr
Character::Character(const std::string& name) : _name(name) {
	for (int i = 0; i < Character::inventorySize; ++i)
		this->inventory[i] = 0;
}

Character::Character(const Character& src) { *this = src; }

Character::~Character() {
	for (int i = 0; i < Character::inventorySize; ++i)
		if (this->inventory[i])
			delete this->inventory[i];
}

//overload
Character& Character::operator=(const Character& src) {
	this->_name = src._name;

	for (int i = 0; i < Character::inventorySize; ++i) {
		if (this->inventory[i])
			delete this->inventory[i];
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
		else
			this->inventory[i] = 0;
	}
	return *this;
}
//methods

std::string const& Character::getName() const { return this->_name; }

void Character::equip(AMateria* m) {
	int i = 0;
	for (; i < Character::inventorySize && this->inventory[i]; ++i)
		;
	if (i < Character::inventorySize)
		this->inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx < Character::inventorySize)
		this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < Character::inventorySize && this->inventory[idx])
		this->inventory[idx]->use(target);
}
