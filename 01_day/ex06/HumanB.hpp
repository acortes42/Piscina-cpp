#ifndef HUMANB_CPP
#define HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
    public:

        HumanB();
        HumanB(std::string name);
        HumanB(std::string name, Weapon &weapon);

        ~HumanB(void);
        void        setWeapon(Weapon weapon);
        std::string getName(void);
        std::string getWeapon(void);
        void        attack();

    private:
        std::string name;
        Weapon      *weapon;

};



#endif