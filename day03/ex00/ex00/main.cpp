#include "ClapTrap.hpp"

int main() {
	ClapTrap t1000 ("T1000");

	t1000.attack("T100");
	t1000.takeDamage(4);
	t1000.beRepaired(5);
	t1000.takeDamage(3);
	t1000.beRepaired(2);

	return 0;
}
