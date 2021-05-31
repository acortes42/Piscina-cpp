#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other)
{
    return ;
}

RadScorpion &RadScorpion::operator = (const RadScorpion &other)
{
    if (this == &other)
        return (*this);
    Enemy::operator=(other);
    return (*this);
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
    return;
}


void RadScorpion::takeDamage(int x)
{
    Enemy::takeDamage(x);
    return ;   
}