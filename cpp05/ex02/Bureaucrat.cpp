#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Mumei"), _grade(150)
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

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return *this;
	this->_grade = other._grade;
	return *this;
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

void Bureaucrat::incrementGrade()
{
	std::cout << "attempting to increment grade" << std::endl;
	if (this->_grade <= 1)
		throw(GradeTooHighException());
	this->_grade--;
	std::cout << "incremented successfully" << std::endl;
}

void Bureaucrat::decrementGrade()
{
	std::cout << "attempting to decrement grade" << std::endl;
	if (this->_grade >= 150)
		throw(GradeTooLowException());
	this->_grade++;
	std::cout << "decremented successfully" << std::endl;
}

void Bureaucrat::signForm(AForm &paper)
{
	try
	{
		paper.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return;
	}
}

void Bureaucrat::executeForm(AForm const &paper)
{
	try
	{
		if (this->getGrade() > paper.getGradeReqTE())
			throw (Bureaucrat::GradeTooLowException());
		if (paper.getIfSigned() == false)
			throw (AForm::FormNotSignedException());
		paper.execute(*this);
		std::cout << this->_name << " executed form " << paper.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return;
	}
}