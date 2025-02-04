#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string &name, int hitpoints, int energyPoints, unsigned int atkDmg);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHP() const;
		int getEP() const;
		unsigned int getAD() const;
		void setHP(unsigned int amount);
		void setEP(unsigned int amount);
		void setAD(unsigned int amount);
		void status();
	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		unsigned int _atkDmg;
};


#endif