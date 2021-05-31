#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return ;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy(other)
{
    *this = other;
    return ;
}

SuperMutant &SuperMutant::operator = (const SuperMutant &other)
{
    if (this == &other)
        return (*this);
    Enemy::operator=(other);
    return (*this);
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh..." << std::endl;
    return;
}


void SuperMutant::takeDamage(int x)
{
    Enemy::takeDamage(x - 3);
    return ;   
}