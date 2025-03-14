#include "ScalarConverter.hpp"

int main()
{
	//ScalarConverter(); // inaccessible because private
	ScalarConverter::convert("42.0f");
	ScalarConverter::convert(".....");
	ScalarConverter::convert("0.00001");
	ScalarConverter::convert("11111f");
	ScalarConverter::convert("111.1.1.1.1.1.1");
	ScalarConverter::convert("1112F");
	ScalarConverter::convert("123abdef");
	ScalarConverter::convert("12311111112224444444444444444444444444444444444444444222222222222222222222222211111111111111111111111111111111111111111111111111111111111111111111111111");
	ScalarConverter::convert("+inff");
	ScalarConverter::convert("+inf");
	ScalarConverter::convert("nanf");
	ScalarConverter::convert("nan");
	ScalarConverter::convert("a");
	ScalarConverter::convert("2");
	ScalarConverter::convert("900719925474099212342342342"); 
	ScalarConverter::convert("1167772161");
	
	ScalarConverter::convert("-.....");
	ScalarConverter::convert("-0.00001");
	ScalarConverter::convert("-11111f");
	ScalarConverter::convert("-111.1.1.1.1.1.1");
	ScalarConverter::convert("-1112F");
	ScalarConverter::convert("-123abdef");
	ScalarConverter::convert("-12311111112224444444444444444444444444444444444444444222222222222222222222222211111111111111111111111111111111111111111111111111111111111111111111111111");
	ScalarConverter::convert("-inff");
	ScalarConverter::convert("-inf");
	ScalarConverter::convert("nanf");
	ScalarConverter::convert("nan");
	ScalarConverter::convert("-a");
	ScalarConverter::convert("-2");
	ScalarConverter::convert("-900719925474099212342342342"); 
	ScalarConverter::convert("-1167772161");

}
