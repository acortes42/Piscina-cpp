#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
    return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) : AWeapon(other)
{
    return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
    return;
}

PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle &other)
{
    if (this == &other)
        return (*this);
    AWeapon::operator=(other);
    return (*this);
}

int PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return (this->getDamage());
}