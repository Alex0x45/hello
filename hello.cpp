#include <iostream>

int main()
{
    auto msg = {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const auto& word : msg)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}