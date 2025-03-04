#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);	//implement
		Bureaucrat &operator=(const Bureaucrat &other); //implement
		std::string const & getName() const; //implement
		int getGrade(Bureaucrat *callsign); //implement
		int GradeTooLowException(); //implement
		int GradeTooHighException(); //implement
	private:
		std::string _name;
		int _grade;
};


#endif