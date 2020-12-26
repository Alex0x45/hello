#include <iostream>

#include "hellodata.h"

int main()
{
    const auto& msg = getData();

    for (const auto& word : msg)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}