#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
template <typename T>
class Array {
private:
    T* data;
    size_t length;

public:
    Array();
    Array(size_t size);
    Array(const Array& other);
    Array& operator=(const Array& other); 
    ~Array();

    size_t size() const;
    T& operator[](size_t index);
};


#include "Array.tpp"

#endif