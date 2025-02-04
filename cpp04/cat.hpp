#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "animal.hpp"
class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string &_name);
		~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);

	private:
};


#endif