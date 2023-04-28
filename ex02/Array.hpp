#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
public:
    Array();
    Array(unsigned int lenght);
    Array(const Array &array);
    ~Array();

    Array &operator=(const Array &array);
    T &operator[](unsigned int index);

    unsigned int size() const;

private:
    T *array;
    unsigned int lenght;
};

#include "Array.tpp"

#endif
