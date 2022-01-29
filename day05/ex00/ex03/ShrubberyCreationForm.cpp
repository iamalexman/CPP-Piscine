#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form(form) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this == &other)
		return *this;
	Form::operator=(other);
	return *this;
}

void ShrubberyCreationForm::beExecuted() const {
	std::ofstream file;
	file.open(std::string(this->getTarget() + "_shrubbery").c_str(), std::ios::app);
	if (file.is_open()) {
		file << "     ****     " << std::endl;
		file << "   ********   " << std::endl;
		file << " ************ " << std::endl;
		file << " ************ " << std::endl;
		file << "   ********   " << std::endl;
		file << "     ****     " << std::endl;
		file << "    * || **   " << std::endl;
		file << "     L|| **   " << std::endl;
		file << "      ||_|    " << std::endl;
		file << "      ||      " << std::endl;
		file << "    \\||//    " << std::endl;
		file << "    ''''''    " << std::endl;
		file.close();
	} else
		std::cout << "Error: can't open file" << std::endl;
}
