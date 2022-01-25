#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen {
	void (Karen::*mem_func[4])(void);
	std::string _messages[4];

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Karen();
	void complain(std::string level);
};

#endif
