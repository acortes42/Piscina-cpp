#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
    return ;
}

PowerFist::PowerFist(const PowerFist &other) : AWeapon(other)
{
    *this = other;
    return ;
}

PowerFist::~PowerFist(void)
{
    return;
}

int PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return (this->getDamage());
}