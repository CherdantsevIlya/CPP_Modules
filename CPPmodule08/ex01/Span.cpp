#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &other) : _n(other._n), vec(other.vec) {}

Span::~Span() {}

Span &Span::operator=(const Span &other) {
    this->_n = other._n;
    this->vec = other.vec;
    return *this;
}

const char *Span::OverflowError::what() const throw() { return "Overflow Error!"; }

const char *Span::TooFewSavedNumbers::what() const throw() { return "Too few saved numbers!"; }

void Span::addNumber(int n) {
    if (this->_n <= this->vec.size())
        throw OverflowError();
    vec.push_back(n);
}

int Span::shortestSpan() {
    if (vec.size() < 2)
        throw TooFewSavedNumbers();
    std::sort(vec.begin(), vec.end());
    int minSpan = INT_MAX;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end() - 1; it++)
    {
        if (std::abs(*it - *(it + 1)) < minSpan)
            minSpan = (std::abs(*it - (*(it + 1))));
    }
    return minSpan;
}

int Span::longestSpan() {
    if (vec.size() < 2)
        throw TooFewSavedNumbers();
    std::vector<int>::iterator it1 = std::min_element(vec.begin(), vec.end());
    std::vector<int>::iterator it2 = std::max_element(vec.begin(), vec.end());
    return (*it2 - *it1);
}

