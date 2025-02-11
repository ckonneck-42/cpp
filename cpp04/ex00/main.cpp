#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


//invoking copy constructor
//deleting meta before to not leak
//because its pointers and it would just copy adresses if i were to just meta = blaa

int main()
{
const Animal* meta = new Animal();
const Animal *blaa = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
std::cout << "meta sound" << std::endl;
meta->makeSound();
std::cout << "blaa sound" << std::endl;
blaa->makeSound();
delete meta;
meta = new Animal(*blaa);
std::cout << "meta sound after copying" << std::endl;
meta->makeSound();
delete i;
delete j;
delete meta;
delete blaa;
return 0;
}





//standard case with freeing the memory

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
// delete i;
// delete j;
// delete meta;
// return 0;
// }


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

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// const WrongAnimal* wrong = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound();
// j->makeSound();
// meta->makeSound();
// wrong->makeSound();

// delete meta;
// delete i;
// delete j;
// delete wrong;
// return 0;
// }