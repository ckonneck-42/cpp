#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


//invoking copy constructor
//deleting meta before to not leak
//because its pointers and it would just copy adresses if i were to just meta = blaa

// int main()
// {
// const Animal* meta = new Animal();
// const Animal *blaa = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// std::cout << "meta sound" << std::endl;
// meta->makeSound();
// std::cout << "blaa sound" << std::endl;
// blaa->makeSound();
// delete meta;
// meta = new Animal(*blaa);

// std::cout << "meta sound after copying" << std::endl;
// meta->makeSound();
// delete i;
// delete j;
// delete meta;
// delete blaa;
// return 0;
// }


//showing copy constructor
// int main()
// {
// Animal* dogsh = new Dog();
// Animal* catsh = new Cat();
// std::cout << dogsh->getType() << " " << std::endl;
// std::cout << catsh->getType() << " " << std::endl;
// dogsh->makeSound();
// catsh->makeSound(); //will output the cat sound!

// *catsh = *dogsh;
// std::cout << "cat sound after copying" << std::endl;
// catsh->makeSound(); // will now output dog sound
// delete catsh;
// delete dogsh;
// return 0;
// }



//standard subject case with freeing the memory

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete i;
delete j;
delete meta;
return 0;
}


// standard subject case without freeing the memory

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// //...
// return 0;
// }

//standard test with wrongAnimal class

//because of the lacking virtual keyword, only wrongcats who get declared as wrongcat can use the correct 
// int main()
// {
// const Animal* meta = new Animal();
// const Animal* DOGSH = new Dog();
// const Animal* CATSH = new Cat();
// const WrongAnimal* wrong = new WrongCat();
// std::cout << DOGSH->getType() << " " << std::endl;
// std::cout << CATSH->getType() << " " << std::endl;
// DOGSH->makeSound();
// CATSH->makeSound();
// meta->makeSound();
// wrong->makeSound();
// const WrongAnimal *test = new WrongAnimal();
// const WrongCat *catti = new WrongCat();
// test->makeSound();
// catti->makeSound();
// delete DOGSH;
// delete CATSH;
// delete meta;
// delete test;
// delete catti;
// delete wrong;
// return 0;
// }