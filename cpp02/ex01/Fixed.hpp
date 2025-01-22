#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &number);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(int const raw);
        Fixed(const int input);
        Fixed(const float input);
        float toFloat(void) const;
        int toInt(void) const;
    private:
        int value;
        static const int fractionalBits = 8;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
#endif