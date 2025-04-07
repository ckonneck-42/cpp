#include "easyfind.hpp"
#include <list>
#include <deque>
#include <stdexcept>



numNotFound::numNotFound(int value, const std::string& containerType)
{
	std::ostringstream oss;
	oss << "Value " << value << " not found in container of type " << containerType;
	_message = oss.str();
}

const char *numNotFound::what() const throw()
{
	return _message.c_str();
}


int main(void)
{
    std::vector<int> numbers;
	std::list<int> lisnum;
	std::deque<int> queue;
    try
    {
		numbers.push_back(10);
		numbers.push_back(150);
		numbers.push_back(20);
		numbers.push_back(10);
		numbers.push_back(1);

        std::vector<int>::iterator it = easyfind(numbers, 1);
        std::cout << "Found in vector (first occurrence): " << *it 
                  << " at index: " << std::distance(numbers.begin(), it) << std::endl;

		it = easyfind(numbers, 10);
		std::cout << "Found in vector (first occurrence): " << *it 
				<< " at index: " << std::distance(numbers.begin(), it) << std::endl;
		


		lisnum.push_back(10);
		lisnum.push_back(150);
		lisnum.push_back(20);
		lisnum.push_back(10);
		lisnum.push_back(1);

		

		std::list<int>::iterator listit = easyfind(lisnum, 1);
		std::cout << "Found in list (first occurrence): " << *listit 
				<< " at index: " << std::distance(lisnum.begin(), listit) << std::endl;
		listit = easyfind(lisnum, 10);
		std::cout << "Found in list (first occurrence): " << *listit 
				<< " at index: " << std::distance(lisnum.begin(), listit) << std::endl;
		
		queue.push_back(10);
		queue.push_back(150);
		queue.push_back(20);
		queue.push_back(10);
		queue.push_back(1);

		std::deque<int>::iterator queit = easyfind(queue, 1);
		std::cout << "Found in double-ended queue (first occurrence): " << *queit
				<< " at index: " << std::distance(queue.begin(), queit) << std::endl;
		queit = easyfind(queue, 10);
		std::cout << "Found in double-ended queue (first occurrence): " << *queit
				<< " at index: " << std::distance(queue.begin(), queit) << std::endl;
		
		// queit = easyfind(queue, 11);
		// listit = easyfind(lisnum, 12);
		 it = easyfind(numbers, 13);
		
    }
    catch (const numNotFound& e)
    {
        std::cerr << e.what() << std::endl;
    }
}