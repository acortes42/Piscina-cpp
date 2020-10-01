#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
    return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) : AWeapon(other)
{
    *this = other;
    return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
    return;
}

int PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return (this->getDamage());
}