#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "animal.hpp"
class Cat : public Animal, public Brain
{
	public:
		Cat();
		Cat(const std::string &_name);
		virtual ~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);

	private:
		Brain* _brain;
};


#endif