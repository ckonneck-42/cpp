#include <stack>
#include <deque>
#include <iostream>

template <typename T,typename Container = std::deque<T> > 
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack();
	
	typedef typename Container::iterator iterator;
	iterator begin();
    iterator end();
};

template <typename T,typename Container> 
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {}

template <typename T,typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}

template <typename T,typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& other)
{
	if (this != &other)
	std::stack<T, Container>::operator=(other);
	return *this;
}

template <typename T,typename Container> 
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {return this->c.end();}

template <typename T,typename Container> 
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {return this->c.begin();}

template <typename T,typename Container> 
MutantStack<T, Container>::~MutantStack() {}