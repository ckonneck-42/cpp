#include "Zombie.hpp"

// creating N zombies from the heap, which calls the default constructor

//then in the for loop, assigns the zombies the name at the adress where they have been created already to not call the constructor twice.


Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++)
	{
        new (&horde[i]) Zombie(name);
    }
    return horde;
}