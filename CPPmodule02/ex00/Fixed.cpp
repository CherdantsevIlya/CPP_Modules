#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Constructor " << this << " called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor " << this << " called" << std::endl;
    this->_value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = other.getRawBits();
    return (*this);
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

Fixed::~Fixed()
{
    std::cout << "Destructor " << this << " called" << std::endl;
}
