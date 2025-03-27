#include "Array.hpp"

int main()
{
	std::cout << "_____________________" << std::endl;
	Array<int> arr;
	std::cout << "Size of empty array: " << arr.size() << std::endl;
	try
	{
		std::cout << "trying to access empty array: " << arr[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "_____________________" << std::endl;
	Array<double> arr2(20);
	std::cout << "Array elements: of arr2 before copying ";
    for (size_t i = 0; i < arr2.size(); ++i)
	{
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
	
	Array<double> arr3;
	std::cout << "Size of empty array arr3: " << arr3.size() << std::endl;
	arr3 = arr2;
	std::cout << "Size of empty array arr3 after copying from arr2: " << arr3.size() << std::endl;

	std::cout << "_____________________" << std::endl;
	std::cout << "filling arr2 with numbers" << std::endl;

	for (size_t i = 0; i < arr2.size(); ++i) {
        arr2[i] = (i + 1) * 10;
    }

    // Print values
    std::cout << "Array elements: of arr2 ";
    for (size_t i = 0; i < arr2.size(); ++i)
	{
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

	std::cout << "Array elements: of arr3 ";
    for (size_t i = 0; i < arr3.size(); ++i)
	{
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;
	std::cout << "_____________________" << std::endl;
	std::cout << "Size of full of 0's array arr3: " << arr3.size() << std::endl;
	std::cout << "Array elements: of arr3 ";
    for (size_t i = 0; i < arr3.size(); ++i)
	{
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

	arr3 = arr2;
	std::cout << "Size of empty array arr3 after copying from arr2: " << arr3.size() << std::endl;
	std::cout << "Array elements: of arr3 after copying from arr2: ";
    for (size_t i = 0; i < arr3.size(); ++i)
	{
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;
	std::cout << "_____________________" << std::endl;

	std::cout << "accessing some elements with [], arr2[5]: " << arr2[5] << std::endl;

	try
	{
		std::cout << "accessing some elements with [], arr2[19]: " << arr2[19] << std::endl;
		std::cout << "accessing some elements with [], arr2[20]: " << arr2[20] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "accessing some elements with [], arr2[-1]: " << arr2[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

}