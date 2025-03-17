#include "Serializer.hpp"

int main()
{
	Data ptr = {5};
	uintptr_t bob = Serializer::serialize(&ptr);
	std::cout << bob <<std::endl;
	Data *newdata = Serializer::deserialize(bob);

	if(newdata == &ptr)
	{
		std::cout << "successful serilization" << std::endl;
	}
	else
		std::cout << "serilization failed" << std::endl;
	std::cout << newdata->placeholder << std::endl;
}

/*
How reinterpret_cast Works
Reinterprets the bits of one type as another type without changing the value.
Does not perform any conversion or checking (unlike static_cast).
Mainly used for low-level operations, such as:
Casting pointers to integers (e.g., uintptr_t, unsigned long)
Casting integers back to pointers
Treating one type of data as another type

Dangers of reinterpret_cast
No type safety! You can cast anything to anything, even unrelated types.
If used incorrectly, it can cause undefined behavior.
Not portable! The size of pointers and integers can vary depending on the system.
Dereferencing an invalid pointer can crash your program.

TLDR: reinterpret_cast just reinterprets the raw bits without any conversion.
if there’s any other way to achieve the same result (like static_cast, memcpy, Protobuf, or JSON), use that instead.
*/