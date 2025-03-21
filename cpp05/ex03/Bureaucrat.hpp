#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "AForm.hpp"
class AForm;
class Bureaucrat
{
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		std::string const & getName() const;
		void incrementGrade();
		void decrementGrade();
		int getGrade() const;
		void signForm(AForm &paper);
		void executeForm(AForm const &paper);
	private:
		const std::string _name;
		int _grade;
	};
	
	std::ostream& operator<<(std::ostream &o, const Bureaucrat &guy);

#endif