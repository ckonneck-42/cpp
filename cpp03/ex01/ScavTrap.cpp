#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Scavtrap constructor called" << std::endl;
}


ScavTrap::ScavTrap(const std::string &name) : ClapTrap()
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 50;
	this->_energyPoints = 100;
	this->_atkDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this == &other)
        return (*this);
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_atkDmg = other._atkDmg;
    return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name + " is now guarding the gate" << std::endl;
}

