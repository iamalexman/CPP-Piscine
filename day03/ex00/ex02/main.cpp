#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	{
		FragTrap t1 ("T1");

		t1.attack("T1000");
		t1.takeDamage(4);
		t1.beRepaired(5);
		t1.takeDamage(3);
		t1.highFivesGuys();
		t1.beRepaired(2);
	}
	std::cout << std::endl;
	{
		ScavTrap t1000 ("T1000");
		ScavTrap t1;
		t1 = t1000;
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
