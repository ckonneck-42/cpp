#ifndef WrongCat_HPP
#define WrongCat_HPP

#include <iostream>
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const std::string &_name);
		~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);
		
		void makeSound() const;
	private:
};


#endif