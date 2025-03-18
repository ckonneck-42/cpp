#include "Serializer.hpp"

int main()
{
	Data ptr = {5, "testingstring", 'b'};
	std::cout << "printing now the data of the current datastruct" << std::endl;
	std::cout << ptr.placeholder << " " << ptr.name << " " <<ptr.b << std::endl;
	std::cout << "__________" << std::endl;
	uintptr_t bob = Serializer::serialize(&ptr);
	std::cout << bob <<std::endl;
	Data *newdata = Serializer::deserialize(bob);
	if(newdata == &ptr)
	{
		std::cout << "successful serilization" << std::endl;
	}
	else
		std::cout << "serilization failed" << std::endl;
	std::cout << "__________" << std::endl;
	std::cout << "printing now the data of the converted datastruct" << std::endl;
	std::cout << newdata->placeholder << " " << newdata->name << " " <<newdata->b << std::endl;
	std::cout << "__________" << std::endl;
}

/*
How reinterpret_cast Works
Reinterprets the bits of one type as another type without changing the value.
Does not perform any conversion or checking (unlike static_cast).
Mainly used for low-level operations, such as:
Casting pointers to integers (e.g., uintptr_t, unsigned long)
Casting integers back to pointers
Treating one type of data as another type
CAN be used to transfer data from one serverpoint to another, but there is better stuff for this.
Dangers of reinterpret_cast
No type safety, you can cast anything to anything, even unrelated types.
If used incorrectly, it can cause undefined behavior.
Not portable, The size of pointers and integers can vary depending on the system.
Dereferencing an invalid pointer can crash your program.

TLDR: reinterpret_cast just reinterprets the raw bits without any conversion.
if there’s any other way to achieve the same result (like static_cast, memcpy, Protobuf, or JSON), use that instead.
*/