#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
	Bureaucrat *guy = new Bureaucrat("bob", 5);
	PresidentialPardonForm test("billy");
	RobotomyRequestForm robo("bot");
	ShrubberyCreationForm shrub("shribbi");
	shrub.beSigned(*guy);
	shrub.execute(*guy);
	robo.beSigned(*guy);
	robo.execute(*guy);
	test.beSigned(*guy);
	test.execute(*guy);
	guy->executeForm(test);
	delete guy;
}
