#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include "iostream"


class AWeapon
{
    public:

        AWeapon(std::string const & name, int apcost, int damage);
        ~AWeapon();
        AWeapon(const AWeapon &cpy);
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual int attack() const = 0;
    
    private:

        int             apcost;
        int             damage;
        std::string     name;
};

#endif