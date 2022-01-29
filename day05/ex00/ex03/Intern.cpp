#include "Intern.hpp"

Form* createShrubberyCreationForm(std::string const &target) { return new ShrubberyCreationForm(target); }
Form* createRobotomyRequestForm(std::string const &target) { return new RobotomyRequestForm(target); }
Form* createPresidentialPardonForm(std::string const &target) { return new PresidentialPardonForm(target); }

Intern::Intern() {}

Intern::Intern(const Intern &intern) { (void)intern; }

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &intern) {
	if (this == &intern)
		return *this;
	return *this;
}

Form* Intern::makeForm(const std::string &formName, const std::string &target) {
	Form *newForm;
	typedef Form* (*foo)(std::string const &target);
	typedef struct { std::string formName; foo foo; } FormTypes;

	newForm = 0;
	FormTypes forms[] = {
		{"shrubbery", &createShrubberyCreationForm},
		{"robotomy", &createRobotomyRequestForm},
		{"pardon", &createPresidentialPardonForm}
	};
	for (int i = 0; i < 3; ++i)
		if (forms[i].formName == formName) {
			newForm = forms[i].foo(target);
			std::cout << "Intern create " << newForm->getName();
			return newForm;
		}
	std::cout << "Intern didn't create " << formName << " Form" << std::endl;
	return newForm;
}
