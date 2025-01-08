#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i = 1;
	int k = 0;
	std:: string line;
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(argv[i])
	{
		while(argv[i][k])
		{
			line += std::toupper(argv[i][k]);
			k++;
		}
		line += ' ';
		k = 0;
		i++;
	}
	std::cout << line << std::endl;
}
