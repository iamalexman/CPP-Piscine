#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int const &N) : maxVals(N) {}

Span::Span(const Span &other) : maxVals(other.maxVals), _vals(other._vals) {}

Span::~Span() {}

Span &Span::operator=(const Span &span) {
	if (this == &span)
		return *this;
	maxVals = span.maxVals;
	_vals = span._vals;
	return *this;
}

void Span::addNumber(int n) {
	if (_vals.size() < maxVals)
		_vals.push_back(n);
	else
		throw Span::Exception1();
	std::sort(_vals.begin(), _vals.end());
}

long Span::shortestSpan() {
	if (_vals.size() <= 1)
		throw Span::Exception2();

	long res = std::abs(_vals[1] - _vals[0]);
	size_t valSize = _vals.size();
	std::sort(_vals.begin(), _vals.end());

	for (size_t i = 0; i < valSize - 1; ++i)
		if (std::abs(_vals[i + 1] - _vals[i]) < res)
			res = std::abs(_vals[i + 1] - _vals[i]);
	return res;
}

long Span::longestSpan() {
	if (_vals.size() <= 1)
		throw Span::Exception2();
	std::vector <int>::iterator min;
	std::vector <int>::iterator max;

	min = std::min_element(_vals.begin(), _vals.end());
	max = std::max_element(_vals.begin(), _vals.end());
	long res = *min - *max;
	return (res < 0) ? -res : res;
}
