#ifndef STRUCTDATA_HPP
#define STRUCTDATA_HPP

#include <iostream>

struct Data { std::string str1; std::string str2; };

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
