#include "Fixed.hpp"

// constructors //

Fixed::Fixed()
{
//    std::cout << "Constructor " << this << " called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const int num1)
{
//    std::cout << "Int constructor " << this << " called" << std::endl;
    this->_value = (num1 << _bits);
}

Fixed::Fixed(const float num2)
{
//    std::cout << "Float constructor " << this << " called" << std::endl;
    this->_value = roundf(num2 * (1 << _bits));
}

Fixed::Fixed(const Fixed &other)
{
//    std::cout << "Copy constructor " << this << " called" << std::endl;
    *this = other;
}

Fixed::~Fixed()
{
//    std::cout << "Destructor " << this << " called" << std::endl;
}

// operators //

Fixed &Fixed::operator=(const Fixed &other)
{
//    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = other._value;
    return (*this);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)
{
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)
{
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)
{
    return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);

    this->_value++;
    return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);

    this->_value--;
    return (temp);
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->_value > fixed._value);
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (this->_value < fixed._value);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->_value >= fixed._value);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->_value <= fixed._value);
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->_value == fixed._value);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->_value != fixed._value);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) // отрабатывает
{
    if (a > b)
        return a;
    return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

// methods //

int Fixed::getRawBits(void) const
{
//    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(const int raw)
{
//    std::cout << "setRawBits member function called" << std::endl;
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