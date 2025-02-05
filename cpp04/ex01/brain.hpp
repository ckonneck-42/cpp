#include "animal.hpp"

#ifndef brain_HPP
#define brain_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		std::string getIdea(int n);
		void setIdea(const std::string &_idea, int n);
	private:
		std::string ideas[100];
};


#endif