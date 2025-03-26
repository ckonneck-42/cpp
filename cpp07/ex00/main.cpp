#include "whatever.hpp"

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// 	}


int main()
{
	std::cout << "______________________________________________" << std::endl;
	int even = 5;
	int even2 = 5;
	std::cout << "tests with ints" << std::endl;
	std::cout <<"even= " << even << ", even2 = " << even2 << std::endl;
	std::cout << "swapping" << std::endl;
	::swap(even, even2);
	std::cout <<"even= " << even << ", even2 = " << even2 << std::endl;
	std::cout << "min= "<< ::min(even, even2) << std::endl;
	std::cout << "max= "<< ::max(even, even2) << std::endl;
	std::cout << "______________________________________________" << std::endl;
	float lowf = 4.01;
	float highf = 5.01;

	std::cout << "tests with floats" << std::endl;
	std::cout << "min= "<< ::min(lowf, highf) << std::endl;
	std::cout << "max= "<< ::max(lowf, highf) << std::endl;
	std::cout <<"lowf before any swap = " << lowf << ", highf before any swap = " << highf << std::endl;
	::swap(lowf, highf);
	std::cout <<"lowf after first swap = " << lowf << ", highf after first swap = " << highf << std::endl;
	::swap(lowf, highf);
	std::cout <<"lowf after second swap = " << lowf << ", highf after second swap = " << highf << std::endl;
	std::cout << "min= "<< ::min(lowf, highf) << std::endl;
	std::cout << "max= "<< ::max(lowf, highf) << std::endl;

	std::cout << "______________________________________________" << std::endl;

	std::cout << "tests with chars" << std::endl;
	char a = 'a';
	char b = 'b';
	std::cout <<"a before any swap = " << a << ", b before any swap = " << b << std::endl;
	::swap(a, b);
	std::cout <<"a after swap = " << a << ", b after swap = " << b << std::endl;
	std::cout << "min= "<< ::min(a, b) << std::endl;
	std::cout << "max= "<< ::max(a , b) << std::endl;
	std::cout << "______________________________________________" << std::endl;
	void *temp1;
	void *temp2;
	std::cout << "tests with void*" << std::endl;
	std::cout <<"temp1 before any swap = " << temp1 << ", temp2 before any swap = " << temp2 << std::endl;
	::swap(temp1, temp2);
	std::cout <<"temp1 after swap = " << temp1 << ", temp2 after swap = " << temp2 << std::endl;
	std::cout << "min= "<< ::min(temp1, temp2) << std::endl;
	std::cout << "max= "<< ::max(temp1 , temp2) << std::endl;
}