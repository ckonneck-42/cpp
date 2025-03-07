#include "AForm.hpp"

AForm::AForm() : _name("unnamed"), _isSigned("false"), _gradeRequiredToSign(150), _gradeRequiredToExecute(150) {}

AForm::AForm(const std::string &name, bool isSigned, const int gradeReqTS, const int gradeReqTE)
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

AForm::AForm(const AForm &other) : _name(other._name),
	_gradeRequiredToSign(other._gradeRequiredToSign),
	_gradeRequiredToExecute(other._gradeRequiredToExecute){}

AForm &AForm::operator=(const AForm &other)
{
	if (this == &other)
		return *this;
	this->_isSigned = other._isSigned;
	return *this;
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Exception triggered. Form wasn't signed yet. Aborting.");
}

void AForm::beSigned(const Bureaucrat &guy)
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

const std::string &AForm::getName() const 
{
	return _name;
}
int AForm::getGradeReqTE() const
{
	return _gradeRequiredToExecute;
}
int AForm::getGradeReqTS() const
{
	return _gradeRequiredToSign;
}
bool AForm::getIfSigned() const
{
	return _isSigned;
}

std::ostream& operator<<(std::ostream& os, AForm &paper) {
    os << "AForm " << paper.getName() << ", is it already signed: " << paper.getIfSigned() <<
	", grade required to sign: " << paper.getGradeReqTS() <<
	", grade required to execute: " << paper.getGradeReqTE();
    return os;
}

AForm::~AForm() {std::cout << "form destructor called" << std::endl;}