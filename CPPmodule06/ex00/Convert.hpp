#ifndef DESKTOP_CONVERT_H
#define DESKTOP_CONVERT_H

#include <iostream>
#include <limits>
#include <cctype>
#include <cstdlib>
#include <cmath>

class Convert {

private:
    bool minusInf;
    bool plusInf;
    bool nan;
    bool zero;
    double value;

public:
    Convert();
    Convert(std::string arg);
    Convert(const Convert& other);
    ~Convert();
    Convert& operator=(const Convert& other);

    void printAll();
    void printChar();
    void printInt();
    void printFloat();
    void printDouble();

    bool getMinusInf() const;
    bool getPlusInf() const;
    bool getNan() const;
    bool getZero() const;
    double getValue() const;
    void setMinusInf(bool value);
    void setPlusInf(bool value);
    void setNan(bool value);
    void setZero(bool value);
    void setValue(double value);

};

#endif
