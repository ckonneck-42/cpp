#include "dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
     this->type = "Dog";
}


Dog::Dog(const std::string &_name) : Animal()
{
	std::cout << "Dog name constructor called" << std::endl;
    this->name = _name;
}

Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return (*this);
    // this->_name = other._name;
    return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
