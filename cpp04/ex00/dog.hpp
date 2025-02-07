#ifndef Dog_HPP
#define Dog_HPP

#include <iostream>
#include "animal.hpp"
class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);

	private:
};


#endif