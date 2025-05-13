#include "PmergeMe.hpp"


int main(int argc, char **argv)
{

	if (argc <= 1)
	{
		std::cout << "giev numbahrs" << std::endl;
		return 1;
	}
	std::deque<int> unsorted;
	for (int i = 1; i < argc; ++i)
	{
		if (isDigit(argv[i]))
		{
            int number = std::atoi(argv[i]);
            std::cout << "output: " << number << std::endl;
            unsorted.push_back(number);
        } 
		else
		{
            std::cout << "Invalid input: " << argv[i] << " is not a valid number." << std::endl;
			return 1;
		}
	}
	PmergeMe(unsorted);
}