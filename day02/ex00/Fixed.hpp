#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:
	int getRawBits (void) const;
	void setRawBits (int const raw);

	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed &operator= (const Fixed &fixed);

private:
	int fixedInt;
	static const int numBits = 8;
};

#endif
