#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	std::cout << "Standard constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "name constructor called" << std::endl;

	this->_name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << this->_name << " attacks " << target << " causing " << this->getAD() << " points of damage." << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " points of damage." << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints < 1)
    {
        throw std::logic_error(this->_name + " has died.");
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energyPoints < 1)
	{
		throw std::logic_error(this->_name + " is out of energypoints");
	}
	std::cout << this->_name << " repairs itself for " << amount << " hitpoints." << std::endl;
	this->energyPoints--;
	this->hitPoints += amount;
}

void ClapTrap::setEP(unsigned int amount)
{
	this->energyPoints = amount;
}

void ClapTrap::setHP(unsigned int amount)
{
	this->hitPoints = amount;
}

void ClapTrap::setAD(unsigned int amount)
{
	this->atkDmg = amount;
}

int ClapTrap::getHP() const
{
	return(this->hitPoints);
}

int ClapTrap::getEP() const
{
	return(this->energyPoints);
}

unsigned int ClapTrap::getAD() const
{
	return(this->atkDmg);
}

void ClapTrap::status()
{
	std::cout << this->_name << " has " << this->getEP() << " Energypoints" << std::endl;
	std::cout << this->_name << " has " << this->getHP() << " HP" << std::endl;
}