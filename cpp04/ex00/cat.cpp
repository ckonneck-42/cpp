#include "cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}


Cat::Cat(const Cat &other) : Animal()
{
    std::cout << "copy constructor called" << std::endl;
    this->type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meooOOOWWWWHH" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
