#include "Fixed.hpp"

// int main( void )
// {
//     Fixed a = 3;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;

//     std::cout << "\na before a++ operation" << std::endl;
//     std::cout << a << std::endl;
//     std::cout << "a while a++ operation\n" << a++ << std::endl;
//     std::cout << "a after a++ operation" << std::endl;
//     std::cout << a << std::endl;

//     std::cout << "\na before ++a operation" << std::endl;
//     std::cout << a << std::endl;
//     std::cout << "a while ++a operation\n" << ++a << std::endl;
//     std::cout << "a after ++a operation" << std::endl;
//     std::cout << a << std::endl;

//     std::cout << "\na before a-- operation" << std::endl;
//     std::cout << a << std::endl;
//     std::cout << "a while a-- operation\n" << a-- << std::endl;
//     std::cout << "a after a-- operation" << std::endl;
//     std::cout << a << std::endl;

//     std::cout << "\na before --a operation" << std::endl;
//     std::cout << a << std::endl;
//     std::cout << "a while --a operation\n" << --a << std::endl;
//     std::cout << "a after --a operation" << std::endl;
//     std::cout << a << "\n" << std::endl;

//     if (a > b)
//         std::cout << "a is greater than b" << std::endl;
//     else if (a < b)
//         std::cout << "a is less than b" << std::endl;

//     if (a == b)
//         std::cout << "a is equal to b" << std::endl;
//     else if (a != b)
//         std::cout << "a is not equal to b" << std::endl;
//     float sum = a + b;           // Addition
//     float difference = a - b;    // Subtraction
//     float product = a * b;       // Multiplication
//     float quotient = a / b;      // Division
//     std::cout << "a + b = " << sum << std::endl;
//     std::cout << "a - b = " << difference << std::endl;
//     std::cout << "a * b = " << product << std::endl;
//     std::cout << "a / b = " << quotient << std::endl;

//     std::cout << "min: " << std::endl;
//     std::cout << Fixed::min(a, b) << std::endl;
//     std::cout << "max: " << std::endl;
//     std::cout << Fixed::max(a, b) << std::endl;
    
//     return 0;
// }


int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}