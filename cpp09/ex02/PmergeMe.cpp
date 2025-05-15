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

void print(const std::vector<int>& vec)
{
    std::cout << "Vector: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void print(const std::deque<int>& dq)
{
    std::cout << "Deque: ";
    for (std::deque<int>::const_iterator it = dq.begin(); it != dq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

//okay i mightve misunerstood subject, i need two function calls, one which does it all with deque
//and the other who does it with vectors?


void PmergeMe(std::deque<int> &battlearena)
{

	std::vector<int> winners;
	int arenasize = battlearena.size();

	for (int i = 0; i < arenasize/2; i++)
	{
		int a = battlearena[0];
		int b = battlearena[1];
		battlearena.pop_front();
		battlearena.pop_front();

    	if (a >= b)
		{
			winners.push_back(a);
			battlearena.push_back(b);
    	}
		else
		{
			winners.push_back(b);
			battlearena.push_back(a);
		}
	}
	// std::cout << "battlearena round 1, the winners are: " << std::endl;
	// print(winners);
	// std::cout << "battlearena round 1, the losers are: " << std::endl;
	// print(battlearena);
	PmergeMe(winners);
	// std::cout << "battlearena round ???, after the grand selection the winners are: " << std::endl;
	// print(winners);
	// std::cout << "and the losers are " << std::endl;
	// print(battlearena);
	// std::cout << "so now we push them together and the result is: " << std::endl; 

	for (size_t i = 0; i < battlearena.size(); ++i)
	{
		// std::cout << "i is : " << i << std::endl; 
        int val = battlearena[i];
        size_t low = 0;
		size_t high = winners.size();
		// std::cout << "AAAAAAAAAAAAAAAhigh is currently: " << high << std::endl;
        while (low < high)
		{
            size_t mid = (low + high) / 2;
            if (val < winners[mid])
				high = mid;
            else
				low = mid + 1;
			// std::cout << "low is currently: " << low << std::endl;
			// std::cout << "mid is currently: " << mid << std::endl;
			// std::cout << "high is currently: " << high << std::endl;
        }
        winners.insert(winners.begin() + low, val);
    }
	std::cout << "After: " << std::endl;
	print(winners);
}


void PmergeMe(std::vector<int> &vectorarena)
{
	if (vectorarena.size() <= 1)
        return;
	std::vector<int> winners;
	std::vector<int> losers;
	int arenasize = vectorarena.size();
	//push loser to bottom
	//continue until stack has been halved
	//deque now consist of only losers
	//winner gets pushed onto vector
	//std::vector can be accessed via [0]

	for (int i = 0; i + 1 < arenasize; i += 2)
	{
		int a = vectorarena[i];
		int b = vectorarena[i+1];

    	if (a >= b)
		{
			winners.push_back(a);
			losers.push_back(b);
    	}
		else
		{
			winners.push_back(b);
			losers.push_back(a);
		}
	}
	if (vectorarena.size() % 2 == 1)
        winners.push_back(vectorarena.back());
	// std::cout << "battlearena round x, the winners are: " << std::endl;
	// print(winners);
	PmergeMe(winners);

// Insert losers into sorted winners
	for (size_t i = 0; i < losers.size(); ++i)
	{
		int val = losers[i];
		size_t low = 0;
		size_t high = winners.size();
		while (low < high)
		{
			size_t mid = (low + high) / 2;
			if (val < winners[mid])
				high = mid;
			else
				low = mid + 1;
		}
		winners.insert(winners.begin() + low, val);
	}

	// Return sorted result back to original vector
	vectorarena = winners;
	

}