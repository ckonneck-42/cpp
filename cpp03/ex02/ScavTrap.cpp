#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Scavtrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_name = name;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name + " is now guarding the gate" << std::endl;
}