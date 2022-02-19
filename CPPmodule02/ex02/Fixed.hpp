#ifndef DESKTOP_FIXED_H
#define DESKTOP_FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

private:
    int _value;
    static const int _bits = 8;

public:
    Fixed(const int num1);
    Fixed(const float num2);
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();

    Fixed& operator= (const Fixed &fixed);
    Fixed operator+ (const Fixed &fixed);
    Fixed operator- (const Fixed &fixed);
    Fixed operator* (const Fixed &fixed);
    Fixed operator/ (const Fixed &fixed);
    bool operator> (const Fixed &fixed) const;
    bool operator< (const Fixed &fixed) const;
    bool operator>= (const Fixed &fixed) const;
    bool operator<= (const Fixed &fixed) const;
    bool operator== (const Fixed &fixed) const;
    bool operator!= (const Fixed &fixed) const;
    Fixed& operator++ ();
    Fixed& operator-- ();
    Fixed operator++ (int);
    Fixed operator-- (int);
    static Fixed& max(Fixed &a, Fixed &b);
    static Fixed& min(Fixed &a, Fixed &b);
    static Fixed const &max(Fixed const &a, Fixed const &b);
    static Fixed const &min(Fixed const &a, Fixed const &b);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif