#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, Fixed const &fixed) {
    os << fixed.toFloat();
    return os;
}


Fixed::Fixed() : value(0)
{
	// std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : value(other.value)
{
	// std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();

	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return value;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member functions called" << std::endl;
	value = raw;
}


Fixed::Fixed(const int input)
{
	// std::cout << "Int constructor called" << std::endl;
	this->value = input << this->fractionalBits;
}
Fixed::Fixed(const float input)
{
	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf(input * (1 << this->fractionalBits));
}
float Fixed::toFloat(void) const
{
	return (this->value / (float)(1 << this->fractionalBits));
}
int Fixed::toInt(void) const
{
	return (this->value >> this->fractionalBits);
}

// Overloaded Comparison Operators
bool	Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

// Overloaded Arithmetic Operators
float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}
// pre-inc operators
Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

// post-increment operators
Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->value;
	return (tmp);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if(first.toFloat() <= second.toFloat())
		return(first);
	else
		return(second);
}
const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
	if(first.toFloat() <= second.toFloat())
		return(first);
	else
		return(second);
}
Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if(first.toFloat() >= second.toFloat())
		return(first);
	else
		return(second);
}
const Fixed &Fixed::max(Fixed const &first, const Fixed &second)
{
	if(first.toFloat() >= second.toFloat())
		return(first);
	else
		return(second);
}
