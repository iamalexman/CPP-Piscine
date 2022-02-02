#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class Span {
private:
	unsigned int maxVals;
	std::vector <int> _vals;

	Span();

public:
	Span(unsigned int const &N);
	Span(const Span &span);
	virtual ~Span();

	Span &operator=(const Span &span);

	void addNumber(int n);
	long shortestSpan();
	long longestSpan();

	template <typename InputIter>
	void addNumber(InputIter begin, InputIter end);

	class Exception: public std::exception {
		virtual const char *what() const throw() { return "Don't have space to add"; }
	};

	class Exception1: public std::exception {
		virtual const char *what() const throw() { return "Span is full"; }
	};

	class Exception2: public std::exception {
		virtual const char *what() const throw() { return "Too few values to make span"; }
	};
};

template<class InputIter>
void Span::addNumber(InputIter begin, InputIter end) {
	int numbersOfElements = (int)std::distance(_vals.begin(), _vals.end());

	if (numbersOfElements + _vals.size() > maxVals)
		throw Exception();
	_vals.insert(_vals.end(), begin, end);
}

#endif
