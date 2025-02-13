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
		virtual void makeSound() const = 0;
		std::string getType() const;
		virtual void setIdea(const std::string &idea, int n) = 0;
		virtual void showIdea(int n) const = 0;
	protected:
		std::string type;
		std::string name;
};


#endif