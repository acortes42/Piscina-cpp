#include "Pony.hpp"

void    ponyOnTheHeap()
{
    Pony *sky;

    sky = new Pony();
    sky->ponyInfo("Sky", "White", "7", "Female", "6500");
    sky->getAllInfo();
}

void    ponyOnTheStack()
{
    Pony earth;

    earth.ponyInfo("Earth", "Brown", "3", "Male", "7300");
    earth.getAllInfo();
}

int     main()
{
    std::cout << "Using pointer\n\n";
    ponyOnTheHeap();
    std::cout << "\nWithout pointer\n\n";
    ponyOnTheStack();
    return (1);
}