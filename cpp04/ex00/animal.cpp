#include "animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}


Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "copy operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "OH GOD WHAT AM I KILL ME WHAT SOUND DO I MAKE" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}