#include "Converter.hpp"

// Constructors, destructors

Converter::Converter() {};

Converter::Converter(std::string const &val) : _val(std::atof(val.c_str())) {}

Converter::Converter(const Converter &other) { (void)other; }

Converter::~Converter() {};

// Overloads

Converter &Converter::operator=(const Converter &other) {
	if (this == &other)
		return *this;
	return *this;
}

char Converter::toChar() {
	char c = static_cast<char>(_val);

	if (_val == std::numeric_limits<float>::infinity() || _val == -std::numeric_limits<float>::infinity() || std::isnan(_val))
		throw std::string("impossible");
	else if (c < 32 || c > 126)
		throw std::string ("Non displayable");
	return c;
}

int Converter::toInt() {
	int i = static_cast<char>(_val);

	if (_val == std::numeric_limits<float>::infinity() || _val == -std::numeric_limits<float>::infinity() || std::isnan(_val))
		throw std::string("impossible");
	return i;
}

float Converter::toFloat() { return static_cast<float>(_val); }

double Converter::toDouble() { return static_cast<double>(_val); }

// Exception

Converter::Exception::Exception() throw() {}
Converter::Exception::Exception(const Exception &e) throw() { (void)e; }
Converter::Exception::~Exception() throw() {}

Converter::Exception &Converter::Exception::operator=(const Exception &e) throw() {
	if (this == &e)
		return *this;
	return *this;
}
const char *Converter::Exception::what() const throw() { return "This format isn't convertible and value is non displayable!"; }


