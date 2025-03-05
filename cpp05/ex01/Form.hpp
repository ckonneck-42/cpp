#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form 
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
		Form();
		~Form();
		Form(const std::string &name, bool isSigned, const int gradeReqTS, const int gradeReqTE);
		std::string const & getName() const;
		bool getIfSigned();
		int getGradeReqTE();
		int getGradeReqTS();
		void beSigned(const Bureaucrat &guy);
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeRequiredToSign;
		const int _gradeRequiredToExecute;

};
	std::ostream& operator<<(std::ostream &o,Form &paper);
#endif