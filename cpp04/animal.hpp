#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const std::string &_name);
		~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		void makeSound();
		std::string getType();

	protected:
		std::string type;
		std::string name;
};


#endif