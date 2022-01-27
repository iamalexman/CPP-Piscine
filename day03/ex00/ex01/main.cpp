#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	{
		ScavTrap t1000 ("T1000");

		t1000.attack("T100");
		t1000.takeDamage(4);
		t1000.beRepaired(5);
		t1000.takeDamage(3);
		t1000.guardGate();
		t1000.beRepaired(2);
	}
	std::cout << std::endl;
	{
		ClapTrap t100 ("T100");

		t100.attack("T1000");
		t100.takeDamage(4);
		t100.beRepaired(5);
		t100.takeDamage(3);
		t100.beRepaired(2);
	}
	return 0;
}
