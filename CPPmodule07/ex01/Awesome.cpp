#include "Awesome.hpp"

Awesome::Awesome() : _n(42) {}

Awesome::Awesome(int n) : _n(n) {}

Awesome::Awesome(const Awesome &other) : _n(other._n) {}

Awesome::~Awesome() {}

Awesome &Awesome::operator=(const Awesome &other) {
    this->_n = other._n;
    return *this;
}

bool Awesome::operator==(const Awesome &other) const { return (this->_n == other._n); }

bool Awesome::operator!=(const Awesome &other) const { return (this->_n != other._n); }

bool Awesome::operator>(const Awesome &other) const { return (this->_n > other._n); }

bool Awesome::operator<(const Awesome &other) const { return (this->_n < other._n); }

bool Awesome::operator>=(const Awesome &other) const { return (this->_n >= other._n); }

bool Awesome::operator<=(const Awesome &other) const { return (this->_n <= other._n); }

int Awesome::get_n() const { return (this->_n); }

std::ostream& operator<<(std::ostream& out, const Awesome& awesome) {
    out << awesome.get_n();
    return out;
}
