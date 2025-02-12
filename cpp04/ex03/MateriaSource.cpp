#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materiasource constructor called" << std::endl;
	for(int n = 0; n < 4; n++)
	{
		this->memory[n] = NULL;
	}
}
MateriaSource::MateriaSource(const MateriaSource &other) : IMateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (other.memory[i])
            this->memory[i] = other.memory[i]->clone();
        else
            this->memory[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "copy operator called" << std::endl;

    if (this == &other)
	{
		std::cout << "Self-assignment detected, skipping copy." << std::endl;
        return (*this);
	}
	for (int i = 0; i < 4; i++)
    {
        if (this->memory[i])
        {
            delete this->memory[i];
            this->memory[i] = NULL;
        }
    }
	for (int i = 0; i < 4; i++)
    {
        if (other.memory[i])
            this->memory[i] = other.memory[i]->clone();
        else
            this->memory[i] = NULL;
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materiasource deconstructor called" << std::endl;
	for(int n = 0; n < 4; n++)
	{
		if (this->memory[n] != NULL)
			delete this->memory[n];
	}
}

void MateriaSource::learnMateria(AMateria* newM)
{
	for(int n = 0; n < 4; n++)
	{
		if (this->memory[n] == NULL)
		{
			this->memory[n] = newM->clone();
			std::cout << newM->getType() << " has been learned and stored in memory in Slot " << n << std::endl;
			delete newM;
			return;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int n = 0; n < 4; n++)
	{
		if (this->memory[n] != NULL && this->memory[n]->getType() == type)
		{
			std::cout << "returning clone of " << type +"." << std::endl;
			return (memory[n]->clone());
		}
	}
	return(NULL);
}