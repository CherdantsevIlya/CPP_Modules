#ifndef DESKTOP_MUTANTSTACK_H
#define DESKTOP_MUTANTSTACK_H

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <deque>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {

public:
    typedef typename std::stack<T, Container>::container_type::iterator iterator;

    MutantStack() {}
    MutantStack(const MutantStack<T, Container> &other) { *this = other; }
    virtual ~MutantStack() {};
    MutantStack& operator=(const MutantStack<T, Container> &other) {
        *this = other;
        return *this;
    }

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

};


#endif
