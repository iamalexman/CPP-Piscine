#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();

	Fixed& operator= (const Fixed &fixed);
	Fixed operator- (const Fixed &fixed) const;
	Fixed operator+ (const Fixed &fixed) const;
	Fixed operator* (const Fixed &fixed) const;
	Fixed operator/ (const Fixed &fixed) const;

	bool operator< (const Fixed &fixed) const;
	bool operator> (const Fixed &fixed) const;
	bool operator<= (const Fixed &fixed) const;
	bool operator>= (const Fixed &fixed) const;
	bool operator== (const Fixed &fixed) const;
	bool operator!= (const Fixed &fixed) const;

	Fixed operator++ (int);
	Fixed operator-- (int);
	Fixed operator++ (void);
	Fixed operator-- (void);

	static Fixed& max(Fixed &a, Fixed &b);
	static Fixed& min(Fixed &a, Fixed &b);
	const Fixed& max(Fixed const &a, Fixed const &b);
	const Fixed& min(Fixed const &a, Fixed const &b);

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
private:
	int fixedInt;
	static const int numBits = 8;
};
std::ostream & operator <<(std::ostream &out, const Fixed &fixed);

#endif
