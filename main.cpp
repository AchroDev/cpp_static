#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Using a struct to have default publicity with variables
struct Entity
{
    int x, y;

    // simple function
    void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int main()
{
    // Instantiating the struct
    Entity e;
    e.x = 2;
    e.y = 3;

    // Instantiating the struct using an initializer
    Entity e1 = {5, 8};

    e.Print();
    e1.Print();

    std::cin.get();
}
