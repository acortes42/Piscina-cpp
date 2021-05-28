/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:32:33 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/28 18:09:31 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int ScavTrap::randomGenerator()
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

std::string ScavTrap::randomName()
{
    int         n1;
    int         n2;
    int         n3;
    std::string vocals;
    std::string consonants;
    std::string ret;

    vocals = "aeiou";
    consonants = "qwrtypsdfghjklzxcvbnm";
    ret = "";
    srand (randomGenerator());
    n3 = std::rand() % 4 + 3;
    while (n3 > 0)
    {
        n1 = std::rand() % vocals.length();
        n2 = std::rand() % consonants.length();
        if (n3 % 2 == 0)
            ret += vocals[n1];
        else
            ret += consonants[n2];
        n3--;
    }
    ret[0] = toupper(ret[0]);
    return (ret);
};

ScavTrap::ScavTrap(void)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->name = ScavTrap::randomName();
    this->meleAttackDmg = 20;
    this->rangedAttackDmg = 15;
    this->armorDamageReduction = 3;
    std::cout << this->name << ", the ScavTrap has been created. Another one, another problem." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->name = name;
    this->meleAttackDmg = 20;
    this->rangedAttackDmg = 15;
    this->armorDamageReduction = 3;
    std::cout << this->name << ", the ScavTrap, has been created. Another one, another problem." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleAttackDmg = other.meleAttackDmg;
    this->rangedAttackDmg = other.rangedAttackDmg;
    this->armorDamageReduction = other.armorDamageReduction;
    std::cout << this->name << ", the ScavTrap, has been created. Another one, another problem." << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &other)
{
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->meleAttackDmg = other.meleAttackDmg;
    this->rangedAttackDmg = other.rangedAttackDmg;
    this->armorDamageReduction = other.armorDamageReduction;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << this->name << " is tortured until a horrible dead" << std::endl;
    return;
}

unsigned int ScavTrap::rangedAttack(std::string const & target)
{
    if (this->hitPoints == 0)
    {
        std::cout << "Scav-TP "<< this->name << " is dead. Don't push him to work in this state" << std::endl;
        return (0);
    }
    std::cout << "Scav-TP "<< this->name << " attacks " << target << " at range, causing "<< this->rangedAttackDmg << " points of damage!" << std::endl;
    return (this->rangedAttackDmg);
}

unsigned int ScavTrap::meleeAttack(std::string const & target)
{
    if (this->hitPoints == 0)
    {
        std::cout << "Scav-TP "<< this->name << " is dead. Don't push him to work in this state" << std::endl;
        return (0);
    }
    std::cout << "Scav-TP "<< this->name << " attacks " << target << " at melee, causing "<< this->meleAttackDmg << " points of damage!" << std::endl;
    return (this->meleAttackDmg);
}

unsigned int ScavTrap::takeDamage(unsigned int damage)
{
    unsigned int realDamage;

    realDamage = (this->armorDamageReduction < damage) ? damage - this->armorDamageReduction : 0;
    if (this->hitPoints == 0)
    {
        std::cout << "Scav-TP "<< this->name << " is already dead, but...who don't feel the necessity of hit a dead Scav-TP" << std::endl;
        return (0);
    }
    if (this->hitPoints < realDamage)
    {
        std::cout << "Scav-TP "<< this->name << " receives a deadly blow" << std::endl;
        this->hitPoints = 0;
        return (0);
    }
    std::cout << "Scav-TP "<< this->name << " recive " << realDamage << " points of damage! It would resist " 
        << this->hitPoints - realDamage << " points of damage until break" << std::endl;
    this->hitPoints -= realDamage;
    return (this->hitPoints);
}

unsigned int ScavTrap::beRepaired(unsigned int restauration)
{
    if (this->hitPoints == 0)
    {
        std::cout << "Scav-TP "<< this->name << " is already dead. But thanks for try to save his live" << std::endl;
        return (0);
    }
    if ((this->maxHitPoints - this->hitPoints) < restauration)
    {
        std::cout << "Scav-TP "<< this->name << " feels the power in his circuits. It's fully repaired now." << std::endl;
        this->hitPoints = this->maxHitPoints;
        return (0);
    }
    std::cout << "Scav-TP "<< this->name << " is repaired for " << restauration << " hit points." << std::endl;
    this->hitPoints += restauration;
    return (this->hitPoints);
}

unsigned int ScavTrap::challengeNewcomer(std::string const & target)
{
    unsigned int randNum;
    int          takeD;
    std::string  actionList[5];

    if (this->hitPoints == 0)
    {
        std::cout << "Scav-TP "<< this->name << " is dead. Don't push him to work in this state" << std::endl;
        return (0);
    }

    actionList[0] = " fight for his honor.";
    actionList[1] =  " go to a primal planet for flowers.";
    actionList[2] = " try to be a better robot and help in differents affairs";
    actionList[3] = " it's having a wonderful day until has been shooted.";
    actionList[4] = " start a travel to conquere the dark dimension. NO REWARD. 50% posibility of a paintful dead";
    srand (randomGenerator());
    randNum = std::rand() % 5;
    std::cout << this->name << actionList[randNum] << " "<< " receives damage from " << target << " attack" << std::endl;
    takeD = std::rand() % 101;
    if (randNum == 1 || randNum == 2)
        this->takeDamage(takeD);
    else if(randNum == 4 && takeD % 2 == 1)
        this->takeDamage(100000);
    else
        this->takeDamage(takeD);
    return (1);
}