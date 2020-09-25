#ifndef SCAVTRAP_HPP
#define  SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:

        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(const ScavTrap &cpy);

       // ScavTrap     operator = (const ScavTrap &arg);

        unsigned int challengeNewcomer(std::string const & target);
        

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