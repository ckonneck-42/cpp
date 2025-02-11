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

void AMateria::use(ICharacter& target) {
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    this->_type = other._type;  // Copy the type from the other AMateria
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "copy operator called" << std::endl;
    if (this == &other)
        return (*this);
    // this->_name = other._name;
    return (*this);
}
