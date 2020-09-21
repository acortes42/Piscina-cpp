#include "header.hpp"

int main()
{
    Weapon  club("crude spiked club");
    Weapon  noWeapon("without weapon style");
    HumanA Warrior("Warrior Gru", club);
    HumanB Mague("Bloddy Harry", noWeapon);

    Warrior.attack();
    Mague.attack();
    club.setType("rock while is screaming");
    Warrior.attack();
    Mague.attack();
    return (1);
}