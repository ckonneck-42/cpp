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
		void setIdea(const std::string &_idea, int n);
		void showIdea(int n) const;
		void makeSound() const;

	private:
		Brain* _brain;
};


#endif