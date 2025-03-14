#include "Serializer.hpp"
Serializer::Serializer() {std::cout << "never gonna give you up, never gonna let you down" << std::endl;}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}