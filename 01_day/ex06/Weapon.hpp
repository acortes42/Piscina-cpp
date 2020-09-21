#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>
#include <string>


class Weapon
{
    public:

        Weapon(void);
        Weapon(std::string type);

        void setType(std::string type);
        const std::string &getType(void);

    private:

        std::string type;

};



#endif