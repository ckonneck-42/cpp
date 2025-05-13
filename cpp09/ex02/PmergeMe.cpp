#include "PmergeMe.hpp"

bool isDigit(char *strnum)
{
	int i = 0;
	while (strnum[i])
	{
		if (strnum[i] > '9' || strnum[i] < '0' )
			return false;
		i++;
	}
	return true;
}

void PmergeMe(std::deque<int> &)
{
	//get the container, get the first and second to battle it out,
	//push loser to bottom
	//continue until stack has been halved
	//deque now consist of only losers
	//winner gets pushed onto vector
	//std::vector can be accessed via [0]
	//check the halved access and see if its smaller or bigger
	//if the loser is bigger, go back in the vector of +half
	//else -half

}
