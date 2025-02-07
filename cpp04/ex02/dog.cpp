#include "dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}


Dog::Dog(const std::string &_name) : Animal(), _brain(new Brain())
{
	std::cout << "Dog name constructor called" << std::endl;
    this->name = _name;
    this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)  // Copy base class
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);  // Deep copy
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return (*this);

    Animal::operator=(other);

    delete this->_brain;  // Prevent memory leaks
    this->_brain = new Brain(*other._brain);  // Deep copy of Brain

    return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}
void Dog::setIdea(const std::string &idea, int n)
{
    if (this->_brain)  
    {
        this->_brain->addIdeaToBrain(idea, n);
    }
}
void Dog::showIdea(int n) const
{
    if (this->_brain)
    {
        this->_brain->showIdea(n);
    }
}