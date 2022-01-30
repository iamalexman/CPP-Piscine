#include "StructData.hpp"

int main() {
	Data *data = new Data();
	data->str1 = "First string";
	data->str2 = "Second string";
	uintptr_t serialized = serialize(data);

	std::cout << "Data adress:  " << data << std::endl;
	std::cout << "Serialized:   " << serialized << std::endl;
	std::cout << "Desirealized: " << deserialize(serialized) << std::endl;
	std::cout << "Desirealized: " << deserialize(serialized)->str1 << std::endl;
	std::cout << "Desirealized: " << deserialize(serialized)->str2 << std::endl;
	return 0;
}
