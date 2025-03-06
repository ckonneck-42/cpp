#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		AForm();
		virtual ~AForm();
		AForm(const std::string &name, bool isSigned, const int gradeReqTS, const int gradeReqTE);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		std::string const & getName() const;
		bool getIfSigned() const;
		int getGradeReqTE() const;
		int getGradeReqTS() const;
		void beSigned(const Bureaucrat &guy);
		virtual void	execute(Bureaucrat const &executor) const = 0;
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeRequiredToSign;
		const int _gradeRequiredToExecute;

};
	std::ostream& operator<<(std::ostream &o,AForm &paper);
#endif