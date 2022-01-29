#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>

class RobotomyRequestForm : public Form {
private:
	void beExecuted() const;

public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(const RobotomyRequestForm &form);
	virtual ~RobotomyRequestForm();
	
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
};

#endif
