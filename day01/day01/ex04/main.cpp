#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

void replace(std::string &s1, std::string &s2, std::string &filePath, std::ifstream &oldFile) {
	std::string strBuf;
	size_t pos;
	std::string tmp;
	std::ofstream newFile(filePath + ".replace");
	while (!oldFile.eof()) {
		getline (oldFile, strBuf);
		while (strBuf.find(s1) != std::string::npos) {
			pos = strBuf.find(s1);
			tmp.append(strBuf.substr(0, pos));
			tmp.append(s2);
			tmp.append(strBuf.substr(pos + s1.length()));
			strBuf = tmp;
			tmp.clear();
		}
		newFile << strBuf;
		if (!oldFile.eof())
			newFile << std::endl;
	}
	oldFile.close();
	newFile.close();
}

int main(int argc, char **argv) {

	std::string filePath, s1, s2;
	std::ifstream oldFile(filePath);

	if (argc != 4) {
		std::cout << "Error: wrong arguments" << std::endl;
		return 1;
	}
	filePath = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s1.empty()) {
		std::cout << "Error: arguments cannot be empty" << std::endl;
		return 1;
	}
	oldFile.open(filePath);
	// добавить ошибку если oldFile это директория, а не файл
	if (!oldFile.is_open()) {
		std::cout << "Error: cannot open file" << std::endl;
		return 1;
	}
	else
		replace (s1, s2, filePath, oldFile);
	return 0;
}
