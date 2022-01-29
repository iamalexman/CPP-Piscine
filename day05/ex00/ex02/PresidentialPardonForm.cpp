#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : Form(form.getName(), form.getGradeToSign(), form.getGradeToExec(), form.getTarget()) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this == &other)
		return *this;
	Form::operator=(other);
	return *this;
}

void PresidentialPardonForm::beExecuted() const {
	std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox." << std::endl;
}
