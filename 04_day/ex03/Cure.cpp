#include "Cure.hpp"

Cure::Cure()
{
    return ;
}

Cure::~Cure()
{
    return ;
}

AMateria* Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
    AMateria::use(target);
    return ;
}