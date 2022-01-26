#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b(111.11f);
	Fixed const b2(Fixed(5.05f) * Fixed(2));
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed x(100);

	std::cout << "a = "<< a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "b2 = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = "<< d << std::endl;
	std::cout << "x = "<< x << std::endl << std::endl;

	// + - * /
	std::cout << "b - c = "<< b - c << std::endl;
	std::cout << "b + c = "<< b + c << std::endl;
	std::cout << "b * c = "<< b * c << std::endl;
	std::cout << "b / c = "<< b / c << std::endl << std::endl;

	// > < >= <= != ==
	std::cout << "b > d = "<< (b > d) << std::endl;
	std::cout << "b < d = "<< (b< d) << std::endl;
	std::cout << "b <= d = "<< (b <= d) << std::endl;
	std::cout << "b >= d = "<< (b >= d) << std::endl;
	std::cout << "b == d = "<< (b == d) << std::endl;
	std::cout << "b != d = "<< (b != d) << std::endl << std::endl;

	// ++i --i i++ i--
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b2 << std::endl;
	std::cout << x++ << std::endl;
	std::cout << x << std::endl;
	std::cout << ++x << std::endl << std::endl;

	// max min
	std::cout << "Max " << Fixed::max(a, x) << std::endl;
	std::cout << "Min " << Fixed::min(a, x) << std::endl;

	return 0;
}
