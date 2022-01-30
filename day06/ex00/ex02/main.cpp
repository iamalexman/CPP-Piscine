#include "Base.hpp"

int main() {

	Base *nonValid = new Base();
	if (!nonValid) {
		std::cout << "Error allocate" << std::endl;
		return -1;
	}
	std::cout << "Pointer:\t";
	identify(nonValid);
	std::cout << "Reference:\t";
	identify(*nonValid);
	std::cout<< std::endl;
	delete nonValid;

	Base *valid;
	valid = generate();
	if (!valid) {
		std::cout << "Error allocate" << std::endl;
		return -1;
	}
	std::cout << "Pointer:\t";
	identify(valid);
	std::cout << "Reference:\t";
	identify(*valid);
	delete valid;

	return 0;
}
