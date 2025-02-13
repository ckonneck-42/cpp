#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const std::string &_name) : WrongAnimal()
{
	std::cout << "WrongCat name constructor called" << std::endl;
	this->name = _name;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "If you see this, that means i am a wrongcat." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
