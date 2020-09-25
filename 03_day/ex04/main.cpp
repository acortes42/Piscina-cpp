#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main( void ) 
{
    /*
    FlagTrap    a;
    ScavTrap    b;
    NinjaTrap   nin;
    */
    SuperTrap   hero;

//    std::string enemy1;
    std::string enemy2;

//    enemy1 = a.randomName();
    enemy2 = hero.randomName();
/*    a.takeDamage(30);
    a.takeDamage(50);
    a.beRepaired(10000000);
    a.vaulthunter_dot_exe(enemy1);
    b.challengeNewcomer(enemy2);
    nin.ninjaShoebox(a);
    nin.ninjaShoebox(b);
    nin.ninjaShoebox(nin);*/
    hero.challengeNewcomer(enemy2);
    return (1);
}