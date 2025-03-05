#include "Bureaucrat.hpp"

// if you define something in a try and catch block, it will go out of scope immediately afterwards.
// so if you want something to persist, you need to define it before it, and then assign a value to it
// obv dont forget to delete it afterwards to prevent leaks;


int main()
{
	Bureaucrat *persistent = NULL;
	Bureaucrat *aba = NULL;
	try
	{
		// aba = new Bureaucrat("test", 0);
		persistent = new Bureaucrat("shitsukoi", 1);
		persistent->decrementGrade();
		persistent->incrementGrade();
		persistent->incrementGrade();
		persistent->incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (aba != NULL)
		std::cout << *aba << std::endl;
	if (persistent != NULL)
		std::cout << *persistent << std::endl;
	try
	{
		Bureaucrat bob("bobilly", 5);
		std::cout << bob << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat has("olli", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat wa("owada", 1);
		Bureaucrat wo("owoda", 2);
		wa = wo;
		Bureaucrat bob(wo);// showing copying
		std::cout << wa <<std::endl;
		std::cout << wo <<std::endl;
		std::cout << bob <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat has("zero", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete persistent;
	delete aba;
}
