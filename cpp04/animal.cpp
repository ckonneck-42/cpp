#include "dog.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}


Animal::Animal(const std::string &_name)
{
	std::cout << "Animal name constructor called" << std::endl;
	this->name = _name;
}

Animal::Animal(const Animal &other)
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this == &other)
        return (*this);
    // this->_name = other._name;
    return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()
{
	std::string _type = this->getType();
	if (_type == "Dog")
		std::cout << "woof" << std::endl;
	else if (_type == "Cat")
		std::cout << "meow" << std::endl;
	else
		std::cout << "OH GOD WHAT AM I KILL ME WHAT SOUND DO I MAKE" << std::endl;
}

std::string Animal::getType()
{
	return(this->type);
}