#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
class Bureaucrat
{
	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();};
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);	//implement
		Bureaucrat &operator=(const Bureaucrat &other); //implement
		std::string const & getName() const; //implement
		int getGrade() const; //implement
	private:
		std::string _name;
		int _grade;
	
	};
	
	std::ostream& operator<<(std::ostream &o, const Bureaucrat &guy);

#endif