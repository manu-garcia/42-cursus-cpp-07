#include <iostream>

#include "Array.hpp"

int main()
{
    Array<int> emptyArray;
    std::cout << "Created an empty array of leght: " << emptyArray.size() << std::endl;

    Array<int> sizedArray(5);
    std::cout << "Created an array of 5 elements with lenght: " << sizedArray.size() << std::endl;

    sizedArray[0] = 1;
    sizedArray[1] = 2;
    sizedArray[2] = 3;
    sizedArray[3] = 4;
    sizedArray[4] = 5;

    std::cout << "Size of sizedArray after init: " << sizedArray.size() << std::endl;

    Array<int> copiedArray = sizedArray;
    copiedArray[0] = 10;

    std::cout << "Elements of sizedArray: ";
    for (unsigned int i = 0; i < sizedArray.size(); i++)
    {
        std::cout << sizedArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Elements of copiedArray: ";
    for (unsigned int i = 0; i < copiedArray.size(); i++)
    {
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
