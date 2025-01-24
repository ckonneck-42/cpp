#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		~ClapTrap();
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
	private:
		std::string _name;
		int hitPoints;
		int energyPoints;
		unsigned int atkDmg;
};


#endif