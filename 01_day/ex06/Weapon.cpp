#include "Weapon.hpp"

Weapon::Weapon()
{
    return ;
}

Weapon::Weapon(std::string type)
{
    setType(type);
    return;
}

void Weapon::setType(std::string type)
{
    this->type = type;
    return ;
}

const std::string &Weapon::getType()
{
    return (this->type);
}