#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <sys/time.h>


class ScavTrap
{
    public:

        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(const ScavTrap &cpy);

       // ScavTrap     operator = (const ScavTrap &arg);
        unsigned int rangedAttack(std::string const & target);
        unsigned int meleeAttack(std::string const & target);
        unsigned int takeDamage(unsigned int amount);
        unsigned int beRepaired(unsigned int amount);
        unsigned int challengeNewcomer(std::string const & target);
        int          randomGenerator();
        std::string  randomName();

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