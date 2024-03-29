#include "Character.hpp"

Character::Character()
{
    this->name = "random guy";
    this->ap = 40;
    this->weapon = NULL;
    return ;
}

Character::Character(std::string const & name)
{
    this->name = name;
    this->ap = 40;
    this->weapon = NULL;
    return ;
}

Character::Character(const Character &other)
{
    this->ap = other.ap;
    this->name = other.name;
    this->weapon = other.weapon;
}

Character &Character::operator = (const Character &other)
{
    this->ap = other.ap;
    this->name = other.name;
    this->weapon = other.weapon;
    return (*this);
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
    if (this->weapon != NULL)
	    return (this->weapon->getName());
    return ("rock");
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
    else
        std::cout << "You can't use the VATS in this case" << std::endl;
    return ;
}

std::ostream&   operator<<(std::ostream &os, Character const &arg)
{
    os << arg.getName() << " has " << arg.getAP() << " AP and wields a " << arg.getWeapon() << std::endl;
    return (os);
}