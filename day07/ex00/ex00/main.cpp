#include <iostream>

template <typename T>

const T& max (const T &a, const T &b) {
	if (a == b)
		return b;
	return (a > b) ? a : b;
}

template <typename T>

const T& min (const T &a, const T &b) {
	if (a == b)
		return b;
	return (a < b) ? a : b;
}

template <typename T>
void swap (T &a, T &b) {
	T c;

	c = a;
	a = b;
	b = c;
}

int main() {
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	return 0;
}
