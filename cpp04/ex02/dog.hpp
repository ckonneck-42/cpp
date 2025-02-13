#ifndef Dog_HPP
#define Dog_HPP

#include <iostream>
#include "animal.hpp"
class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string &_name);
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		void setIdea(const std::string &_idea, int n);
		void showIdea(int n) const;
		void makeSound() const;
	private:
		Brain* _brain;
};

#endif