#include "AForm.hpp"
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		void    execute(Bureaucrat const &executor) const;//impl
		void	execute_ThePPF(Bureaucrat const &executor) const;
	private:
		std::string _target;
};
#endif