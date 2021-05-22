#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    return;
}   

AssaultTerminator::AssaultTerminator(const AssaultTerminator &other)
{
    *this = other;
    return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout <<  "I’ll be back..." << std::endl;
    return;
}

void AssaultTerminator::birth() const
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
    return (new AssaultTerminator);
}