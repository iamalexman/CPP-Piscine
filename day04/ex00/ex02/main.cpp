#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const int	array_size = 10;
	Animal		*array[array_size];

	int	i;
	for (i = 0; i * 2 < array_size; ++i)
		array[i] = new Dog();
	for ( ; i < array_size; ++i)
		array[i] = new Cat();
	for (i = 0; i < array_size; ++i)
		array[i]->makeSound();
	for (i = 0; i < array_size; ++i)
		delete array[i];

	Dog a;
	Dog b(a);
	Cat c;
	Cat d(c);

	a = b;
	c = d;

//  subject main example

	const Animal* j = new Dog();
	const Animal* k = new Cat();
	delete j;
	delete k;

//	new Animal(); // not work because Animal is abstract class

	return 0;
}
