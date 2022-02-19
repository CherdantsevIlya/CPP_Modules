#ifndef DESKTOP_FIXED_H
#define DESKTOP_FIXED_H

#include <iostream>
#include <string>

class Fixed {

private:
    int _value;
    static const int _bits = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed& operator = (const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);

};

#endif
