#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;

}

void Brain::showIdea(int n)
{
	std::cout << this->ideas[n] << std::endl;
}

void Brain::addIdeaToBrain(const std::string &_idea, int n)
{
	this->ideas[n] = _idea;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this == &other)
        return (*this);
    return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
