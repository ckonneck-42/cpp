#ifndef Dog_HPP
#define Dog_HPP

#include <iostream>
#include "animal.hpp"
class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string &_name);
		virtual ~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);

	private:
		Brain* _brain;
};

#endif