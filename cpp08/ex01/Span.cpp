#include "Span.hpp"

Span::Span() : _maxN(0) {}

Span::Span(unsigned int N) : _maxN(N) {}

void Span::addNumber(unsigned int num)//so i just realized that only _maxN should be uint, rest can be normal ones..
{
	if(numbers.size() >= _maxN)
		throw Span::excep();
	numbers.push_back(num);
}

Span::~Span() {}

Span::Span(const Span& other) : numbers(other.numbers), _maxN(other._maxN) {}

unsigned int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw Span::excep2();
	unsigned int min = *std::min_element(numbers.begin(), numbers.end());
	unsigned int max = *std::max_element(numbers.begin(), numbers.end());
	return (max - min);
}

unsigned int Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw Span::excep2();
	std::vector<unsigned int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());

	unsigned int currentspan = 0;
	unsigned int minspan = UINT_MAX;
	for (unsigned int i = 1; i < sorted.size(); i++)
	{
	 currentspan = (sorted[i] - sorted[i-1]);
		if (minspan > currentspan)
			minspan = currentspan;
	}
	return minspan;
}

void Span::addMore(unsigned int startnum, unsigned int repeats, unsigned int span)
{
	if(numbers.size() >= _maxN)
		throw Span::excep();
	addNumber(startnum);
	for (unsigned int i = 0; i < repeats; i++)
	{
		if(numbers.size() >= _maxN)
		{
			std::cout << "vector is now full" << std::endl;
			break;
		}
		startnum += span;
		addNumber(startnum);
	}
}

void Span::displayNumbers()
{
    std::cout << "Numbers in Span: ";
    for (std::vector<unsigned int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it;
        if (it + 1 == numbers.end())
			break;
		std::cout << ", ";
    }
    std::cout << std::endl;
}

const char *Span::excep::what() const throw()
{
	return ("Not enough Space in vector to add more numbers.");
}

const char *Span::excep2::what() const throw()
{
	return ("Not enough Numbers to compare in vector to determine a span.");
}