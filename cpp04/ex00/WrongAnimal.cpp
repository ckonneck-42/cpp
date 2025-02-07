#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const std::string &_name)
{
	std::cout << "WrongAnimal name constructor called" << std::endl;
	this->name = _name;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this == &other)
        return (*this);
    // this->_name = other._name;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::string _type = this->getType();
	if (_type == "Dog")
		std::cout << "woof" << std::endl;
	else if (_type == "Cat")
		std::cout << "meow" << std::endl;
	else
		std::cout << "OH GOD WHAT AM I KILL ME WHAT SOUND DO I MAKE" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}