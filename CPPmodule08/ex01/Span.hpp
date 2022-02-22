#ifndef DESKTOP_SPAN_H
#define DESKTOP_SPAN_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <exception>

class Span {

private:
    unsigned int _n;
    std::vector<int> vec;

public:
    Span();
    Span(unsigned int n);
    Span(const Span& other);
    ~Span();
    Span& operator=(const Span& other);

    class OverflowError : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class TooFewSavedNumbers : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    void addNumber(int n);
    int shortestSpan();
    int longestSpan();

    template<typename It>
    void addNumber(It begin, It end) {
        if (this->_n <= this->vec.size())
            throw OverflowError();
        if (this->_n < this->vec.size() + std::distance(begin, end))
            throw OverflowError();
        for (std::vector<int>::iterator it = begin; it != end; it++)
            vec.push_back(*it);
    }
};

#endif
