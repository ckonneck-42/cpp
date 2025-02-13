#include "animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &_name) : name(_name)
{
	std::cout << "Animal name constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type), name(other.name)
{
    std::cout << "copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "copy operator called" << std::endl;
    if (this == &other)
	{
        return (*this);
	}
	this->name = other.name;
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

