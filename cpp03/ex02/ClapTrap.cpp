#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Standard constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, int hitpoints, int energyPoints, unsigned int atkDmg)
{
	std::cout << "Claptrap extensive constructor called" << std::endl;

	this->_name = name;
	this->_hitPoints = hitpoints;
	this->_energyPoints = energyPoints;
	this->_atkDmg = atkDmg;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this == &other)
        return (*this);
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_atkDmg = other._atkDmg;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << this->_name << " attacks " << target << " causing " << this->getAD() << " points of damage." << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " points of damage." << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 1)
    {
        throw std::logic_error(this->_name + " has died.");
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoints < 1)
	{
		throw std::logic_error(this->_name + " is out of Energypoints");
	}
	std::cout << this->_name << " repairs itself for " << amount << " Hitpoints." << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
}

void ClapTrap::setEP(unsigned int amount)
{
	this->_energyPoints = amount;
}

void ClapTrap::setHP(unsigned int amount)
{
	this->_hitPoints = amount;
}

void ClapTrap::setAD(unsigned int amount)
{
	this->_atkDmg = amount;
}

int ClapTrap::getHP() const
{
	return(this->_hitPoints);
}

int ClapTrap::getEP() const
{
	return(this->_energyPoints);
}

unsigned int ClapTrap::getAD() const
{
	return(this->_atkDmg);
}

void ClapTrap::status()
{
	std::cout << this->_name << " has " << this->getEP() << " Energypoints" << std::endl;
	std::cout << this->_name << " has " << this->getHP() << " HP" << std::endl;
}