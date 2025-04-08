#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <exception>
#include <typeinfo>
#include <climits>

class Span
{

	class excep : public std::exception
	{
		public:
		virtual const char* what() const throw();
		virtual ~excep() throw() {}
	};
	class excep2 : public std::exception
	{
		public:
		virtual const char* what() const throw();
		virtual ~excep2() throw() {}
	};
	public:
		void addNumber(unsigned int num);
		Span(unsigned int N);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		Span();
		~Span();
		Span(const Span &others);
		void addMore(unsigned int startnum, unsigned int repeats, unsigned int span);
		void displayNumbers();
	private:
		std::vector<unsigned int> numbers;
		unsigned int _maxN;
};