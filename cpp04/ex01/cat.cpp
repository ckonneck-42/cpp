#include "cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const std::string &_name) : Animal(), _brain(new Brain())
{
	std::cout << "Cat name constructor called" << std::endl;
	this->name = _name;
    this->type = "Cat";
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
    delete this->_brain;
}
