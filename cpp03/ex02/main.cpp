#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	try
	{
		ClapTrap Clapper("Clapper", 5, 25, 2);
		Clapper.status();
		std::string target = "Bob";
		Clapper.attack(target);
		Clapper.takeDamage(2);
		Clapper.beRepaired(12);
		Clapper.status();


		ScavTrap Scavver("Scavver");
		Scavver.status();

		Scavver.attack(target);
		Scavver.takeDamage(2);
		Scavver.beRepaired(12);
		Scavver.guardGate();
		FragTrap Fragger("Fragger");
		Fragger.status();

		Fragger.attack(target);
		Fragger.takeDamage(2);
		Fragger.beRepaired(12);
		Fragger.highFivesGuys();
		Fragger.status();
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