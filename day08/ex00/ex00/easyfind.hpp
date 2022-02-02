#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

class Exception : public std::exception {
	virtual const char *what() const throw() { return "Couldn't find this element"; }
};

template <typename T>
typename T::iterator easyfind (T &container, int val) {
	if (std::find(container.begin(), container.end(), val) != container.end())
		return std::find(container.begin(), container.end(), val);
	else
		throw Exception();
}

#endif
