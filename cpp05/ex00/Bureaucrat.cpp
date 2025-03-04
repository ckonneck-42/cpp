#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "standard constructor for Bureaucrat called" << std::endl;
}


Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	try
	{
		if(grade >= 150)
		{
			throw(Bureaucrat::GradeTooLowException());
		}
		if(grade < 1)
		{
			throw(Bureaucrat::GradeTooLowException());
		}
		_grade = grade;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

	std::cout << "Bureaucracy simulator online.\nname: " << name << "\ngrade: " << grade << std::endl; 
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "standard destructor for Bureaucrat called" << std::endl;
}