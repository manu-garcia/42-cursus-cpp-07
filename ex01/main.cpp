#include <iostream>

#include "iter.hpp"

template <typename T>
void printArrayElement(T const &element)
{
    std::cout << element << std::endl;
}

int main(void)
{
    std::string words[] = {"First", "Middle", "End"};
    int numbers[] = {1, 3, 5, 7};

    std::cout << "Printing words:" << std::endl;
    ::iter(words, 3, printArrayElement);
    std::cout << std::endl;
    std::cout << "Printing numbers:" << std::endl;
    ::iter(numbers, 3, printArrayElement);
    return (0);
}
