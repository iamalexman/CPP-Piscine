#include "Form.hpp"

// Constructors, destructor

Form::Form () {}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << _name << " Form is ready ro use!" << std::endl;
	_sign = false;
}

Form::Form(const Form &form) { *this = form; }

Form::~Form() {}

// Getter, setter, overload

Form &Form::operator=(Form const &other) {
	if (this == &other)
		return *this;
	this->_name = other.getName();
	this->_gradeToSign = other.getGradeToSign();
	this->_gradeToExec = other.getGradeToExec();
	return *this;
}

std::ostream &operator<<(std::ostream &stream, Form const &myForm) {
	stream << myForm.getName() << " Form is";
	if (!myForm.getSign())
		stream << " not signed!";
	else
		stream << " signed!";
	stream << " This " << myForm.getName() << " Form is signable at grade: " << myForm.getGradeToSign();
	stream << ", and executable at grade: " << myForm.getGradeToExec() << ".";
	return stream;
}

const std::string &Form::getName() const { return _name; }
bool Form::getSign() const { return _sign; }
int Form::getGradeToSign() const { return _gradeToSign; }
int Form::getGradeToExec() const { return _gradeToExec; }

// Methods

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getRange() <= this->_gradeToSign)
		this->_sign = true;
	else
		throw GradeTooLowException();
}

// ToHighGradeException

Form::GradeTooHighException::GradeTooHighException() throw() {}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &) throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &grade) throw() {
	if (this == &grade)
		return *this;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw() { return "Grade is too high for this Form!"; }

// ToLowGradeException

Form::GradeTooLowException::GradeTooLowException() throw() {}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &) throw() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &grade) throw() {
	if (this == &grade)
		return *this;
	return *this;
}

const char *Form::GradeTooLowException::what() const throw() { return "Grade is too low for this Form!"; }
