#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
};


#endif