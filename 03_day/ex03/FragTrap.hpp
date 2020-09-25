#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
    public:

        FlagTrap(void);
        FlagTrap(std::string name);
        ~FlagTrap(void);
        FlagTrap(const FlagTrap &cpy);

       // FlagTrap     operator = (const FlagTrap &arg);

        unsigned int vaulthunter_dot_exe(std::string const & target);


    private:

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