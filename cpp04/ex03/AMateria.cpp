#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria normal constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type)
{
	std::cout << "AMateria type constructor called" << std::endl;
	this->_type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}