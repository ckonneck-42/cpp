#include "ScalarConverter.hpp"
#include <cstdlib>
void ScalarConverter::convert(const std::string &value)
{
	std::cout << "char: " << static_cast<char>(value[0]) << std::endl;//prolly errorprone
	std::cout << "int: " << static_cast<int>(atoi(value.c_str())) << std::endl;
	std::cout << "float: " << static_cast<float>(atof(value.c_str())) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(atof(value.c_str())) << std::endl;
}



// for char conversion if first 1 or 3 numbers are ascii values, print the ascii value(42 = '*')
// if it is already  char, print Non displayable
// maybe hardcode nan etc
//always check if it ends with f.
//a number like 42.0f should still convert to '*'
