#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}


Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Ice copy constructor called" << std::endl;
    // *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy operator called" << std::endl;
    if (this == &other)
        return (*this);
    AMateria::operator=(other);
    return (*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an icebolt at " << target.getName() << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const {
    return new Ice(*this); // Creates a new copy of the current object
}