#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>
#include <exception>

template <typename T>
Array<T>::Array() : array(new T[0]), lenght(0) {}

template <typename T>
Array<T>::Array(unsigned int lenght) : array(new T[lenght]), lenght(lenght) {}

template <typename T>
Array<T>::Array(const Array &array) : array(NULL), lenght(array.size())
{
    *this = array;
}

template <typename T>
Array<T>::~Array()
{
    if (array)
    {
        delete[] array;
        array = NULL;
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
    if (this != &src)
    {
        delete[] array;

        lenght = src.size();
        array = new T[lenght];

        for (unsigned int i = 0; i < lenght; i++)
        {
            array[i] = src.array[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= lenght)
    {
        throw std::exception();
    }
    return array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return lenght;
}

#endif
