#include "Converter.hpp"

int main(int ac, char **av) {

	float value;

	if (ac == 2) {
		Converter converter(av[1]);

		try {
			value = converter._val;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
			return -1;
		}

		try {
			char c = converter.toChar();
			std::cout << "char:\t" << c << std::endl;
		} catch (std::string &e) {
			std::cout << "char:\t" << e << std::endl;
		}

		try {
			std::cout << "int:\t" << converter.toInt() << std::endl;
		} catch (std::string &e) {
			std::cout << e << std::endl;
		}

		float f = converter.toFloat();
		if (f - static_cast<int>(f) != (float)0)
			std::cout << "float:\t" << converter.toFloat() << "f" << std::endl;
		else
			std::cout << "float:\t" << converter.toFloat() << ".0f" << std::endl;

		double d = converter.toDouble();
		if (d - static_cast<int>(d) != (double)0)
			std::cout << "double:\t" << converter.toDouble() << std::endl;
		else
			std::cout << "double:\t" << converter.toFloat() << ".0" << std::endl;
	}
	else
		std::cout << "Error argument!" << std::endl;
	return 0;
}
