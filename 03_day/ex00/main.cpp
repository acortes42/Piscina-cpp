#include "FragTrap.hpp"

int main( void ) 
{
    FlagTrap a;

    std::cout << _GREEN;
    a.takeDamage(50);
    a.takeDamage(30);
    a.beRepaired(10000000);
    a.vaulthunter_dot_exe("test");
    a.meleeAttack("test");
    std::cout << _RED;
    return (1);
}