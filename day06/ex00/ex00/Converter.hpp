#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

class Converter {
public:
	float _val;

	Converter();
	Converter(std::string const &val);
	Converter(const Converter &other);
	virtual ~Converter();
	Converter &operator=(const Converter &other);

	class Exception : public std::exception {
	public:
		Exception() throw();
		Exception(const Exception &e) throw();
		Exception &operator=(const Exception &e) throw();
		virtual~ Exception() throw();
		virtual const char *what() const throw();
	};

	char toChar();
	int toInt();
	float toFloat();
	double toDouble();
};

#endif
