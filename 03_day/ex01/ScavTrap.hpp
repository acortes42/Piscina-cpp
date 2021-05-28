/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:32:36 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/28 14:33:26 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

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

class ScavTrap
{
    public:

        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(const ScavTrap &cpy);

        ScavTrap     &operator = (const ScavTrap &other);
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