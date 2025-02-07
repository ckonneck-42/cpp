#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const std::string &_name);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
		std::string name;
};


#endif