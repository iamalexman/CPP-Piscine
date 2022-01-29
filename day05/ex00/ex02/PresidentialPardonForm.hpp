#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class PresidentialPardonForm : public Form {
private:
	void beExecuted() const;

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	virtual~ PresidentialPardonForm();
	
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
};

#endif
