#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Using a struct to have default publicity with variables
struct Entity
{
    static int x, y; // making them static

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
    // Entity e1 = {5, 8}; // Due to the variables being static, the initializer will fail.

    Entity e1; // Since x and y are "no longer" class members the code would need to be written like this.
    e1.x = 5;
    e1.y = 8;

    e.Print();
    e1.Print();

    std::cin.get();
}
