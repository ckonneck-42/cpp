#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <exception>
#include <typeinfo>

class Span
{
	public:
		void addNumber(unsigned int num);
		Span(unsigned int N);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		Span();
		~Span();
		Span(const Span &others);
	private:
		std::vector<int> numbers;
		unsigned int _maxN;
};