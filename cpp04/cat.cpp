#include "cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}


Cat::Cat(const std::string &_name) : Animal()
{
	std::cout << "Cat name constructor called" << std::endl;
	this->name = _name;
}

Cat::Cat(const Cat &other) : Animal()
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return (*this);
    // this->_name = other._name;
    return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
