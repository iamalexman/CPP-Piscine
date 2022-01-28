#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &src);
	virtual ~Animal();

	Animal& operator=(const Animal& src);

	const std::string& getType() const;
	virtual void makeSound() const = 0;
};

#endif
