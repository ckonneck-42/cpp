#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_name = name;
}
FragTrap::~FragTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->_name + " is asking for a high five" << std::endl;
}