#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern &other) {*this = other;}
Intern &Intern::operator=(const Intern &other) 
{
	(void) other;
	return *this;
}


AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
	int check = checkName(formName);
	switch(check)
	{
		case 1:
		{
			std::cout << "The Intern creates " << formName +"." << std::endl;
			return new ShrubberyCreationForm(target);
		}
		case 2:
		{
			std::cout << "The Intern creates " << formName +"." << std::endl;
			return new RobotomyRequestForm(target);
		}
		case 3:
		{
			std::cout << "The Intern creates " << formName +"." << std::endl;
			return new PresidentialPardonForm(target);
		}
	}
	return NULL;
}

int Intern::checkName(const std::string &formName)
{
	if (formName == "presidentialpardon") return 3;
	if (formName == "robotomyrequest") return 2;
	if (formName == "shrubberycreationform") return 1;
	return 0;
}