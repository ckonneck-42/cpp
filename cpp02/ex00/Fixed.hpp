#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &number);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(int const raw);
    private:
        int value;
        static const int fractionalBits = 8;
};


#endif