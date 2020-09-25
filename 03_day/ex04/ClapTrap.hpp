#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <sys/time.h>

class ClapTrap
{
    public:

        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap &cpy);

        unsigned int rangedAttack(std::string const & target);
        unsigned int meleeAttack(std::string const & target);
        unsigned int takeDamage(unsigned int amount);
        unsigned int beRepaired(unsigned int amount);
        int          randomBuilder();
        std::string  randomName();
        std::string const &getName(void);
        unsigned int const &getHitPoints(void);
        unsigned int const &getMaxHitPoints(void);
        unsigned int const &getEnergyPoints(void);
        unsigned int const &getMaxEnergyPoints(void);
        unsigned int const &getMeelePoints(void);
        unsigned int const &getRangedPoints(void);
        unsigned int const &getArmorReduction(void);


    protected:

        unsigned int         hitPoints;
        unsigned int         maxHitPoints;
        unsigned int         energyPoints;
        unsigned int         maxEnergyPoints;
        unsigned int         level;
        std::string          name;
        unsigned int         meleAttackDmg;
        unsigned int         rangedAttackDmg;
        unsigned int         armorDamageReduction;
};

#endif