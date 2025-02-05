#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>
#include "brain.hpp"
class Animal
{
	public:
		Animal();
		Animal(const std::string &_name);
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
		std::string name;
};


#endif