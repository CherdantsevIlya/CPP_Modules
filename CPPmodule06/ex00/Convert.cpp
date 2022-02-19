#include "Convert.hpp"

Convert::Convert(): minusInf(0), plusInf(0), nan(0), zero(0), value(0.0) {}

Convert::Convert(std::string arg) : minusInf(0), plusInf(0), nan(0), zero(0), value(0.0) {
    if (arg == "-inf" || arg == "-inff")
        setMinusInf(1);
    else if (arg == "+inf" || arg == "+inff")
        setPlusInf(1);
    else if (arg == "nan" || arg == "nanf")
        setNan(1);
    value = std::stod(arg);
    if ((int)value == value)
        setZero(1);
}

Convert::Convert(const Convert &other) : minusInf(other.minusInf), plusInf(other.plusInf), nan(other.nan), zero(other.zero), value(other.value) {}

Convert &Convert::operator=(const Convert &other) {
    this->minusInf = other.minusInf;
    this->plusInf = other.plusInf;
    this->nan = other.nan;
    this->zero = other.zero;
    this->value = other.value;
    return *this;
}

Convert::~Convert() {}

void Convert::printAll() {
    printChar();
    printInt();
    printFloat();
    printDouble();
}

void Convert::printChar() {
    char c = static_cast<char>(getValue());;
    std::cout << "char: ";
    if (getNan() || getPlusInf() || getMinusInf() || std::numeric_limits<char>::max() < getValue() || std::numeric_limits<char>::min() > getValue())
        std::cout << "impossible" << std::endl;
    else if (!(std::isprint(c)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "\'" << c << "\'" << std::endl;
}

void Convert::printInt() {
    int i = static_cast<int>(getValue());
    std::cout << "int: ";
    if (getNan() || getPlusInf() || getMinusInf() || std::numeric_limits<int>::max() < getValue() || std::numeric_limits<int>::min() > getValue())
        std::cout << "impossible" << std::endl;
    else
        std::cout << i << std::endl;

}

void Convert::printFloat() {
    std::cout << "float: ";
    float f = static_cast<float>(getValue());
    if (getPlusInf())
        std::cout << "+inff" << std::endl;
    else if (getMinusInf())
        std::cout << "-inff" << std::endl;
    else if (getNan())
        std::cout << "nanf" << std::endl;
    else if (std::numeric_limits<float>::max() < getValue() || std::numeric_limits<float>::lowest() > getValue())
        std::cout << "impossible" << std::endl;
    else if (getZero())
        std::cout << f << ".0f" << std::endl;
    else
        std::cout << f << "f" << std::endl;
}

void Convert::printDouble() {
    std::cout << "double: ";
    double d = static_cast<double>(getValue());
    if (getPlusInf())
        std::cout << "+inf" << std::endl;
    else if (getMinusInf())
        std::cout << "-inf" << std::endl;
    else if (getNan())
        std::cout << "nan" << std::endl;
    else if (std::numeric_limits<double>::max() < getValue() || std::numeric_limits<double>::lowest() > getValue())
        std::cout << "impossible" << std::endl;
    else if (getZero())
        std::cout << d << ".0" << std::endl;
    else
        std::cout << d << std::endl;
}

bool Convert::getMinusInf() const {
    return this->minusInf;
}

bool Convert::getPlusInf() const {
    return this->plusInf;
}

bool Convert::getNan() const {
    return this->nan;
}

bool Convert::getZero() const {
    return this->zero;
}

double Convert::getValue() const {
    return this->value;
}

void Convert::setMinusInf(bool value) {
    this->minusInf = value;
}

void Convert::setPlusInf(bool value) {
    this->plusInf = value;
}

void Convert::setNan(bool value) {
    this->nan = value;
}

void Convert::setZero(bool value) {
    this->zero = value;
}

void Convert::setValue(double value) {
    this->value = value;
}