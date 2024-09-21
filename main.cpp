#include <iostream>

#define LOG(x) std::cout << x << std::endl;

extern int s_Variable; // now looking for the variable externally and using the value in static.cpp

int main()
{
    LOG(s_Variable);
    std::cin.get();
}
