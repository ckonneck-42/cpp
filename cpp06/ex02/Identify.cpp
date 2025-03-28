#include "Identify.hpp"
#include <cstdlib>
#include <ctime>
Base * generate(void)
{
	int randval = std::rand() % 3;
	if (randval == 0)
		return new A;
	else if (randval == 1)
		return new B;
	else
		return new C;

	return(NULL);
}


//pointer can return NULL
//but adress referns to actual object, thus needs to be try'd
void identify(Base* p)
{
	if (!p)
	{
		std::cout << "Null received, returning." <<  std::endl;
		return;
	}
	if (dynamic_cast<A*>(p))
		std::cout << "it's A!" <<std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "it's B!" <<std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "it's C!" <<std::endl;
	else
		std::cout << "unknown type. help." << std::endl;
}

void identify(Base& p)
{
	try {
        dynamic_cast<A&>(p);
        std::cout << "A Adress" << std::endl;
        return;
    }
    catch (const std::exception& e) {}
	try {
        dynamic_cast<B&>(p);
        std::cout << "B Adress" << std::endl;
        return;
    }
    catch (const std::exception& e) {}
	try {
        dynamic_cast<C&>(p);
        std::cout << "C Adress" << std::endl;
        return;
    }
    catch (const std::exception& e) {}
}
