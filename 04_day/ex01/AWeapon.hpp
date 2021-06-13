#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>


class AWeapon
{
    public:
        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon();
        AWeapon   &operator = (const AWeapon &other);

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