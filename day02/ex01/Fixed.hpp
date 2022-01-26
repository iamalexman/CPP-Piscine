#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	int getRawBits (void) const;
	void setRawBits (int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed &operator= (const Fixed &fixed);

private:
	int fixedInt;
	static const int numBits = 8;
};
std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif
