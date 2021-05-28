/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:32:16 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/28 18:10:00 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

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

class FlagTrap
{
    public:

        FlagTrap(void);
        FlagTrap(std::string name);
        ~FlagTrap(void);
        FlagTrap(const FlagTrap &cpy);

        FlagTrap   &operator = (const FlagTrap &other);
        unsigned int rangedAttack(std::string const & target);
        unsigned int meleeAttack(std::string const & target);
        unsigned int takeDamage(int amount);
        unsigned int beRepaired(int amount);
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