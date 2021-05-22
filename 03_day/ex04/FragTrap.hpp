#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

# define _RED     "\x1b[31m"
# define _GREEN   "\x1b[32m"
# define _YELLOW  "\x1b[33m"
# define _BLUE    "\x1b[34m"
# define _MAGENTA "\x1b[35m"
# define _CYAN    "\x1b[36m"
# define _RESET   "\x1b[0m"

class FlagTrap: virtual public ClapTrap
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