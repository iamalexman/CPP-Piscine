#include "Base.hpp"

Base::~Base() {}

Base *generate(void) {
	int i;

	srand((uint)time(0));
	i = rand() % 3 + 1;
	switch (i) {
		case 1:
			return new A;
		case 2:
			return new B;
		case 3:
			return new C;
	}
	return 0;
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != 0)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != 0)
		std::cout << "C" << std::endl;
	else
		std::cout << "Error" << std::endl;
}

void identify(Base &p) {
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error" << std::endl;
}
