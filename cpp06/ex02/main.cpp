#include "Identify.hpp"

int main()
{
	std::srand(std::time(NULL));

	A A_Class;
	B B_Class;
	C C_Class;
	Base *nil = NULL;
	A *A_Class_Pointer = &A_Class;
	B *B_Class_Pointer = &B_Class;
	C *C_Class_Pointer = new C();
	identify(nil);
	Base *bob = generate();
	identify(*bob);
	identify(bob);
	std::cout << "_____" << std::endl;
	identify(A_Class);
	identify(B_Class);
	identify(C_Class);
	std::cout << "_____" << std::endl;
	identify(A_Class_Pointer);
	identify(B_Class_Pointer);
	identify(C_Class_Pointer);
	std::cout << "_____" << std::endl;
	identify(*A_Class_Pointer);
	identify(*B_Class_Pointer);
	identify(*C_Class_Pointer);
	
	delete bob;
	delete C_Class_Pointer;
}


/* 
real world usecase for this
imagine a player collision in a game, when a player swings his sword
the colliding object would check if its a player by calling identify on the object it collided with
if its a player, it calls .takeDamage, if not, it returns NULL or something. wouldnt want the ground to take damage unless its minecraft i guess.
*/