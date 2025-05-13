#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <exception>
#include <typeinfo>

class numNotFound : public std::exception
{
	private:
    std::string _message;
	
	public:
	numNotFound();
	numNotFound(const numNotFound& other);
	numNotFound& operator=(const numNotFound& other);
    numNotFound(int value, const std::string& containerType);
    virtual const char* what() const throw();
    virtual ~numNotFound() throw() {}
};

template <typename T>
typename T::iterator easyfind(T& cont, int num)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), num);
	if (it == cont.end())
		throw numNotFound(num, typeid(T).name());
	return it;
};
#endif

