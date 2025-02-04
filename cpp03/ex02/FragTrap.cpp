#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap()
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_atkDmg = 30;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this == &other)
        return (*this);
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_atkDmg = other._atkDmg;
    return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->_name + " is asking for a high five" << std::endl;
}