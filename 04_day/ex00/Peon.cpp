#include "Peon.hpp"

Peon::Peon(std::string const & name) : Victim(name)
{
    std::cout << "\nOH, NICE DAY FOR A WALK!!!\n" << std::endl;
    return ;
}

Peon::Peon(const Peon &other)
{
    *this = other;
    return ;
}

Peon::~Peon(void)
{
    return;
}