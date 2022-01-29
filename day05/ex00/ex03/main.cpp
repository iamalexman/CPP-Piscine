#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void testFormFoo(Bureaucrat &b, Form *form) {
	std::cout << std::endl << "Sign and Execute: " << form->getName() << std::endl;
	b.signForm(*form);
	b.executeForm(*form);
}

void testIntern(Intern &intern, const std::string &formName, const std::string &targetName) {
	Bureaucrat vova("Vova", 1);
	Form *testForm = 0;

	std::cout << std::endl;
	testForm = intern.makeForm(formName, targetName);
	if (testForm) {
		testFormFoo(vova, testForm);
		delete testForm;
	}
}

int main() {
	Intern randomIntern;

	testIntern(randomIntern, "shrubbery", "Grisha");
	testIntern(randomIntern, "robotomy", "Pasha");
	testIntern(randomIntern, "pardon", "Misha");
	testIntern(randomIntern, "paper", "No way!");
	return 0;
}
