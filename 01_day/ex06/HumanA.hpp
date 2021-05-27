#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
    public:

        HumanA(std::string name, Weapon &weapon);

        std::string getName(void);
        std::string getWeapon(void);
        void        setWeapon(std::string weapon);
        void        attack();

    private:
        std::string name;
        Weapon      &weapon;

};



#endif