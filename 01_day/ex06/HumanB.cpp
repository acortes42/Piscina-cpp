#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    return ;
}

void HumanB::HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
    return ;
}

std::string HumanB::getName()
{
    return (this->name);
}

std::string HumanB::getWeapon()
{
    return (this->weapon.getType());
}
