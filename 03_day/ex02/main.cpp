#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) 
{
    FlagTrap a;
    ScavTrap b;
    std::string enemy1;
    std::string enemy2;

    enemy1 = a.randomName();
    enemy2 = b.randomName();
    a.takeDamage(30);
    a.takeDamage(50);
    a.beRepaired(10000000);
    a.vaulthunter_dot_exe(enemy1);
    b.challengeNewcomer(enemy2);
    return (1);
}