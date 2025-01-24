#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	try
	{
		ClapTrap Clapper("Clapper");
		Clapper.setEP(5);
		Clapper.setHP(25);
		Clapper.setAD(2);
		Clapper.status();
		std::string target = "Bob";
		Clapper.attack(target);
		Clapper.takeDamage(2);
		Clapper.beRepaired(12);
		Clapper.status();

		ScavTrap Scavver("Scavver");
		Scavver.setEP(50);
		Scavver.setHP(100);
		Scavver.setAD(20);
		Scavver.status();

		Scavver.attack(target);
		Scavver.takeDamage(2);
		Scavver.beRepaired(12);
		Scavver.guardGate();
		Scavver.status();
		Clapper.status();
	}
	catch (const std::logic_error &e)
	{
		std::cerr << "Program terminated: " << e.what() << std::endl;
        return 1;
	}
	return 0;
}