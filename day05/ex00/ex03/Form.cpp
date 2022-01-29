#include "Form.hpp"

// Constructors, destructor

Form::Form(std::string const &name, int gradeToSign, int gradeToExec, std::string const &target) : _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _target(target){
	std::cout << name << " is ready ro use!" << std::endl;
	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &form) : _name(form._name), _sign(false), _gradeToSign(form._gradeToSign), _gradeToExec(form._gradeToExec), _target(form._target) {
	if (form._gradeToSign < 1 || form._gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (form._gradeToSign > 150 || form._gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

// Getter, setter, overload

Form &Form::operator=(Form const &other) {
	if (this == &other)
		return *this;
	if (other._gradeToSign < 1 || other._gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (other._gradeToSign > 150 || other._gradeToExec > 150)
		throw Form::GradeTooLowException();
	this->_name = other.getName();
	this->_sign = other.getSign();
	this->_gradeToSign = other.getGradeToSign();
	this->_gradeToExec = other.getGradeToExec();
	this->_target = other.getTarget();
	return *this;
}

std::ostream &operator<<(std::ostream &stream, Form const &other) {
	stream << other.getName() << " Form is";
	if (!other.getSign())
		stream << " not signed!";
	else
		stream << " signed!";
	stream << " This " << other.getName() << " Form is signable at grade: " << other.getGradeToSign();
	stream << ", and executable at grade: " << other.getGradeToExec() << ".";
	return stream;
}

const std::string &Form::getName() const { return _name; }
bool Form::getSign() const { return _sign; }
int Form::getGradeToSign() const { return _gradeToSign; }
int Form::getGradeToExec() const { return _gradeToExec; }
const std::string &Form::getTarget() const{ return _target; };

// Methods

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getRange() <= this->_gradeToSign)
		this->_sign = true;
	else
		throw Form::GradeTooLowException();
}

void Form::beExecuted() const {};

void Form::execute(Bureaucrat const &executor) const {
	if (!this->_sign)
		throw std::string ("the form is signed.");
	else if (executor.getRange() > this->_gradeToExec)
		throw std::string("grade is too low.");
	this->beExecuted();
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
