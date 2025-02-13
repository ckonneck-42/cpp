#ifndef Dog_HPP
#define Dog_HPP

#include <iostream>
#include "animal.hpp"
class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);

		void makeSound() const;
	private:
};


#endif