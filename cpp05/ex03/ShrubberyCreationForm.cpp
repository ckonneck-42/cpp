#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", false, 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this == &other)
        return *this;
    this->_target = other._target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (executor.getGrade() > this->getGradeReqTE())
            throw (Bureaucrat::GradeTooLowException());
        if (this->getIfSigned() == false)
            throw (AForm::FormNotSignedException());
        std::ofstream file(this->_target.c_str());
        if (!file)
        {
            std::cerr << "Error opening file!" << std::endl;
        }
        file <<"           _-_\n";
        file <<"       /~~    ~~\\ \n";
        file <<"      /~~       ~~\\ \n";
        file <<"      {           }\n";
        file <<"       \\ _- -_  /\n";
        file <<"        ~ \\ //  ~\n";
        file <<"     - -   | | _- _\n";
        file <<"      _ -  | |   -_\n";
        file <<"          // \\\n";
        file.close();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}