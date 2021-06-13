#include "Character.hpp"

Character::Character(std::string const &name):
	name(name)
{
    this->maxSlots = 4;
    this->usedSlots = 0;
	for (int i = 0; i < 4; i++)
		this->magicSlots[i] = nullptr;
}

Character::Character(Character const &other)
{
    this->name = other.name;
    this->usedSlots = 0;
	for (unsigned int i = 0; i < other.usedSlots; i++)
		this->equip(other.magicSlots[i]->clone());
	for (unsigned int i = this->usedSlots; i < 4; i++)
		this->magicSlots[i] = nullptr;
}

Character::~Character()
{	
    for (int i = 0; i < 4; i++)
		if (this->magicSlots[i] != NULL)
			delete this->magicSlots[i];
}

Character &Character::operator=(Character const &other)
{
    unsigned int n;

    n = 0;
    this->name = other.name;
    this->maxSlots = other.maxSlots;
	while (n < this->usedSlots)
    {
		delete this->magicSlots[n];
        n++;
    }
	this->usedSlots = 0;
    n = 0;
	while (n < this->usedSlots)
    {
		this->equip(other.magicSlots[n]->clone());
        n++;
    }
    n = 0;
    while (n < this->usedSlots)
    {
		this->magicSlots[n] = nullptr;
        n++;
    }
	return (*this);
}

std::string const &Character::getName(void) const
{
    return(this->name);
}

void Character::equip(AMateria* m)
{
    unsigned int x;

    x = 0;
    while (x < this->usedSlots)
    {
        if (this->magicSlots[x] == m)
        {
            return;
        }
        x++;
    }
    this->magicSlots[x] = m;
    this->usedSlots++;
}

// posible fatal error

void Character::unequip(int idx)
{
    if ((unsigned int)idx < maxSlots)
    {
        this->magicSlots[idx] = nullptr;
    }
}


void Character::use(int idx, ICharacter& target)
{   
    if (idx < 0 || (unsigned int)idx >= this->maxSlots || this->magicSlots[idx] == nullptr)
		return ;
    std::cout << this->magicSlots[idx]->getType() << std::endl;
    this->magicSlots[idx]->use(target);
}
