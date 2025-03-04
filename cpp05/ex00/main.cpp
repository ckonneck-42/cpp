#include "Bureaucrat.hpp"


int main()
{
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
		Bureaucrat wa("owada", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
