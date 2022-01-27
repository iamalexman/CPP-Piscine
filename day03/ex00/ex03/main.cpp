#include "DiamondTrap.hpp"

int main() {
	{
		DiamondTrap t1000("T1000");

		std::cout << std::endl;

		t1000.attack("T100");
		t1000.takeDamage(6);
		t1000.beRepaired(4);
		t1000.takeDamage(3);
		t1000.guardGate();
		t1000.highFivesGuys();
		t1000.whoAmI();
		t1000.beRepaired(8);
		t1000.takeDamage(17);

		std::cout << std::endl;
	}
	std::cout << "......................................................." <<std::endl;
	{
		FragTrap t100("T100");

		std::cout << std::endl;

		t100.attack("T1000");
		t100.takeDamage(6);
		t100.beRepaired(4);
		t100.takeDamage(3);
		t100.highFivesGuys();
		t100.beRepaired(8);
		t100.takeDamage(17);

		std::cout << std::endl;
	}
	std::cout << "......................................................." <<std::endl;
	{
		ScavTrap t900("T900");

		std::cout << std::endl;

		t900.attack("T1000");
		t900.takeDamage(6);
		t900.beRepaired(4);
		t900.takeDamage(3);
		t900.guardGate();
		t900.beRepaired(8);
		t900.takeDamage(17);

		std::cout << std::endl;
	}
	std::cout << "......................................................." <<std::endl;
	{
		ClapTrap t800("T800");

		std::cout << std::endl;

		t800.attack("T100");
		t800.takeDamage(6);
		t800.beRepaired(4);
		t800.takeDamage(3);
		t800.beRepaired(8);
		t800.takeDamage(17);

		std::cout << std::endl;
	}
	return 0;
}
