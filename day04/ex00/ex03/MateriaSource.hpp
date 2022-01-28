#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	static const int	bufferSize = 4;
	AMateria			*buffer[bufferSize];

public:
	MateriaSource ( void );
	MateriaSource ( const MateriaSource& src);
	virtual ~MateriaSource();

	MateriaSource&	operator=(const MateriaSource& src);

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);
};
