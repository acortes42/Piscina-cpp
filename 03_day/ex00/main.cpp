/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:32:19 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/28 14:32:20 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    std::cout << _CYAN;
    FlagTrap a;
    FlagTrap b;

    std::cout << _GREEN;
    a.takeDamage(20);
    a.takeDamage(-89);
    a.beRepaired(10000000);
    a.vaulthunter_dot_exe("test");
    a.meleeAttack("test");
    b.meleeAttack("wololo");
    std::cout << _RED;
    return (1);
}