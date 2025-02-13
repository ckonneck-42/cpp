#include "animal.hpp"

#ifndef brain_HPP
#define brain_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		void showIdea(int n);
		void addIdeaToBrain(const std::string &_idea, int n);
	private:
		std::string ideas[100];
};


#endif