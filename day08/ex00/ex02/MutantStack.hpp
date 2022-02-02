#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack <T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack &stack) : std::stack<T> (stack) {};
	virtual ~MutantStack() {};

	MutantStack &operator=(const MutantStack &op) {
		if (this == &op)
			return *this;
		std::stack<T>::operator=(op);
		return *this;
	}

	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
	reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
	reverse_iterator rend() { return std::stack<T>::c.rend(); }
};

#endif
