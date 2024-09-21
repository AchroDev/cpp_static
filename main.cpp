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
    Entity::x = 2; // re-written the correct way
    Entity::y = 3;

    // Instantiating the struct using an initializer
    // Entity e1 = {5, 8}; // Due to the variables being static, the initializer will fail.

    Entity e1;     // Since x and y are "no longer" class members the code would need to be written like this.
    Entity::x = 5; // Now that it's re-written you should understand why 5 and 8 print twice.
    Entity::y = 8;

    e.Print();
    e1.Print();

    std::cin.get();
}
