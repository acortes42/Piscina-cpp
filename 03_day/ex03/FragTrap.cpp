/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:32:13 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/28 18:09:39 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int FlagTrap::randomGenerator()
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

std::string FlagTrap::randomName()
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

FlagTrap::FlagTrap(void)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->name = FlagTrap::randomName();
    this->meleAttackDmg = 30;
    this->rangedAttackDmg = 20;
    this->armorDamageReduction = 5;
    std::cout << "FR4G-TP " << this->name << " has been created. Sorry for that!!!" << std::endl;
}

FlagTrap::FlagTrap(std::string name)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->name = name;
    this->meleAttackDmg = 30;
    this->rangedAttackDmg = 20;
    this->armorDamageReduction = 5;
    std::cout << "FR4G-TP " << this->name << " has been created. Sorry for that!!!" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other)
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
}

FlagTrap &FlagTrap::operator = (const FlagTrap &other)
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

FlagTrap::~FlagTrap(void)
{
    std::cout << "FR4G-TP " << this->name << " has been transfered to a better place or it's trapped in a eternal pain" << std::endl;
    return;
}

unsigned int FlagTrap::rangedAttack(std::string const & target)
{
    if (this->hitPoints == 0)
    {
        std::cout << "FR4G-TP "<< this->name << " is dead." << std::endl;
        return (0);
    }
    std::cout << "FR4G-TP "<< this->name << " attacks " << target << " at range, causing "<< this->rangedAttackDmg << " points of damage!" << std::endl;
    return (this->rangedAttackDmg);
}

unsigned int FlagTrap::meleeAttack(std::string const & target)
{
    if (this->hitPoints == 0)
    {
        std::cout << "FR4G-TP "<< this->name << " is dead." << std::endl;
        return (0);
    }
    std::cout << "FR4G-TP "<< this->name << " attacks " << target << " at melee, causing "<< this->meleAttackDmg << " points of damage!" << std::endl;
    return (this->meleAttackDmg);
}

unsigned int FlagTrap::takeDamage(int damage)
{
    unsigned int realDamage;

    if (damage <= 0)
    {
        std::cout << "FR4G-TP "<< this->name << " recive 0 points of damage! It survives " 
        << this->hitPoints - realDamage << " points of damage until break" << std::endl;
        return (0);
    }
    realDamage = (this->armorDamageReduction < damage) ? damage - this->armorDamageReduction : 0;
    if (this->hitPoints == 0)
    {
        std::cout << "FR4G-TP "<< this->name << " is already dead." << std::endl;
        return (0);
    }
    if (this->hitPoints < realDamage)
    {
        std::cout << "FR4G-TP "<< this->name << " receives a deadly blow" << std::endl;
        this->hitPoints = 0;
        return (0);
    }
    std::cout << "FR4G-TP "<< this->name << " recive " << realDamage << " points of damage! It survives " 
        << this->hitPoints - realDamage << " points of damage until break" << std::endl;
    this->hitPoints -= realDamage;
    return (this->hitPoints);
}

unsigned int FlagTrap::beRepaired(int restauration)
{
    if (this->hitPoints == 0)
    {
        std::cout << "FR4G-TP "<< this->name << " is already dead." << std::endl;
        return (0);
    }
    if ((this->maxHitPoints - this->hitPoints) < restauration)
    {
        std::cout << "FR4G-TP "<< this->name << " feels the power in his circuits. It's fully repaired now." << std::endl;
        this->hitPoints = this->maxHitPoints;
        return (0);
    }
    std::cout << "FR4G-TP "<< this->name << " is repaired for " << restauration << " hit points." << std::endl;
    this->hitPoints += restauration;
    return (this->hitPoints);
}

unsigned int FlagTrap::vaulthunter_dot_exe(std::string const & target)
{
    unsigned int randNum;
    std::string  actionList[5];

    if (this->hitPoints == 0)
    {
        std::cout << "FR4G-TP "<< this->name << " is dead." << std::endl;
        return (0);
    }
    if (this->energyPoints == 0 || this->energyPoints < 25)
    {
        std::cout << "FR4G-TP "<< this->name << " doesn't have enought energy to perform this attack" << std::endl;
        return (0);
    }
    actionList[0] = " think about how Ghandi would act in this situation. The FR4G-TP acts with a totally unnecessary violence";
    actionList[1] = " The FR4G-TP pays a mercenary to hit the target";
    actionList[2] = " prays for help. The FR4G-TP obtain a weapon and shoot to the target.";
    actionList[3] = " hit the objective with a ladder.";
    actionList[4] = " choose the way of the heroes. The FR4G-TP run away";
    srand (randomGenerator());
    randNum = std::rand() % 5;
    std::cout << this->name << actionList[randNum] << std::endl;
    if (randNum == 0 || randNum == 1 || randNum == 3)
    {
        this->meleeAttack(target);
        this->meleeAttack(target);
        this->meleeAttack(target);
    }
    else if (randNum == 2 || randNum == 4 )
    {
        this->rangedAttack(target);
        this->rangedAttack(target);
    }
    else
        std::cout << this->name << " choose attack in another moment."<< std::endl;
    this->energyPoints -= 25; 
    return (1);
}