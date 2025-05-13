#include "Span.hpp"

int main()
{
	Span bob = Span(200);
	bob.addNumber(0);
	bob.addNumber(88888888);
	bob.addMore(20, 20, 500);
	bob.displayNumbers();
	unsigned int ls = bob.longestSpan();
	std::cout << "longest span is: " << ls << std::endl;
	unsigned int ss = bob.shortestSpan();
	std::cout << "shortest span is: " << ss << std::endl;

	try
	{
		Span test = Span(1);
		test.addNumber(2);
		test.displayNumbers();
		std::cout << "longest span is: " << test.longestSpan() << std::endl;
		std::cout << "shortest span is: " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span yes = Span(3);
		yes.addNumber(1);
		yes.addNumber(10);
		yes.addNumber(100);
		yes.addNumber(1000);
		yes.displayNumbers();
		std::cout << "longest span is: " << yes.longestSpan() << std::endl;
		std::cout << "shortest span is: " << yes.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }