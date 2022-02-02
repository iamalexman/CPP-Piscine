#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {
	std::vector<int> vect;
	std::vector<int>::iterator i;

	vect.push_back(1);
	vect.push_back(8);
	vect.push_back(-3);
	vect.push_back(3);
	vect.push_back(0);
	vect.push_back(-8);
	vect.push_back(12);
	vect.push_back(6);

	std::vector<int>::iterator FindV = easyfind(vect, -8);
	for (i = vect.begin(); i != vect.end(); ++i) {
		if (*i == *FindV)
			std::cout << "[" << *i << "] ";
		else
			std::cout << *i << ' ';
	}
	std::cout << std::endl;
	std::cout << "Search:   " << *FindV << std::endl;
	std::cout << "Previous: " << *(FindV - 1) << std::endl;
	std::cout << "Next:     " << *(++FindV) << std::endl << std::endl;

	std::list<int> lst;
	std::list<int>::iterator it;

	lst.push_back(1);
	lst.push_back(8);
	lst.push_back(-3);
	lst.push_back(3);
	lst.push_back(0);
	lst.push_back(-8);
	lst.push_back(12);
	lst.push_back(6);

	std::list<int>::iterator FindL = easyfind(lst, -3);
	for (it = lst.begin(); it != lst.end(); ++it) {
		if (*it == *FindL)
			std::cout << "[" << *it << "] ";
		else
			std::cout << *it << ' ';
	}
	std::cout << std::endl;
	std::cout << "Search:   " << *FindL << std::endl;
	std::cout << "Previous: " << *(--FindL) << std::endl;
	std::cout << "Next:     " << *++(++FindL) << std::endl << std::endl;

	std::vector<int> vector;
	std::vector<int>::iterator iter;
	try {
		std::vector<int>::iterator FindV = easyfind(vector, 100);
		for (i = vector.begin(); i != vector.end(); ++i) {
			if (*iter == *FindV)
				std::cout << "[" << *iter << "] ";
			else
				std::cout << *iter << ' ';
		}
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
