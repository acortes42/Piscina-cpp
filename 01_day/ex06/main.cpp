#include "header.hpp"

int main()
{
    std::cout << _GREEN;
    Weapon  club("crude spiked club");
    Weapon  noWeapon = Weapon("puppy");
    Weapon  copy_club = club;

    HumanA Warrior("Warrior Gru", copy_club);
    HumanB Mague("Bloddy Harry", noWeapon);

    Warrior.attack();
    Mague.attack();
    copy_club.setType("rock while cry");
    Warrior.attack();
    Mague.attack();
    std::cout << _RESET;
    return (1);
}