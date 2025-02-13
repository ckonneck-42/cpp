#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

//default case from subject

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}



//bad case, leaks, reachable blocks.
// int main()
// {
// 	AMateria *temp = new Ice();
// 	// AMateria *temp1 = new Ice();
// 	// AMateria *temp2 = new Ice();
// 	// AMateria *temp3 = new Ice();
// 	// AMateria *temp4 = new Ice();
// 	// AMateria *temp5 = new Ice();
// 	// AMateria *temp6 = new Ice();
// 	// AMateria *temp7 = new Ice();
// 	// AMateria *temp8 = new Ice();
// 	// AMateria *temp9 = new Ice();

// 	std::cout << "temp is " << temp->getType() << std::endl;
// 	ICharacter* me = new Character("me");
// 	AMateria *cu = new Cure();
// 	std::cout << "cu is " << cu->getType() << std::endl;
// 	Character* meta = new Character("booob");
// 	Character* testa = new Character("puu");
// 	me->equip(cu);
// 	me->equip(temp);
// 	// me->equip(temp1);
// 	// me->equip(temp2);
// 	// me->equip(temp3);
// 	meta->unequip(1);
// 	meta->equip(temp);
// 	meta->equip(cu);
// 	*meta = *testa;
// 	// meta->equip(temp);//so if i do this, i segfault.
// 	//this is mainly because of my character operator of me overwriting
// 	// and deleting all equipped or lying on the ground materias
// 	// this might be an issue, but maybe not.
// 	meta->unequip(1);
// 	*meta = *testa;
// 	std::cout << meta->getName() << std::endl;
// 	// me->unequip(1);
// 	// me->unequip(2);
// 	// me->unequip(3);
// 	// me->equip(temp4);
// 	// me->equip(temp5);
// 	// me->equip(temp6);
// 	// me->unequip(0);
// 	// me->unequip(1);
// 	// me->unequip(2);
// 	// me->unequip(3);
// 	// me->equip(temp7);
// 	// me->equip(temp8);
// 	// me->equip(temp9);
// 	// me->unequip(0);
// 	// me->unequip(1);
// 	// me->unequip(2);
// 	// me->equip(temp);
// 	// me->equip(temp);
// 	// me->equip(cu);
// 	// me->use(0, *bob);
// 	// me->use(1, *bob);
// 	// delete meta;
// 	// delete testa;
// 	// delete temp;
// 	delete me;
// 	// delete bob;
// }
//reduced bugfest
// int main()
// {
// 	AMateria *temp = new Ice();
// 	std::cout << "temp is " << temp->getType() << std::endl;
// 	ICharacter* me = new Character("me");
// 	AMateria *cu = new Cure();
// 	std::cout << "cu is " << cu->getType() << std::endl;
// 	Character* meta = new Character("booob");
// 	Character* testa = new Character("puu");
// 	me->equip(cu);
// 	me->equip(temp);
// 	meta->unequip(1);
// 	// meta->equip(temp); // if i assign multiple owners the same materia, it segfaults if i then call the destructors
// 	// meta->equip(cu);
// 	*meta = *testa;
// 	meta->unequip(1);
// 	*meta = *testa;
// 	std::cout << meta->getName() << std::endl;
// 	delete meta;
// 	delete testa;
// 	delete me;
// }

//showing off copying
// int main()
// {
// 	AMateria *temp = new Ice();
// 	std::cout << "temp is " << temp->getType() << std::endl;
// 	ICharacter* me = new Character("me");
// 	AMateria *cu = new Cure();
// 	Character* fiesta = new Character("fiesta");
// 	Character* testa = new Character("puu");
// 	testa->equip(cu);
// 	fiesta->equip(temp);
// 	testa->use(0, *testa);
// 	*testa = *fiesta;
// 	testa->use(0, *testa);
// 	fiesta->use(0, *testa);
// 	delete testa;
// 	delete me;
// 	delete fiesta;
// }



//save

// int main()
// {
// 	AMateria *temp = new Ice();
// 	ICharacter* me = new Character("me");
// 	Character* testa = new Character("puu");
// 	me->equip(temp);
// 	testa->unequip(0);
// 	delete me;
// 	delete testa;
// }

// int main()
// {
// 	AMateria *temp = new Ice();
// 	std::cout << "temp is " << temp->getType() << std::endl;
// 	ICharacter* me = new Character("me");
// 	AMateria *cu = new Cure();
// 	std::cout << "cu is " << cu->getType() << std::endl;
// 	Character* meta = new Character("booob");
// 	Character* testa = new Character("puu");
// 	me->equip(cu);
// 	// meta->unequip(1);
// 	// meta->equip(temp);
// 	// meta->equip(cu);
// 	me->equip(temp);
// 	// meta->unequip(1);
// 	*meta = *testa;
// 	std::cout << meta->getName() << std::endl;

// 	delete me;// NEVER DELETE MATERIAS THAT HAVE BEEN ASSIGNED SOMEWHERE,
// 				// THE CHARACTER DESTRUCTOR WILL TAKE CARE OF IT
// 	delete meta;
// 	delete testa;
// }