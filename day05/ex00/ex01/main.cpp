#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Form *spec = new Form("Speial", 10, 30);
	Form *toHigh;
	Form *toLow;

	std::cout << *spec << std::endl;
	try {
		toHigh = new Form("ToHigh", 0, 20);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		toLow = new Form("ToLow", 10, 160);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat *boris = new Bureaucrat("Boris", 5);
	boris->signForm(*spec);
	std::cout << *spec << std::endl;
	boris->signForm(*spec);

	Form *calendar = new Form("Calendar", 1, 1);
	Bureaucrat *vova = new Bureaucrat("Vova", 12);

	vova->signForm(*calendar);

	delete spec;
	delete boris;
	delete calendar;
	delete vova;
	return 0;
}
