#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		AForm *makeForm(const std::string &formName, const std::string &target);
		int checkName(const std::string &formName);
};

#endif
