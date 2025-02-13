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

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
    std::cout << "copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
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

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::string _type = this->getType();

	std::cout << "disturbing sounds" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}