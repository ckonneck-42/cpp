#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./RPN \"3 4 + 2 * 7 /\"" << std::endl;
		return 1;
	}

	std::string line(argv[1]);
	int result = rpnCalc(line);

	std::cout << "Result is: " << result << std::endl;
}