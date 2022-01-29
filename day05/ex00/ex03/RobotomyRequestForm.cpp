#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45, target) { srand((unsigned int)time(0)); }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : Form(form.getName(), form.getGradeToSign(), form.getGradeToExec(), form.getTarget()) { srand((unsigned int)time(0)); }

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this == &other)
		return *this;
	Form::operator=(other);
	return *this;
}

void RobotomyRequestForm::beExecuted() const {
	std::cout << "Bzzzggg...bzzzgg...bzggggggzzz..bzz..." << std::endl;
	if ((1 + (rand() % 3)) == 2)
		std::cout << this->getTarget() << " was robotized!" << std::endl;
	else
		std::cout << "This robotization is incomplete!" << std::endl;
}
