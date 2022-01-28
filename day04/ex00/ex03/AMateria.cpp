#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria& src) { *this = src; };

AMateria::~AMateria() {}

std::string const& AMateria::getType() const { return this->_type; }

void AMateria::use(ICharacter& target) { (void)target; }
