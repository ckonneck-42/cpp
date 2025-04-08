#include <stack>
#include <deque>
#include <iostream>

template <typename T,typename Container = std::deque<T> > 
class MutantStack : public std::stack<T, Container>
{
	public:
		
};
