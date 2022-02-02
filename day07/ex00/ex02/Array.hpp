#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array {
private:
	int len;
	T *data;

public:
	Array() {
		len = 0;
		data = new T[0]();
	};

	Array(unsigned int n) {
		data = new T[n];
		len = n;
	};

	Array(const Array &copy) {
		this->data = new T[copy.size()]();
		this->len = copy.size();
		for (int i = 0; i < this->size(); ++i)
			this->data[i] = copy.data[i];
	};

	virtual ~Array() { delete [] data; };

	T &operator[](unsigned int index) {
		if (index > static_cast<unsigned int>(this->len) - 1)
			throw Exception();
		return this->data[index];
	}

	int size() const { return this->len; };

	class Exception : public std::exception {
	public:
		Exception() throw() {};
		Exception(const Exception&) throw() {};
		Exception &operator=(const Exception&) throw() {};
		virtual ~Exception() throw() {};
		virtual const char *what() const throw() { return "Error: bad Value!"; };
	};
};

#endif
