#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "animal.hpp"
class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);

	private:
};


#endif