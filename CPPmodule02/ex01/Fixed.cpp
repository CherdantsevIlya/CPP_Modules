#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Constructor " << this << " called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const int num1)
{
    std::cout << "Int constructor " << this << " called" << std::endl;
    this->_value = num1 << _bits;
}

Fixed::Fixed(const float num2)
{
    std::cout << "Float constructor " << this << " called" << std::endl;
    this->_value = roundf(num2 * (1 << _bits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor " << this << " called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = other._value;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor " << this << " called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << _bits));
}

int Fixed::toInt(void) const
{
    return (this->_value / (1 << _bits));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

