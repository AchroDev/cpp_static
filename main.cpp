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

int Entity::x; // defining something for the linker to link to
int Entity::y; // being static declares that there is only one instance of the data across all instances of the class/struct

int main()
{
    // Instantiating the struct
    // Entity e; not needed anymore
    Entity::x = 2; // re-written the correct way
    Entity::y = 3;

    // Instantiating the struct using an initializer
    // Entity e1 = {5, 8}; // Due to the variables being static, the initializer will fail.

    // Entity e1;   // not needed anymore
    Entity::x = 5; // Now that it's re-written you should understand why 5 and 8 print twice.
    Entity::y = 8;

    Entity::Print();

    std::cin.get();
}
