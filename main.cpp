#include <iostream>

#define LOG(x) std::cout << x << std::endl;

extern int s_Variable; // still looking externally, but now the variable in static.cpp is static again

int main()
{
    LOG(s_Variable);
    std::cin.get();
}
