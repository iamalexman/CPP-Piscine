#include "Fixed.hpp"

Fixed::Fixed() {this->fixedInt = 0;}

Fixed::Fixed(const Fixed &fixed) {*this = fixed;}

Fixed::Fixed(const int val) {this->fixedInt = roundf(val * (1 << this->numBits));}

Fixed::Fixed(const float val) {this->fixedInt = roundf(val * (1 << this->numBits));}

Fixed::~Fixed(void) {}

int Fixed::getRawBits() const {return (this->fixedInt);}

void Fixed::setRawBits(const int raw) {this->fixedInt = raw;}

float Fixed::toFloat(void) const {return ((float)this->fixedInt / (float)(1 << this->numBits));}

int Fixed::toInt(void) const {return (int)this->toFloat();}

Fixed &Fixed::operator =(const Fixed &fixed) {
	if (this == &fixed)
		return *this;
	this->fixedInt = fixed.getRawBits();
	return *this;
}

std::ostream& operator <<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

Fixed Fixed::operator- (const Fixed &fixed) const {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() - fixed.getRawBits());
	return tmp;;
}

Fixed Fixed::operator+ (const Fixed &fixed) const {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() + fixed.getRawBits());
	return tmp;;
}

Fixed Fixed::operator* (const Fixed &fixed) const {
	Fixed tmp;
	tmp.setRawBits((this->getRawBits() * fixed.getRawBits()) >> this->numBits);
	return tmp;;
}

Fixed Fixed::operator/ (const Fixed &fixed) const {
	Fixed tmp;
	tmp.setRawBits((this->getRawBits() << this->numBits) / fixed.getRawBits());
	return tmp;;
}

bool Fixed::operator< (const Fixed &fixed) const {return (this->getRawBits() < fixed.getRawBits());}

bool Fixed::operator> (const Fixed &fixed) const {return (this->getRawBits() > fixed.getRawBits());}

bool Fixed::operator<= (const Fixed &fixed) const {return (this->getRawBits() <= fixed.getRawBits());}

bool Fixed::operator>= (const Fixed &fixed) const {return (this->getRawBits() >= fixed.getRawBits());}

bool Fixed::operator== (const Fixed &fixed) const {return (this->getRawBits() == fixed.getRawBits());}

bool Fixed::operator!= (const Fixed &fixed) const {return (this->getRawBits() != fixed.getRawBits());}

Fixed Fixed::operator++ (int) {
	Fixed tmp(*this);
	tmp.fixedInt = this->fixedInt++;
	return tmp;
}

Fixed Fixed::operator-- (int) {
	Fixed tmp(*this);
	tmp.fixedInt = this->fixedInt--;
	return tmp;
}

Fixed Fixed::operator++ (void) {
	this->fixedInt++;
	return *this;
}

Fixed Fixed::operator-- (void) {
	this->fixedInt--;
	return *this;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {return (a > b ? a : b);}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b) {
	if (a > b)
		return b;
	return a;
}
