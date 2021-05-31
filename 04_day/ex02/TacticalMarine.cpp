#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    std::cout << "* teleports from space *" << std::endl;
    return;
}   

TacticalMarine::TacticalMarine(const TacticalMarine &other)
{
    *this = other;
    return ;
}

TacticalMarine &TacticalMarine::operator = (const TacticalMarine &other)
{
    return (*this);
}

TacticalMarine::~TacticalMarine()
{
    std::cout <<  "Aaargh..." << std::endl;
    return;
}

ISpaceMarine *TacticalMarine::clone(void) const
{
    return (new TacticalMarine);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
