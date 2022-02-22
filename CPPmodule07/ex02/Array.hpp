#ifndef DESKTOP_ARRAY_H
#define DESKTOP_ARRAY_H

#include <iostream>
#include <string>
#include <exception>

template<typename T>
class Array {

private:
    T *array;
    int _size;

public:
    Array() : array(new T()), _size(0) {}

    Array(unsigned int n) : array(new T[n]()), _size(n) {}

    Array(const Array& other) : array(new T[other._size]), _size(other._size) {
        for (int i = 0; i < other._size; i++)
            this->array[i] = other.array[i];
    }

    Array& operator=(const Array& other) {
        if (this->array)
            delete [] this->array;
        this->array = new T[other._size];
        this->_size = other._size;
        for (int i = 0; i < other._size; i++)
            this->array[i] = other.array[i];
        return *this;
    }

    ~Array() { delete [] this->array; }

    T& operator[](const int index) {
        if (index < 0 || index >= this->_size)
            throw IndexIsOutOfArray();
        return this->array[index];
    }

    class IndexIsOutOfArray : public std::exception {
    public:
        virtual const char* what() const throw() { return "Index is out of array!"; }
    };

    int size() { return this->_size; }

    T getArray(int index) const { return this->array[index]; }

    void setArray(T value, int index) { this->array[index] = value; }

};

#endif
