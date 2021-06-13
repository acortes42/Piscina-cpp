#include "AMateria.hpp"

AMateria::AMateria()
{
    this->xp = 0;
    this->type = "wololo";
    this->inSlots = 0;
    this->slotNum = -1;
    return ;
}

AMateria::AMateria(std::string const & type)
{
    this->xp = 0;
    this->type = type;
    this->inSlots = 0;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->xp = other.getXP();
    this->type = other.getType();
	return (*this);
}

AMateria::~AMateria()
{
    return ;
}

std::string const & AMateria::getType() const { return(this->type); }

unsigned int AMateria::getXP() const
{
    return (this->xp);
}

void AMateria::use(ICharacter& target)
{
    this->xp += 10;
}
