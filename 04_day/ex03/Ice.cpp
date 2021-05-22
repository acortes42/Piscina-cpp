#include "Ice.hpp"

Ice::Ice()
{
    return ;
}

Ice::~Ice()
{
    return ;
}

AMateria* Ice::clone() const
{
    return (new Ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}