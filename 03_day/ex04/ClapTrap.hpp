#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <sys/time.h>


# define _RED     "\x1b[31m"
# define _GREEN   "\x1b[32m"
# define _YELLOW  "\x1b[33m"
# define _BLUE    "\x1b[34m"
# define _MAGENTA "\x1b[35m"
# define _CYAN    "\x1b[36m"
# define _RESET   "\x1b[0m"

class ClapTrap
{
    public:

        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap &cpy);

        ClapTrap   &operator = (const ClapTrap &other);
        unsigned int rangedAttack(std::string const & target);
        unsigned int meleeAttack(std::string const & target);
        unsigned int takeDamage(unsigned int amount);
        unsigned int beRepaired(unsigned int amount);
        std::string  getName(void);
        unsigned int getMaxHitPoints(void);
        unsigned int getHitPoints(void);
        unsigned int getEnergyPoints(void);
        unsigned int getMaxEnergyPoints(void);
        unsigned int getArmorReduction(void);
        unsigned int getMeleeAttack(void);
        unsigned int getRangedAttack(void);
        int          randomBuilder(void);
        std::string  randomName(void);


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