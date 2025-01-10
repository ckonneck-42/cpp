#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

int main (int argc, char **argv)// put argv argc for filename etc
{
	if(argc == 4)
	{
		std::cout << "valid" << std::endl;
	}
	else
	{
		std::cout << "usage: ./replace filename char_to_replace replacement" << std::endl;
		return(1);
	}
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "couldn't open file" << std::endl;
		return(1);
	}
	std::string buffer;
	std::string thingtofind = argv[2];
	std::string replacement = argv[3];

	//if argv is exactly 1 char long, invoke the char replacement, if not, go for swap
	//do swap, if swapped, do the loop from the start

	if(thingtofind.size() == 1)
	{
		while(std::getline(file, buffer))
		{
			for (unsigned int i = 0; i < buffer.size(); i++)
			{
				if (buffer[i] == argv[2][0])
				{
					buffer[i] = argv[3][0];
				}
			}
		}
	}
	else
	{
		//string::erase , string::insert
	}
		std::cout << "more";

		// if (buffer.find(argv[2][0]) != std::string::npos)
		// {
		// 	std::cout << "found " << argv[2][0] << std::endl;

		// }
		// else
		// {
		// 	std::cout << "didn't find " << argv[2][0] << std::endl;
		// }
	std::cout << buffer << std::endl;
	// std::string one ("aaaabacdegaaaa");
	// std::string two;

	// std::cout << "before the swap: " << one << std::endl;


	// std::cout << "after the swap: " << one << std::endl;
}