#include "MutantStack.hpp"

int main()
{
	MutantStack<int> stack;
	stack.push(1);
	std::cout << stack.size() << std::endl;
}