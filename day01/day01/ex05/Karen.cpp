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
	for (int i = 0; i < 4; ++i) {
		if (level == _messages[i])
			(this->*mem_func[i])();
	}
}

void Karen::debug(void) {
	std::cout << "I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger. "
	"I just love it!" << std::endl;
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. "
	"You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. "
	"I’ve been coming here for years and you just started working "
	"here last month." << std::endl;
}

void Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


