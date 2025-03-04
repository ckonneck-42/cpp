#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "standard constructor for Bureaucrat called" << std::endl;
}


Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name)
{
	std::cout << "Bureaucracy simulator booting.\nname: " << name << "\ngrade: " << grade << std::endl;
	if(grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
	if(grade < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	_grade = grade;
	std::cout << "Grade valid. assigned successfully." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "standard destructor for Bureaucrat called" << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception triggered. Grade too low. Aborting.");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception triggered. Grade too high. Aborting.");
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &guy) {
    os << guy.getName() << ", bureaucrat grade " << guy.getGrade();
    return os;
}

const std::string &Bureaucrat::getName() const 
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}