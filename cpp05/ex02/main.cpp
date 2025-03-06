#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
	Bureaucrat *guy = new Bureaucrat("bob", 50);
	PresidentialPardonForm test("billy");

	test.execute(*guy);
}
