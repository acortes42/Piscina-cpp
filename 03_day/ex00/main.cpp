#include "FragTrap.hpp"

int main( void ) 
{
    FlagTrap a;

    a.takeDamage(30);
    a.takeDamage(50);
    a.beRepaired(10000000);
    a.vaulthunter_dot_exe("test");
    a.meleeAttack("test");
    return (1);
}