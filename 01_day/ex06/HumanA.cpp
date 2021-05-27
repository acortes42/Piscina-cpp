#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    return ;
}

void HumanA::HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
    return ;
}

std::string HumanA::getName()
{
    return (this->name);
}

std::string HumanA::getWeapon()
{
    return (this->weapon.getType());
}

void HumanA::HumanA::setWeapon(std::string weapon)
{
    this->weapon = weapon;
}
