#include "ClapTrap.hpp"

int main(void)
{
	try
	{
		ClapTrap example("James");
		example.setEP(5);
		example.setHP(25);
		example.setAD(2);
		example.status();
		std::string target = "Bob";
		example.attack(target);
		example.takeDamage(52);
		example.beRepaired(12);
		example.status();
	}
	catch (const std::logic_error &e)
	{
		std::cerr << "Program terminated: " << e.what() << std::endl;
        return 1;
	}
	return 0;
}