#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"


class PowerFist: public AWeapon
{
    public:

        PowerFist();
        ~PowerFist();
        PowerFist(const PowerFist &cpy);

        int attack() const;
    
};

#endif