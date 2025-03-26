#include "iter.hpp"


void printElement(int x)
{
    std::cout << x << " ";
}

void printChars(char x)
{
    std::cout << x << " ";
}

char addone(char &x)
{
	x++;
	return x;
}

int add1000(int &x)
{
	x = x + 1000;
	return x;
}

int divideby2(int &x)
{
	x = x /2;
	return x;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(arr) / sizeof(arr[0]); // calculates size by counting bytes (size of all in the array, divided by bytesize of one member from the array)
	double c[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(c) / sizeof(c[0]);
	std::cout <<"\n__________________" << std::endl;
    std::cout << "Array elements:" << std::endl;
    iter(arr, length, printElement);
	std::cout <<"\n__________________" << std::endl;
	iter(arr, length, add1000);
	std::cout << "Array elements after adding 1000 to each number: " << std::endl;
	iter(arr, length, printElement);
	std::cout <<"\n__________________" << std::endl;
	iter(arr, length, divideby2);
	std::cout << "Array elements after dividing each number by 2: " << std::endl;
	iter(arr, length, printElement);
	std::cout <<"\n__________________" << std::endl;





	char arrc[] = {65, 66, 67, 68, 69};
	length = sizeof(arrc) / sizeof(arrc[0]);
	std::cout << "Array elements: " << std::endl;
	iter(arrc, length, printChars);
    std::cout <<"\n__________________" << std::endl;
	std::cout << "Array elements after adding 1 to each char: " << std::endl;
	iter(arrc, length, addone);
	iter(arrc, length, printChars);
	std::cout <<"\n__________________" << std::endl;


	
	

    return 0;
}