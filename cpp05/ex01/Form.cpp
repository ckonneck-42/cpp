#include "Form.hpp"

Form::Form() : _name("unnamed"), _isSigned("false"), _gradeRequiredToSign(150), _gradeRequiredToExecute(150) {}

Form::Form(const std::string &name, bool isSigned, const int gradeReqTS, const int gradeReqTE)
	:_name(name), _isSigned(isSigned),_gradeRequiredToSign(gradeReqTS), _gradeRequiredToExecute(gradeReqTE)
{
	if(gradeReqTS > 150 || gradeReqTE > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
	if(gradeReqTS < 1 || gradeReqTE < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
}

void Form::beSigned(const Bureaucrat &guy)
{
	if (guy.getGrade() <= this->_gradeRequiredToSign)
	{
		_isSigned = true;
		std::cout << guy.getName() << " signed " << this->_name << std::endl;
	}
	else
	{
		_isSigned = false;
		std::cout << guy.getName() << " couldn't sign " << this->_name << " because the grade was too low" << std::endl;
	}
}

const std::string &Form::getName() const 
{
	return _name;
}
int Form::getGradeReqTE()
{
	return _gradeRequiredToExecute;
}
int Form::getGradeReqTS()
{
	return _gradeRequiredToSign;
}
bool Form::getIfSigned()
{
	return _isSigned;
}

std::ostream& operator<<(std::ostream& os, Form &paper) {
    os << "Form " << paper.getName() << ", is it already signed: " << paper.getIfSigned() <<
	", grade required to sign: " << paper.getGradeReqTS() <<
	", grade required to execute: " << paper.getGradeReqTE();
    return os;
}

Form::~Form() {std::cout << "form destructor called" << std::endl;}