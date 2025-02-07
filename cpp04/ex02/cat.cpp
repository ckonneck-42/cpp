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

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);  // Deep copy
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return (*this);

    Animal::operator=(other);
    delete this->_brain;
    this->_brain = new Brain(*other._brain);  // Deep copy of Brain

    return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

void Cat::setIdea(const std::string &idea, int n)
{
    if (this->_brain)  
    {
        this->_brain->addIdeaToBrain(idea, n);
    }
}
void Cat::showIdea(int n) const
{
    if (this->_brain)
    {
        this->_brain->showIdea(n);
    }
}