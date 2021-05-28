#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main( void ) 
{
    std::cout << _CYAN;
    FlagTrap    a;
    ScavTrap    b;
    NinjaTrap   nin;

    std::string enemy1;
    std::string enemy2;

    std::cout << _GREEN;
    enemy1 = a.randomName();
    enemy2 = b.randomName();
    a.takeDamage(-80);
    a.takeDamage(50);
    a.beRepaired(10000000);
    a.vaulthunter_dot_exe(enemy1);
    b.challengeNewcomer(enemy2);
    nin.ninjaShoebox(a);
    nin.ninjaShoebox(b);
    nin.ninjaShoebox(nin);
    std::cout << _RED;
    return (1);
}