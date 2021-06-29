#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <cstring>
#include "Enemy.hpp"
#include "AWeapon.hpp"


class Character
{
    public:

        Character(std::string const & name);
        virtual ~Character();
        Character(const Character &cpy);
        Character   &operator = (const Character &other);

        std::string getName() const;
        int getAP() const;
        std::string getWeapon() const;
        void recoverAP();
        void equip(AWeapon* weapon);
        void attack(Enemy* objective);
    
    private:
        Character();
        int             ap;
        std::string     name;
        AWeapon         *weapon;
};

std::ostream&   operator<<(std::ostream &os, Character const &arg);


#endif