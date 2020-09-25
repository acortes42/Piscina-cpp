#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
    public:

        NinjaTrap(void);
        NinjaTrap(std::string name);
        ~NinjaTrap(void);
        NinjaTrap(const NinjaTrap &cpy);

       // NinjaTrap     operator = (const NinjaTrap &arg);

        unsigned int    ninjaShoebox(ClapTrap &target);
        unsigned int    ninjaShoebox(FlagTrap &target);
	    unsigned int    ninjaShoebox(ScavTrap &trap);
	    unsigned int    ninjaShoebox(NinjaTrap &trap);
        

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