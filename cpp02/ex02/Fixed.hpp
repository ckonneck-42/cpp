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
        bool operator>(Fixed fixed) const;
        bool operator<(Fixed fixed) const;
        bool operator>=(Fixed fixed) const;
        bool operator<=(Fixed fixed) const;
        bool operator==(Fixed fixed) const;
        bool operator!=(Fixed fixed) const;

        float operator+(Fixed fixed) const;
        float operator-(Fixed fixed) const;
        float operator*(Fixed fixed) const;
        float operator/(Fixed fixed) const;
        //pre inc/dec and post inc/dec functions
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(Fixed const &first, const Fixed &second);


    private:
        int value;
        static const int fractionalBits = 8;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
#endif