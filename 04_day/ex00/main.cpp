#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"


int main()
{
    std::cout << _GREEN;
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    std::cout << _RED;
    return 0;
}