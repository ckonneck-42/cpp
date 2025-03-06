#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form *A27 = NULL;
	Form *A30 = NULL;
	A30 = new Form("A30", true, 1, 1);
	A27 = new Form(*A30);
	std::cout << *A27 << std::endl;
	std::cout << *A30 << std::endl;
	// Bureaucrat *bob = NULL;
	// try
	// {
	// 	A27 = new Form("A28", false, 124, 1);
	// 	bob = new Bureaucrat("bobby", 123);
	// 	A27->beSigned(*bob);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// if (A27)
	// 	std::cout << *A27 << std::endl;

	delete A27;

	// delete A30;
	// delete bob;
}
