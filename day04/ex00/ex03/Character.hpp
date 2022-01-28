#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : virtual ICharacter {
private:
	static const int	inventorySize = 4;
	AMateria			*inventory[inventorySize];

	std::string _name;

public:
	Character(const std::string& name);
	Character(const Character& src);
	virtual ~Character();

	Character& operator=(const Character &src);

	virtual std::string const& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
