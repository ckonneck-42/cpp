#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main()
{
	Bureaucrat *guy = new Bureaucrat("bob", 5);
	PresidentialPardonForm test("billy");
	RobotomyRequestForm robo("bot");
	ShrubberyCreationForm shrub("shribbi");
	Intern inni;
	AForm* rrf;
	rrf = inni.makeForm("presidentialpardon", "bobby");
	rrf->beSigned(*guy);
	rrf->execute(*guy);
	guy->executeForm(*rrf);
	shrub.beSigned(*guy);
	shrub.execute(*guy);
	robo.beSigned(*guy);
	robo.execute(*guy);
	test.beSigned(*guy);
	test.execute(*guy);
	delete rrf;
	delete guy;
}
