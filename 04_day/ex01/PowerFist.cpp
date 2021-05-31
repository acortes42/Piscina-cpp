#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
    return ;
}

PowerFist::PowerFist(const PowerFist &other) : AWeapon(other)
{
    return ;
}

PowerFist &PowerFist::operator = (const PowerFist &other)
{
    if (this == &other)
        return (*this);
    AWeapon::operator=(other);
    return (*this);
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