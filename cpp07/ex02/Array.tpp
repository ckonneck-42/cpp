#include "Array.hpp"

template <typename T>
Array<T>::Array() : data(NULL), length(0) {}

template <typename T>
Array<T>::Array(size_t size) : length(size)
{
    if (size == 0)
        data = NULL;
    else
        data = new T[size]();
}

template <typename T>
Array<T>::Array(const Array &other) : length(other.length)
{
    data = new T[length];

    for (size_t i = 0; i < length; ++i)
        data[i] = other.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
	{
        delete[] data;
        length = other.length;
        data = new T[length];
        for (size_t i = 0; i < length; ++i)
            data[i] = other.data[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] data;
}

template <typename T>
size_t Array<T>::size() const
{
    return length;
}

template <typename T>
T& Array<T>::operator[](size_t index)
{
    if (index >= length)
	{
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

