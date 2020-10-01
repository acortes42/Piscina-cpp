#include "Character.hpp"

Character::Character()
{
    this->name = std::string();
    this->ap = 0;
    return ;
}

Character::Character(std::string const & name)
{
    this->name = name;
    this->ap = 40;
    return ;
}

Character::Character(const Character &other)
{
    *this = other;
    return ;
}

Character::~Character(void)
{
    return;
}

std::string Character::getName(void) const
{
	return (this->name);
}

int Character::getAP(void) const
{
	return (this->ap);
}

std::string Character::getWeapon(void) const
{
    if (this->weapon)
	    return (this->weapon->getName());
    return ("nothing");
}

void Character::recoverAP()
{
    if (this->ap < 30)
        this->ap += 10;
    else
        this->ap = 40;
    
}

void Character::equip(AWeapon*  weapon)
{
    this->weapon = weapon;
}

void Character::attack(Enemy* objective)
{
    if (!objective)
        return ;
    std::cout <<this->getName() << " attacks " << objective->getType() <<" with a " << this->getWeapon() << std::endl;
    if (objective->getHP() > 0)
    {
        if (this->ap >= this->weapon->getAPCost())
        {
            objective->takeDamage(this->weapon->getDamage());
            this->ap -= this->weapon->getAPCost();
        }
        else
            std::cout << "Insuficient AP to use the " << this->weapon->getName() << std::endl;
    }
    if (objective->getHP() ==0)
    {
        delete objective;
    }
    return ;
}

std::ostream&   operator<<(std::ostream &os, Character const &arg)
{
    os << arg.getName() << " has " << arg.getAP() << " AP and wields a " << arg.getWeapon() << std::endl;
    return (os);
}