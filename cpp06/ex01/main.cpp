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