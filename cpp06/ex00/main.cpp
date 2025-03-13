#include "ScalarConverter.hpp"

int main()
{
	std::cout << "------------------" << std::endl;
	ScalarConverter::convert(".");
	std::cout << "------------------" << std::endl;
	ScalarConverter::convert("");
	std::cout << "------------------" << std::endl;
}