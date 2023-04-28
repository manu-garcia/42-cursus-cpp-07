#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *array, size_t lenght, void (*iterFn)(const T &))
{
    for (size_t i = 0; i < lenght; i++)
    {
        iterFn(array[i]);
    }
}

#endif
