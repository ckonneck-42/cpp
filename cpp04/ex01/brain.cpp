#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;

}

std::string Brain::getIdea(int n)
{
	return(this->ideas[n]);
}
void Brain::setIdea(const std::string &_idea, int n)
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
    // this->_name = other._name;
    return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
