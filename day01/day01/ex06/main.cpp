#include "Karen.hpp"

int main(int ac, char **av) {
	Karen karen;

	if (ac != 2) {
		std::cout << "Error: arguments" << std::endl;
		return 1;
	}
	else
		karen.complain(av[1]);
	return 0;
}
