#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
int main()
{
	AMateria *temp = new Ice();
	// AMateria *temp1 = new Ice();
	// AMateria *temp2 = new Ice();
	// AMateria *temp3 = new Ice();
	// AMateria *temp4 = new Ice();
	// AMateria *temp5 = new Ice();
	// AMateria *temp6 = new Ice();
	// AMateria *temp7 = new Ice();
	// AMateria *temp8 = new Ice();
	// AMateria *temp9 = new Ice();

	std::cout << "temp is " << temp->getType() << std::endl;
	ICharacter* me = new Character("me");
	AMateria *cu = new Cure();
	std::cout << "cu is " << cu->getType() << std::endl;
	Character* meta = new Character("booob");
	Character* testa = new Character("puu");
	me->equip(cu);
	me->equip(temp);
	// me->equip(temp1);
	// me->equip(temp2);
	// me->equip(temp3);
	meta->unequip(1);
	meta->equip(temp);
	meta->equip(cu);
	*meta = *testa;
	// meta->equip(temp);
	meta->unequip(1);
	*meta = *testa;
	std::cout << meta->getName() << std::endl;
	std::cout << meta << std::endl;
	// me->unequip(1);
	// me->unequip(2);
	// me->unequip(3);
	// me->equip(temp4);
	// me->equip(temp5);
	// me->equip(temp6);
	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(2);
	// me->unequip(3);
	// me->equip(temp7);
	// me->equip(temp8);
	// me->equip(temp9);
	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(2);
	// me->equip(temp);
	// me->equip(temp);
	// me->equip(cu);
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete temp3;
	// delete me;
	// delete bob;
}