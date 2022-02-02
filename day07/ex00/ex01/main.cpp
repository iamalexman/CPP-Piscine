#include <iostream>

template <typename T>
void iter(T *array, int len, void (*foo)(T const &)) {
	for (int i = 0; i < len; ++i)
		foo(array[i]);
	std::cout << std::endl;
}

template <typename T>
void print (T const &t) {
	std::cout << t << "\t";
}

int main() {
	int intArr[] {1, 2, 3, 4, 5};
	std::string strArr[] = {"first", "second", "third", "forth", "fifth"};
	
	::iter<const int>(intArr, 5, print);
	std::cout << std::endl;
	::iter<const std::string>(strArr, 5, print);
	return 0;
}
