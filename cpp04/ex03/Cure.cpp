#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}


Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy operator called" << std::endl;
    if (this == &other)
        return (*this);
    AMateria::operator=(other);
    return (*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s Wounds" << std::endl;
}


Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}
