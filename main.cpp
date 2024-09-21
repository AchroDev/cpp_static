#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int s_Variable = 10;

int main()
{
    LOG(s_Variable);
    std::cin.get();
}
