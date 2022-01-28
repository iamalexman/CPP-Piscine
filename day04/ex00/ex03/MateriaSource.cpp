#include "MateriaSource.hpp"

/* Constructor, copy and destructor */
MateriaSource::MateriaSource(void) {
	for (int i = 0; i < MateriaSource::bufferSize; i++)
		this->buffer[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	for (int i = 0; i < MateriaSource::bufferSize; i++)
		if (src.buffer[i])
			this->buffer[i] = src.buffer[i]->clone();
		else
			this->buffer[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MateriaSource::bufferSize; i++)
		if (this->buffer[i])
			delete (this->buffer[i]);
}

/* Assigment overload */

MateriaSource& MateriaSource::operator=(const MateriaSource& ms) {
	for (int i = 0; i < MateriaSource::bufferSize; i++)
	{
		if (this->buffer[i])
			delete (this->buffer[i]);
		if (ms.buffer[i])
			this->buffer[i] = ms.buffer[i]->clone();
		else
			this->buffer[i] = 0;
	}
	return (*this);
}

/* Virtual methods */
void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < MateriaSource::bufferSize; i++)
	{
		if (this->buffer[i] == NULL)
		{
			this->buffer[i] = m;
			break;
		}
		else if (this->buffer[i]->getType() == m->getType())
			break;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < MateriaSource::bufferSize; i++)
		if (this->buffer[i] && this->buffer[i]->getType() == type)
			return (this->buffer[i]->clone());
	return (NULL);
}


