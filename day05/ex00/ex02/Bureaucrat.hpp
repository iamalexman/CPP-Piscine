#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	std::string	_name;
	int			_range;

public:
	Bureaucrat(const std::string &name, int range);
	Bureaucrat(const Bureaucrat &src);
	virtual ~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &other);

	const std::string &getName() const;
	int getRange() const;

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException() throw();
		GradeTooHighException(const GradeTooHighException &grade) throw();
		GradeTooHighException& operator=(const GradeTooHighException &grade) throw();
		virtual ~GradeTooHighException() throw();
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException() throw();
		GradeTooLowException(const GradeTooLowException &grade) throw();
		GradeTooLowException& operator=(const GradeTooLowException &grade) throw();
		virtual ~GradeTooLowException() throw();
		virtual const char *what() const throw();
	};

	void upGrade();
	void downGrade();
	void signForm(Form &form);
	void executeForm(Form const &form);
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &other);

#endif
