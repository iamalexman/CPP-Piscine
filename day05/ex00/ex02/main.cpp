#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void testForm(Bureaucrat *b, Form *form) {
	std::cout << std::endl << "Sign and Execute: " << form->getName() << std::endl;
	b->signForm(*form);
	b->executeForm(*form);
}

int main() {
	ShrubberyCreationForm *creator = new ShrubberyCreationForm("Creator");
	RobotomyRequestForm *request = new RobotomyRequestForm("Request");
	PresidentialPardonForm *pardon = new PresidentialPardonForm("Pardon");

	Bureaucrat *vova = new Bureaucrat("Vova", 120);
	Bureaucrat *pasha = new Bureaucrat("Pasha", 33);
	Bureaucrat *dima = new Bureaucrat("Dima", 1);

	std::cout << std::endl << "Already signed and ToLow: " << std::endl;

	testForm(vova, pardon);
	testForm(pasha, request);
	testForm(dima, creator);

	delete creator;
	delete request;
	delete pardon;
	delete vova;
	delete pasha;
	delete dima;

	return 0;
}
