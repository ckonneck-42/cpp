#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "brain.hpp"




// int main ()
// {
//     Dog basic;
//     Dog tmp = basic;
// }

// int main()
// {
//     const Animal* anima = new Animal();
//     anima->makeSound();
// }


// int main()
// {
//     Animal *leak = new Cat();
//     delete leak;
//     return 0;
// }


// int main()
// {
//     Animal* horde[6];

//     for (int i = 0; i < 3; i++)
// 	{
//         horde[i] = new Cat("nyanko");
//     }
// 	for (int i = 3; i < 6; i++)
// 	{
//         horde[i] = new Dog("wanko");
//     }
// 	for (int i = 0; i < 6; i++)
// 	{
//         horde[i]->setIdea("sleep", i);
//     }
// 	for (int i = 0; i < 6; i++)
// 	{
//         horde[i]->showIdea(i);
//     }
// 	std::cout << std::endl;
// 	Cat original("Whiskers");
// 	std::cout << "setting the idea " << std::endl;
//     original.setIdea("I love fish!", 0);
//     std::cout << "set the idea " << std::endl;
//     std::cout <<"copying"<< std::endl;
//     Cat copyCat(original);
// 	std::cout <<"copied."<< std::endl;
//     std::cout << "Original Cat's idea at index 0: ";
//     original.showIdea(0);
    
//     std::cout << "Copy Cat's idea at index 0: ";
//     copyCat.showIdea(0);
// 	std::cout <<"both now have the same idea ^."<< std::endl;
//     // Modify copy's brain
// 	std::cout <<"now modifying the copy."<< std::endl;
//     copyCat.setIdea("I hate fish!", 0);
// 	std::cout <<"done modifying the copy."<< std::endl;
//     std::cout << "\nAfter modifying the copy:\n";
//     std::cout << "Original Cat's idea at index 0: ";
//     original.showIdea(0);
// 	std::cout << std::endl;
//     std::cout << "Copy Cat's idea at index 0: ";
//     copyCat.showIdea(0);
// 	std::cout << std::endl;

// 	for (int i = 0; i < 6; i++)
// 	{
//        delete horde[i];
//     }

// return 0;
// }
