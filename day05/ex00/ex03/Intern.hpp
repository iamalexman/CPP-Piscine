#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &intern);
	virtual ~Intern();
	
	Intern &operator=(const Intern &intern);
	Form *makeForm(std::string const &formName, std::string const &target);
};

#endif
