#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"


class PowerFist: public AWeapon
{
    public:

        PowerFist();
        ~PowerFist();
        PowerFist(const PowerFist &cpy);
        PowerFist &operator = (const PowerFist &other);

        int attack() const;
    
};

#endif