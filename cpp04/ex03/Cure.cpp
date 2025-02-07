#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure constructor called" << std::endl;
}


Cure::Cure(const Cure &other)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy operator called" << std::endl;
    if (this == &other)
        return (*this);
    // this->_name = other._name;
    return (*this);
}

void Cure::use(ICharacter& target)// need an overload for << here prolly
{
	std::cout << "* heals " << 
}



Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}
