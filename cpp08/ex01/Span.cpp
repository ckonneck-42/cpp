#include "Span.hpp"

Span::Span() : _maxN(0) {}

Span::Span(unsigned int N) : _maxN(N) {}

void Span::addNumber(unsigned int num)
{
	if(numbers.size() >= _maxN)
		throw std::exception();
	numbers.push_back(num);
}

Span::~Span() {}

Span::Span(const Span& other) : numbers(other.numbers), _maxN(other._maxN) {}