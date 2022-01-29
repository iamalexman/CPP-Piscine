#include "Bureaucrat.hpp"

int main() {
	Bureaucrat *boris = new Bureaucrat("Boris", 2);
	{
		try {
			std::cout << *boris;
			boris->upGrade();
			std::cout << boris->getName() << " upgraded!" << std::endl;
			std::cout << *boris;
			boris->upGrade();
			std::cout << "Exception doesn't work." << std::endl;
		} catch (std::exception & e) {
			std::cerr << " Exception: " << e.what() << std::endl;
		}
		std::cout << '\n';
	}

	Bureaucrat *max = new Bureaucrat("Max", 150);
	{
		try {
			std::cout << *max;
			max->downGrade();
			std::cout << max->getName() << " upgraded!" << std::endl;
			std::cout << *max;
			max->downGrade();
			std::cout << "Exception doesn't work." << std::endl;
		} catch (std::exception & e) {
			std::cerr << " Exception: " << e.what() << std::endl;
		}
		std::cout << '\n';
	}

	Bureaucrat *toHigh;
	{
		try {
			toHigh = new Bureaucrat("ToHigh", 0);
			std::cerr << "Exceptiopn doesn't work." << std::endl;
		} catch (std::exception & e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << '\n';
	}

	Bureaucrat *toLow;
	{
		try {
			toLow = new Bureaucrat("ToLow", 160);
			std::cerr << "Exceptiopn doesn't work." << std::endl;
		} catch (std::exception & e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	delete boris;
	delete max;
	return 0;
}
