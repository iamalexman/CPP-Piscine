#include "Span.hpp"

void printVector(Span &, std::vector <int> vec) {
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end() ; ++it)
		std::cout<< *it << ' ';
	std::cout << std::endl << std::endl;
}

int main() {
	srand((uint)time(0));
	Span span = Span(5);

	span.addNumber(6);
	span.addNumber(3);
	span.addNumber(17);
	span.addNumber(9);
	span.addNumber(11);

	std::cout << "Shortest span is: " << span.shortestSpan() << std::endl;
	std::cout << "Longest span is:  " << span.longestSpan() << std::endl << std::endl;

	std::vector<int> tmp;
	Span spanBig(10);

	for(int i = 0; i < 10; ++i)
		tmp.push_back(rand() % 100000);
	spanBig.addNumber(tmp.begin(), tmp.end());

	printVector(spanBig, tmp);

	std::cout << "Shortest span is: " << spanBig.shortestSpan() << std::endl;
	std::cout << "Longest span is:  " << spanBig.longestSpan() << std::endl;

	return 0;
}
