#ifndef DESKTOP_EASYFIND_H
#define DESKTOP_EASYFIND_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

template <typename T>
int easyfind(T &array, int value) {
    typename T::iterator it;
    it = std::find(array.begin(), array.end(), value);
    if (it == array.end())
        throw "Not found";
    return *it;
}

#endif
