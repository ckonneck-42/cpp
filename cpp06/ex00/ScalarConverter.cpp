#include "ScalarConverter.hpp"
#include <cstdlib>
#include <iomanip>
#include <limits>
void ScalarConverter::convert(const std::string &value)
{

	std::cout << "------------------" << std::endl;
	std::cout << "VALUE GIVEN: '" << value <<"'" << std::endl;
	
	if (value.empty())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	std::string::size_type pos = value.find('.');
	if(pos != std::string::npos)
	{
		if (value.find('.', pos + 1) != std::string::npos)
		{
			std::cout << "found multiple . ,shorting" << std::endl;
		}
	}

	std::cout << std::fixed << std::setprecision(1);
	if (value.length() == 1)
	{
		std::cout << "char: " << value[0] << std::endl;
		std::cout << "int: " << static_cast<int>(atoi(value.c_str())) << std::endl;
		std::cout << "float: " << static_cast<float>(atof(value.c_str())) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(atof(value.c_str())) << std::endl;
		return;
	}

	if (atoi(value.c_str()) >= 32 && atoi(value.c_str()) <= 126)
	{
		std::cout << "char: '" << static_cast<char>(atoi(value.c_str())) <<"'" << std::endl;
		std::cout << "int: " << static_cast<int>(atoi(value.c_str())) << std::endl;
		std::cout << "float: " << static_cast<float>(atof(value.c_str())) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(atof(value.c_str())) << std::endl;
		return;
	}
	else if (value == "-inff" || value == "+inff" || value == "nanf" || value == "nan" || value == "-inf" || value == "+inf") {
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(atof(value.c_str()));
		if (value[value.length() - 1] == 'f')
			std::cout << "f";
		std::cout << std::endl;
        std::cout << "double: " <<static_cast<double>(atof(value.c_str())) << std::endl;
        return;
    }
	else if(atof(value.c_str()) > 16777216 || atof(value.c_str()) < -16777216)
	{
		std::cout << "char: impossible" << std::endl;
		if(atof(value.c_str()) > 2147483647 || atof(value.c_str()) < -2147483647)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(atoi(value.c_str())) << std::endl;
		std::cout << "value over max precision float. the following will be with lost precision" << std::endl;
		std::cout << "float: " << static_cast<float>(atof(value.c_str())) << "f" << std::endl;
		if(atof(value.c_str()) > 9007199254740992 || atof(value.c_str()) < -9007199254740992)
			std::cout << "value over max precision double. the following will be with lost precision" << std::endl;
		std::cout << "double: " << static_cast<double>(atof(value.c_str())) << std::endl;
		return;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << static_cast<int>(atoi(value.c_str())) << std::endl;
		std::cout << "float: " << static_cast<float>(atof(value.c_str())) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(atof(value.c_str())) << std::endl;
		return;
	}
}

ScalarConverter::ScalarConverter() {std::cout << "this should never be called";}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {(void) other; return *this;};


//static_cast: The conversion is decided beforehand and is super fast when the program is running.
// dynamic_cast: The conversion happens during the program’s run,
// and it has to check things while the program is running, making it slower.

/*
It’s fast: Since static_cast works during compilation (before the program even runs),
it doesn't slow things down when the program is running.
It’s safe: You can only use it to convert types that make sense to convert.
If you try something silly, like trying to convert an object into a completely unrelated type 
(e.g., trying to turn an animal into a car), the compiler will stop you and give you an error before you
even run the program.
*/