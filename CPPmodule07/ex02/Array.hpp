#ifndef DESKTOP_ARRAY_H
#define DESKTOP_ARRAY_H

template<typename T>
class Array {

private:
    T *_array;
    int _size;

public:
    Array() : _array(nullptr), _size(0) {};
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
};

#endif
