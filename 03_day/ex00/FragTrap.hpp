#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include <sys/time.h>


class FlagTrap
{
    public:

        FlagTrap(void);
        FlagTrap(std::string name);
        ~FlagTrap(void);
        FlagTrap(const FlagTrap &cpy);

       // FlagTrap     operator = (const FlagTrap &arg);
        unsigned int rangedAttack(std::string const & target);
        unsigned int meleeAttack(std::string const & target);
        unsigned int takeDamage(unsigned int amount);
        unsigned int beRepaired(unsigned int amount);
        unsigned int vaulthunter_dot_exe(std::string const & target);
        int randomGenerator();
        std::string randomName();

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