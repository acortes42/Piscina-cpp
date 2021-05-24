#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: virtual public ClapTrap, virtual public NinjaTrap
{
    public:

        SuperTrap(void);
        SuperTrap(std::string name);
        ~SuperTrap(void);
        SuperTrap(const SuperTrap &cpy);

       // SuperTrap     operator = (const SuperTrap &arg);

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