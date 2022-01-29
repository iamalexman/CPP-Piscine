#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	std::string _name;
	bool		_sign;
	int			_gradeToSign;
	int			_gradeToExec;

public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(const Form &form);
	virtual ~Form();

	Form &operator=(const Form &other);

	const std::string &getName() const;
	bool getSign() const;
	int getGradeToSign() const;
	int getGradeToExec() const;

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException() throw();
		GradeTooHighException(const GradeTooHighException &grade) throw();
		GradeTooHighException &operator=(const GradeTooHighException &grade) throw();
		virtual ~GradeTooHighException() throw();
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException() throw();
		GradeTooLowException(const GradeTooLowException &grade) throw();
		GradeTooLowException &operator=(const GradeTooLowException &grade) throw();
		virtual ~GradeTooLowException() throw();
		virtual const char *what() const throw();
	};

	void beSigned(Bureaucrat const &bureaucrat);
};

std::ostream &operator<<(std::ostream &stream, const Form &other);

#endif
