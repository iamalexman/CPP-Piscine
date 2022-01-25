#include "Karen.hpp"

Karen::Karen() {
	_messages[0] = "DEBUG";
	_messages[1] = "INFO";
	_messages[2] = "WARNING";
	_messages[3] = "ERROR";

	mem_func[0] = &Karen::debug;
	mem_func[1] = &Karen::info;
	mem_func[2] = &Karen::warning;
	mem_func[3] = &Karen::error;
}

void Karen::complain(std::string level) {
	int levels = -1;
	for (int i = 0; i < 4; ++i) {
		if (level == _messages[i]) {
			levels = i;
			break ;
		}
	}
	if (levels < 0) {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return ;
	}
	switch (levels) {
		case 0:
			(this->*mem_func[0])();
		case 1:
			(this->*mem_func[1])();
		case 2:
			(this->*mem_func[2])();
		case 3:
			(this->*mem_func[3])();
		default:
			break;
	}
}

void Karen::debug(void) {
	std::cout << "[ DEBUG ]" << '\n';
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << '\n';
	std::cout << "I just love it!" << '\n' << std::endl;
}

void Karen::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << '\n';
	std::cout << "You don’t put enough! If you did I would not have to ask for it!"
	<< '\n' << std::endl;
}

void Karen::warning(void) {
	std::cout << "[ WARNING ]" << '\n';
	std::cout << "I think I deserve to have some extra bacon for free." << '\n';
	std::cout <<"I’ve been coming here for years and you just started working here last month." << '\n' << std::endl;
}

void Karen::error(void) {
	std::cout << "[ ERROR ]" << '\n';
	std::cout << "This is unacceptable, I want to speak to the manager now." << '\n' << std::endl;
}


