#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice constructor called" << std::endl;
}


Ice::Ice(const Ice &other)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy operator called" << std::endl;
    if (this == &other)
        return (*this);
    // this->_name = other._name;
    return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}
