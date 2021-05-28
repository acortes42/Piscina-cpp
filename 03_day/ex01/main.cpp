/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:32:41 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/28 18:11:15 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) 
{
    std::cout << _CYAN;
    FlagTrap a;
    ScavTrap b;
    std::string enemy1;
    std::string enemy2;

    std::cout << _GREEN;

    enemy1 = a.randomName();
    enemy2 = b.randomName();
    a.takeDamage(30);
    a.takeDamage(50);
    a.beRepaired(10000000);
    a.vaulthunter_dot_exe(enemy1);
    a.meleeAttack(enemy1);
    b.challengeNewcomer(enemy2);

    std::cout << _RED;
    return (1);
}