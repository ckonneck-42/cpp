#include "Identify.hpp"

int main()
{
	std::srand(std::time(NULL));
	Base *bob = generate();
	identify(*bob);
	identify(bob);
	delete bob;

}