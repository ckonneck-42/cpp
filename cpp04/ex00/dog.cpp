#include "dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}


Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "copy constructor called" << std::endl;
    this->type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void Dog::makeSound() const
{
	std::cout << "WOOF" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
